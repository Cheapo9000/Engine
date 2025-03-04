// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadowSceneRenderer.h"
#include "ShadowScene.h"
#include "DeferredShadingRenderer.h"
#include "ScenePrivate.h"
#include "ShadowRendering.h"
#include "VirtualShadowMaps/VirtualShadowMapCacheManager.h"
#include "VirtualShadowMaps/VirtualShadowMapProjection.h"
#include "SceneCulling/SceneCulling.h"
#include "Rendering/NaniteStreamingManager.h"

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
#include "DynamicPrimitiveDrawing.h"
#endif

CSV_DECLARE_CATEGORY_EXTERN(VSM);

extern int32 GForceInvalidateDirectionalVSM;

TAutoConsoleVariable<int32> CVarVSMMaterialVisibility(
	TEXT("r.Shadow.Virtual.Nanite.MaterialVisibility"),
	0,
	TEXT("Enable Nanite CPU-side visibility filtering of draw commands, depends on r.Nanite.MaterialVisibility being enabled."),
	ECVF_RenderThreadSafe
);

TAutoConsoleVariable<int32> CVarMaxDistantLightsPerFrame(
	TEXT("r.Shadow.Virtual.MaxDistantUpdatePerFrame"),
	1,
	TEXT("Maximum number of distant lights to update each frame. Invalidated lights that were missed may be updated in a later frame (round-robin)."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<int32> CVarDistantLightMode(
	TEXT("r.Shadow.Virtual.DistantLightMode"),
	1,
	TEXT("Control whether distant light mode is enabled for local lights.\n0 == Off, \n1 == On (default), \n2 == Force All.\n")
	TEXT("When on, lights with a pixel footprint below the threshold are marked as distant. Updates to distant lights are throttled (force-cached), they use simpler page-table logic and the memory cost is lower."),
	ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<float> CVarDistantLightForceCacheFootprintFraction(
	TEXT("r.Shadow.Virtual.DistantLightForceCacheFootprintFraction"),
	0.0f,
	TEXT("Fraction of footprint size below which start force-caching lights that are invalidated (i.e., are moving or re-added)\n")
	TEXT("  Larger values may improve performance but may also produce more visible artifacts\n")
	TEXT("  The base footprint is based on the page size.\n")
	TEXT("  0.0 == Never force-cache (default), 1.0 == Always force-cache."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<bool> CVarUseConservativeDistantLightThreshold(
	TEXT("r.Shadow.Virtual.UseConservativeDistantLightThreshold"),
	false,
	TEXT("Base the distant light cutoff on the minimum mip level instead of the shadow resolution calculated through the old path.\n")
	TEXT("  This fixes problems around the use of an inscribed sphere."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<float> CVarNaniteShadowsLODBias(
	TEXT("r.Shadow.NaniteLODBias"),
	1.0f,
	TEXT("LOD bias for nanite geometry in shadows. 0 = full detail. >0 = reduced detail."),
	ECVF_Scalability | ECVF_RenderThreadSafe);

TAutoConsoleVariable<int32> CVarVirtualShadowOnePassProjection(
	TEXT("r.Shadow.Virtual.OnePassProjection"),
	1,
	TEXT("Projects all local light virtual shadow maps in a single pass for better performance."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<float> CVarResolutionLodBiasLocal(
	TEXT("r.Shadow.Virtual.ResolutionLodBiasLocal"),
	0.0f,
	TEXT("Bias applied to LOD calculations for local lights. -1.0 doubles resolution, 1.0 halves it and so on."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

static TAutoConsoleVariable<float> CVarResolutionLodBiasLocalMoving(
	TEXT("r.Shadow.Virtual.ResolutionLodBiasLocalMoving"),
	1.0f,
	TEXT("Bias applied to LOD calculations for local lights that are moving. -1.0 doubles resolution, 1.0 halves it and so on.\n")
	TEXT("The bias transitions smoothly back to ResolutionLodBiasLocal as the light transitions to non-moving, see 'r.Shadow.Scene.LightActiveFrameCount'."),
	ECVF_Scalability | ECVF_RenderThreadSafe
);

extern TAutoConsoleVariable<int32> CVarMarkPixelPagesMipModeLocal;

bool IsVSMOnePassProjectionEnabled(const FEngineShowFlags& ShowFlags)
{
	return CVarVirtualShadowOnePassProjection.GetValueOnAnyThread() 
		// Debug outputs from projection pass do not support one pass projection
		&& (ShowFlags.VisualizeVirtualShadowMap == 0);
}

DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Total Raster Bins"), STAT_VSMNaniteBasePassTotalRasterBins, STATGROUP_ShadowRendering);
DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Visible Raster Bins"), STAT_VSMNaniteBasePassVisibleRasterBins, STATGROUP_ShadowRendering);

DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Total Shading Bins"), STAT_VSMNaniteBasePassTotalShadingBins, STATGROUP_ShadowRendering);
DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Visible Shading Bins"), STAT_VSMNaniteBasePassVisibleShadingBins, STATGROUP_ShadowRendering);

DECLARE_DWORD_COUNTER_STAT(TEXT("Distant Light Count"), STAT_DistantLightCount, STATGROUP_ShadowRendering);
DECLARE_DWORD_COUNTER_STAT(TEXT("Distant Cached Count"), STAT_DistantCachedCount, STATGROUP_ShadowRendering);

DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Light Projections (Directional)"), STAT_VSMDirectionalProjectionFull, STATGROUP_ShadowRendering);
DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Light Projections (Local Full)"), STAT_VSMLocalProjectionFull, STATGROUP_ShadowRendering);
DECLARE_DWORD_COUNTER_STAT(TEXT("VSM Light Projections (Local One Pass Copy)"), STAT_VSMLocalProjectionOnePassCopy, STATGROUP_ShadowRendering);

FShadowSceneRenderer::FShadowSceneRenderer(FDeferredShadingSceneRenderer& InSceneRenderer)
	: SceneRenderer(InSceneRenderer)
	, Scene(*InSceneRenderer.Scene)
	, ShadowScene(*Scene.ShadowScene)
	, VirtualShadowMapArray(InSceneRenderer.VirtualShadowMapArray)
	, bUseConservativeDistantLightThreshold(CVarUseConservativeDistantLightThreshold.GetValueOnAnyThread())
	, DistantLightMode(CVarDistantLightMode.GetValueOnAnyThread())
{
}

float FShadowSceneRenderer::ComputeNaniteShadowsLODScaleFactor()
{
	return FMath::Pow(2.0f, -CVarNaniteShadowsLODBias.GetValueOnRenderThread()) * Nanite::GStreamingManager.GetQualityScaleFactor();
}

namespace
{

struct FHeapPair
{
	int32 Age;
	TSharedPtr<FVirtualShadowMapPerLightCacheEntry> CacheEntry;

	// Order for a min-heap, we always want to replace the least-old item
	bool operator <(const FHeapPair& Other) const { return Age < Other.Age; }
};

}

void FShadowSceneRenderer::BeginRender(FRDGBuilder& GraphBuilder)
{
	bNeedVSMProjection = false;
	bNeedMegaLightsProjection = false;

	ViewDatas.Reserve(SceneRenderer.Views.Num());
	for (const FViewInfo& View : SceneRenderer.Views)
	{
		const FVector2f ViewSize = FVector2f(View.ViewRect.Size());
		FVector2f RadiusClipXY = FVector2f(2.0f) / ViewSize;

		const FMatrix &ViewToClip = View.ViewMatrices.GetProjectionMatrix();
		// TODO: is RadiusXY always symmetrical?
		FVector2f ProjScaleXY = FVector2f(static_cast<float>(ViewToClip.M[0][0]), static_cast<float>(ViewToClip.M[1][1]));
		FVector2f RadiusXY = RadiusClipXY / ProjScaleXY;
		float MinRadiusXY = FMath::Min(RadiusXY.X, RadiusXY.Y);
		float ClipToViewSizeScale = ViewToClip.M[2][3] * MinRadiusXY;
		float ClipToViewSizeBias = ViewToClip.M[3][3] * MinRadiusXY;
		ViewDatas.Emplace(FViewData{ ClipToViewSizeScale, ClipToViewSizeBias });
	}

	// Kick off shadow scene updates.
	ShadowScene.UpdateForRenderedFrame(GraphBuilder);

	// Priority queue of distant lights to update.
	const int32 MaxToUpdate = CVarMaxDistantLightsPerFrame.GetValueOnRenderThread() < 0 ? INT32_MAX : CVarMaxDistantLightsPerFrame.GetValueOnRenderThread();

	if (MaxToUpdate == 0 || !VirtualShadowMapArray.IsEnabled() || !VirtualShadowMapArray.CacheManager->IsCacheEnabled())
	{
		return;
	}	
	
	RendererSetupTask = GraphBuilder.AddSetupTask([this, MaxToUpdate]()
	{
		FVirtualShadowMapArrayCacheManager& CacheManager = *VirtualShadowMapArray.CacheManager;

		TArray<FHeapPair> DistantLightUpdateQueue;
		int32 SceneFrameNumber = int32(Scene.GetFrameNumber());
		for (auto It = CacheManager.CreateConstEntryIterator(); It; ++It)
		{
			TSharedPtr<FVirtualShadowMapPerLightCacheEntry> PerLightCacheEntry = It.Value();
			if (PerLightCacheEntry->IsFullyCached())
			{
				int32 Age = SceneFrameNumber - int32(PerLightCacheEntry->GetLastScheduledFrameNumber());
				if (DistantLightUpdateQueue.Num() < MaxToUpdate)
				{
					DistantLightUpdateQueue.HeapPush(FHeapPair{ Age, PerLightCacheEntry});
				}
				else
				{
					// Queue is full, but we found an older item
					if (DistantLightUpdateQueue.HeapTop().Age < Age)
					{
						// Replace heap top and restore heap property.
						DistantLightUpdateQueue[0] = FHeapPair{ Age, PerLightCacheEntry };
						AlgoImpl::HeapSiftDown(DistantLightUpdateQueue.GetData(), 0, DistantLightUpdateQueue.Num(), FIdentityFunctor(), TLess<FHeapPair>());
					}
				}
			}
		}

		for (const FHeapPair &HeapPair : DistantLightUpdateQueue)
		{
			// Mark frame it was scheduled, this is picked up later in AddLocalLightShadow to trigger invalidation 
			HeapPair.CacheEntry->Current.ScheduledFrameNumber = SceneFrameNumber;
		}
	});
}

UE::Renderer::Private::IShadowInvalidatingInstances *FShadowSceneRenderer::GetInvalidatingInstancesInterface(const FSceneView *SceneView)
{
	// No need to collect invalidations if there is nothing to invalidate.
	FVirtualShadowMapArrayCacheManager* CacheManager = Scene.GetVirtualShadowMapCache();
	if (CacheManager && CacheManager->IsCacheDataAvailable())
	{
		// TODO: Make use of the SceneView parameter to register invalidations for view-dependent shadows appropriately.
		return CacheManager->GetInvalidatingInstancesInterface();
	}
	return nullptr;
}


static float GetResolutionLODBiasLocal(float LightMobilityFactor, float LightLODBias)
{
	return FVirtualShadowMapArray::InterpolateResolutionBias(
		CVarResolutionLodBiasLocal.GetValueOnRenderThread(),
		CVarResolutionLodBiasLocalMoving.GetValueOnRenderThread(),
		LightMobilityFactor) + LightLODBias;
}

FVirtualShadowMapProjectionShaderData FShadowSceneRenderer::GetLocalLightProjectionShaderData(
	float ResolutionLODBiasLocal,
	const FProjectedShadowInfo* ProjectedShadowInfo,
	int32 MapIndex) const
{
	TSharedPtr<FVirtualShadowMapPerLightCacheEntry> CacheEntry = ProjectedShadowInfo->VirtualShadowMapPerLightCacheEntry;
	check(CacheEntry.IsValid());

	int32 VirtualShadowMapId = ProjectedShadowInfo->VirtualShadowMapId + MapIndex;
	bool bIsSinglePageSM = FVirtualShadowMapArray::IsSinglePage(VirtualShadowMapId);
	check(VirtualShadowMapId != INDEX_NONE && CacheEntry->bIsDistantLight == bIsSinglePageSM);

	uint32 Flags = CacheEntry->IsUncached() ? VSM_PROJ_FLAG_UNCACHED : 0U;

	const FViewMatrices ViewMatrices = ProjectedShadowInfo->GetShadowDepthRenderingViewMatrices(MapIndex, true);
	const FDFVector3 PreViewTranslation(ProjectedShadowInfo->PreShadowTranslation);

	FVirtualShadowMapProjectionShaderData Data; 
	Data.ShadowViewToClipMatrix					= FMatrix44f(ViewMatrices.GetProjectionMatrix());
	Data.TranslatedWorldToShadowUVMatrix		= FMatrix44f(CalcTranslatedWorldToShadowUVMatrix( ViewMatrices.GetTranslatedViewMatrix(), ViewMatrices.GetProjectionMatrix() ));
	Data.TranslatedWorldToShadowUVNormalMatrix	= FMatrix44f(CalcTranslatedWorldToShadowUVNormalMatrix( ViewMatrices.GetTranslatedViewMatrix(), ViewMatrices.GetProjectionMatrix() ));
	Data.PreViewTranslationHigh					= PreViewTranslation.High;
	Data.PreViewTranslationLow					= PreViewTranslation.Low;
	Data.LightType								= ProjectedShadowInfo->GetLightSceneInfo().Proxy->GetLightType();
	Data.LightSourceRadius						= ProjectedShadowInfo->GetLightSceneInfo().Proxy->GetSourceRadius();
	Data.ResolutionLodBias						= ResolutionLODBiasLocal;
	Data.LightRadius							= ProjectedShadowInfo->GetLightSceneInfo().Proxy->GetRadius();
	Data.LightDirection                         = FVector3f(0, 0, 0);	// Unused for local lights
	Data.Flags									= Flags;
	Data.TexelDitherScale						= ProjectedShadowInfo->GetLightSceneInfo().Proxy->GetVSMTexelDitherScale();

	return Data;
}


/**
 * Calculate the radius in world-space units of a single pixel at a given depth.
 */
static float GetWorldSpacePixelFootprint(float ViewSpaceDepth, float ClipToViewSizeScale, float ClipToViewSizeBias)
{
	return ViewSpaceDepth * ClipToViewSizeScale + ClipToViewSizeBias;
}

/**
 * Compute the lowest (highest res) mip level that might be marked by any pixels inside the light influence radius for a given scene primary view.
 */
static uint32 GetConservativeMipLevelLocal(const FViewInfo& View, float ClipToViewSizeScale, float ClipToViewSizeBias, const FVector& LightOrigin, float LightRadius, float WorldToShadowFootprintScale, float ResolutionLodBias, float GlobalResolutionLodBias, uint32 MipModeLocal)
{
	// Note: not just a rotation, full world-space DP.
	FVector ViewSpaceOrigin = View.ShadowViewMatrices.GetViewMatrix().TransformPosition(LightOrigin);

	// Remove radius to arrive at minimum possible z-distance in view space, from primary view.
	float RadiusWorld = GetWorldSpacePixelFootprint(FMath::Max(0.0f, float(ViewSpaceOrigin.Z) - LightRadius), ClipToViewSizeScale, ClipToViewSizeBias);

	// Radius is the max possible shadow view space Z, which would require the max res.
	float ShadowFootprint = RadiusWorld * WorldToShadowFootprintScale / LightRadius;

	return UE::HLSL::GetMipLevelLocal(ShadowFootprint, MipModeLocal, ResolutionLodBias, GlobalResolutionLodBias);
}

TSharedPtr<FVirtualShadowMapPerLightCacheEntry> FShadowSceneRenderer::AddLocalLightShadow(const FWholeSceneProjectedShadowInitializer& ProjectedShadowInitializer, FProjectedShadowInfo* ProjectedShadowInfo, FLightSceneInfo* LightSceneInfo, float MaxScreenRadius)
{
	FVirtualShadowMapArrayCacheManager* CacheManager = VirtualShadowMapArray.CacheManager;

	const int32 LocalLightShadowIndex = LocalLights.Num();
	FLocalLightShadowFrameSetup& LocalLightShadowFrameSetup = LocalLights.AddDefaulted_GetRef();
	LocalLightShadowFrameSetup.ProjectedShadowInfo = ProjectedShadowInfo;
	LocalLightShadowFrameSetup.LightSceneInfo = LightSceneInfo;

	const FLightSceneProxy* LightSceneProxy = ProjectedShadowInfo->GetLightSceneInfo().Proxy;
	const float ResolutionLODBiasLocal = GetResolutionLODBiasLocal(ShadowScene.GetLightMobilityFactor(LightSceneInfo->Id), LightSceneProxy->GetVSMResolutionLodBias());

	// Compute conservative mip level estimate based on radius of the bounding sphere.
	// TODO: can probably do better by finding  closest point on cone for certain scenarios? Not as important as it might seem as the worst case is for a narrow cone, but then the narrow FOV limits the required resolution.

	const FVector2f ShadowViewSize = FVector2f(FVirtualShadowMap::VirtualMaxResolutionXY, FVirtualShadowMap::VirtualMaxResolutionXY);
	const FMatrix &ShadowViewToClip = ProjectedShadowInfo->bOnePassPointLightShadow ? ProjectedShadowInfo->OnePassShadowFaceProjectionMatrix : ProjectedShadowInfo->ViewToClipOuter;
	float ShadowProjScale = ShadowViewToClip.M[0][0]; // always symmetrical
	const float WorldToShadowFootprintScale = ShadowProjScale * ShadowViewSize.X;

	uint32 MinMipLevel = FVirtualShadowMap::MaxMipLevels;
	for (int32 ViewIndex = 0; ViewIndex < SceneRenderer.Views.Num(); ++ViewIndex)
	{
		const FViewInfo& View = SceneRenderer.Views[ViewIndex];
		const FViewData& ViewData = ViewDatas[ViewIndex];

		MinMipLevel = FMath::Min(MinMipLevel, GetConservativeMipLevelLocal(
			View, 
			ViewData.ClipToViewSizeScale,
			ViewData.ClipToViewSizeBias,
			LightSceneProxy->GetOrigin(), 
			LightSceneProxy->GetRadius(),
			WorldToShadowFootprintScale,
			ResolutionLODBiasLocal, 
			CacheManager->GetGlobalResolutionLodBias(), 
			CVarMarkPixelPagesMipModeLocal.GetValueOnRenderThread()
			));
	}
	
	bool bIsDistantLight = DistantLightMode == 2;
	bool bShouldForceTimeSliceDistantUpdate = false;

	if (DistantLightMode == 1)
	{
		if (bUseConservativeDistantLightThreshold)
		{
			// use distant light only if we are sure that there's only one mip level.
			bIsDistantLight = MinMipLevel == (FVirtualShadowMap::MaxMipLevels - 1);
			bShouldForceTimeSliceDistantUpdate = false;// TODO: (bIsDistantLight && MaxScreenRadius <= BiasedFootprintThreshold * DistantLightForceCacheFootprintFraction); ??
		}
		else
		{
			// Single page res, at this point we force the VSM to be single page
			const float BiasedFootprintThreshold = float(FVirtualShadowMap::PageSize) * FMath::Exp2(ResolutionLODBiasLocal - LightSceneProxy->GetVSMResolutionLodBias());
			bIsDistantLight = MaxScreenRadius <= BiasedFootprintThreshold;
			
			const float DistantLightForceCacheFootprintFraction = FMath::Clamp(CVarDistantLightForceCacheFootprintFraction.GetValueOnRenderThread(), 0.0f, 1.0f);
			bShouldForceTimeSliceDistantUpdate = (bIsDistantLight && MaxScreenRadius <= BiasedFootprintThreshold * DistantLightForceCacheFootprintFraction);

		}
	}


	const int32 NumMaps = ProjectedShadowInitializer.bOnePassPointLightShadow ? 6 : 1;
	TSharedPtr<FVirtualShadowMapPerLightCacheEntry> PerLightCacheEntry = CacheManager->FindCreateLightCacheEntry(LightSceneInfo->Id, 0, NumMaps);
			
	LocalLightShadowFrameSetup.PerLightCacheEntry = PerLightCacheEntry;
	bool bIsCached = PerLightCacheEntry->UpdateLocal(
		ProjectedShadowInitializer,
		LightSceneProxy->GetOrigin(),
		LightSceneProxy->GetRadius(),
		bIsDistantLight,
		CacheManager->IsCacheEnabled(),
		!bShouldForceTimeSliceDistantUpdate);

	if (bIsCached && bIsDistantLight && PerLightCacheEntry->Prev.ScheduledFrameNumber == Scene.GetFrameNumber())
	{
		PerLightCacheEntry->Invalidate();
	}

	// Update info on the ProjectionShadowInfo; eventually this should all move into local data structures here
	const int32 VirtualShadowMapId = VirtualShadowMapArray.Allocate(bIsDistantLight, NumMaps);
	ProjectedShadowInfo->VirtualShadowMapId = VirtualShadowMapId;
	ProjectedShadowInfo->VirtualShadowMapPerLightCacheEntry = PerLightCacheEntry;
	ProjectedShadowInfo->bShouldRenderVSM = !PerLightCacheEntry->IsFullyCached();

	for (int32 Index = 0; Index < NumMaps; ++Index)
	{
		const int32 FaceVirtualShadowMapId = VirtualShadowMapId + Index;
		FVirtualShadowMapCacheEntry& VirtualSmCacheEntry = PerLightCacheEntry->ShadowMapEntries[Index];
		VirtualSmCacheEntry.Update(VirtualShadowMapArray, *PerLightCacheEntry, FaceVirtualShadowMapId);
		// Update projection data
		VirtualSmCacheEntry.ProjectionData = GetLocalLightProjectionShaderData(ResolutionLODBiasLocal, ProjectedShadowInfo, Index);
		VirtualSmCacheEntry.ProjectionData.MinMipLevel = MinMipLevel;
	}

	FLightOcclusionType OcclusionType = GetLightOcclusionType(*LightSceneInfo->Proxy, SceneRenderer.ViewFamily);
	// Depending on which type of projection we're going to use, mark that we need to associated path for later
	if (OcclusionType == FLightOcclusionType::Shadowmap)
	{
		bNeedVSMProjection = true;
	}
	else if (OcclusionType == FLightOcclusionType::MegaLightsVSM)
	{
		bNeedMegaLightsProjection = true;
	}
	else
	{
		// ??? Should not get into this path with other projection types
		check(false);
	}

	return PerLightCacheEntry;
}

void FShadowSceneRenderer::AddDirectionalLightShadow(FProjectedShadowInfo* ProjectedShadowInfo)
{
	FDirectionalLightShadowFrameSetup& DirectionalLightShadowFrameSetup = DirectionalLights.AddDefaulted_GetRef();
	DirectionalLightShadowFrameSetup.ProjectedShadowInfo = ProjectedShadowInfo;
}

void FShadowSceneRenderer::PostInitDynamicShadowsSetup()
{
	// Dispatch async Nanite culling job if appropriate
	if (CVarVSMMaterialVisibility.GetValueOnRenderThread() != 0)
	{
		TArray<FConvexVolume, SceneRenderingAllocator> NaniteCullingViewsVolumes;
		// If we have a clipmap that can't be culled, it'd be a complete waste of time to cull the local lights.
		bool bUnboundedClipmap = false;
		
		for (const FDirectionalLightShadowFrameSetup& DirectionalLightShadowFrameSetup : DirectionalLights)
		{
			FProjectedShadowInfo* ProjectedShadowInfo = DirectionalLightShadowFrameSetup.ProjectedShadowInfo;
			if (!bUnboundedClipmap && ProjectedShadowInfo->bShouldRenderVSM)
			{
				const bool bIsCached = VirtualShadowMapArray.CacheManager->IsCacheEnabled() && GForceInvalidateDirectionalVSM == 0;

				// We can only do this culling if the light is both uncached & it is using the accurate bounds (i.e., r.Shadow.Virtual.Clipmap.UseConservativeCulling is turned off).
				if (!bIsCached && !ProjectedShadowInfo->CascadeSettings.ShadowBoundsAccurate.Planes.IsEmpty())
				{
					NaniteCullingViewsVolumes.Add(ProjectedShadowInfo->CascadeSettings.ShadowBoundsAccurate);
				}
				else
				{
					bUnboundedClipmap = true;
				}
			}
		}

		if (!bUnboundedClipmap)
		{
			for (const FLocalLightShadowFrameSetup& LocalLightShadowFrameSetup : LocalLights)
			{
				FProjectedShadowInfo* ProjectedShadowInfo = LocalLightShadowFrameSetup.ProjectedShadowInfo;
				if (ProjectedShadowInfo->bShouldRenderVSM)
				{
					FConvexVolume WorldSpaceCasterOuterFrustum = ProjectedShadowInfo->CasterOuterFrustum;
					for (FPlane& Plane : WorldSpaceCasterOuterFrustum.Planes)
					{
						Plane = Plane.TranslateBy(-ProjectedShadowInfo->PreShadowTranslation);
					}
					WorldSpaceCasterOuterFrustum.Init();
					NaniteCullingViewsVolumes.Add(WorldSpaceCasterOuterFrustum);
				}
			}

			if (!NaniteCullingViewsVolumes.IsEmpty())
			{
				NaniteVisibilityQuery = Scene.NaniteVisibility[ENaniteMeshPass::BasePass].BeginVisibilityQuery(
					SceneRenderer.Allocator,
					Scene,
					NaniteCullingViewsVolumes,
					&Scene.NaniteRasterPipelines[ENaniteMeshPass::BasePass],
					&Scene.NaniteShadingPipelines[ENaniteMeshPass::BasePass]
				);
			}
		}
	}
}

void FShadowSceneRenderer::RenderVirtualShadowMaps(FRDGBuilder& GraphBuilder, bool bNaniteEnabled, bool bUpdateNaniteStreaming)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FShadowSceneRenderer::RenderVirtualShadowMaps);

	// Always process an existing query if it exists
	if (NaniteVisibilityQuery != nullptr)
	{
#if STATS
		GraphBuilder.AddSetupTask([Query = NaniteVisibilityQuery]
		{
			const FNaniteVisibilityResults& VisibilityResults = *Nanite::GetVisibilityResults(Query);

			uint32 TotalRasterBins = 0;
			uint32 VisibleRasterBins = 0;
			VisibilityResults.GetRasterBinStats(VisibleRasterBins, TotalRasterBins);

			uint32 TotalShadingBins = 0;
			uint32 VisibleShadingBins = 0;
			VisibilityResults.GetShadingBinStats(VisibleShadingBins, TotalShadingBins);

			SET_DWORD_STAT(STAT_VSMNaniteBasePassTotalRasterBins, TotalRasterBins);
			SET_DWORD_STAT(STAT_VSMNaniteBasePassVisibleRasterBins, VisibleRasterBins);

			SET_DWORD_STAT(STAT_VSMNaniteBasePassTotalShadingBins, TotalShadingBins);
			SET_DWORD_STAT(STAT_VSMNaniteBasePassVisibleShadingBins, VisibleShadingBins);

		}, Nanite::GetVisibilityTask(NaniteVisibilityQuery));
#endif
	}

	const TArray<FProjectedShadowInfo*, SceneRenderingAllocator>& VirtualShadowMapShadows = SceneRenderer.SortedShadowsForShadowDepthPass.VirtualShadowMapShadows;
	TArray<TSharedPtr<FVirtualShadowMapClipmap>, SceneRenderingAllocator>& VirtualShadowMapClipmaps = SceneRenderer.SortedShadowsForShadowDepthPass.VirtualShadowMapClipmaps;

	if (VirtualShadowMapShadows.Num() == 0 && VirtualShadowMapClipmaps.Num() == 0)
	{
		return;
	}

	if (bNaniteEnabled)
	{
		VirtualShadowMapArray.RenderVirtualShadowMapsNanite(GraphBuilder, SceneRenderer, bUpdateNaniteStreaming, NaniteVisibilityQuery, VirtualShadowMapViews, SceneInstanceCullingQuery);
	}

	if (UseNonNaniteVirtualShadowMaps(SceneRenderer.ShaderPlatform, SceneRenderer.FeatureLevel))
	{
		VirtualShadowMapArray.RenderVirtualShadowMapsNonNanite(GraphBuilder, SceneRenderer.GetSceneUniforms(), VirtualShadowMapShadows, SceneRenderer.Views);
	}

	// If separate static/dynamic caching is enabled, we may need to merge some pages after rendering
	VirtualShadowMapArray.MergeStaticPhysicalPages(GraphBuilder);
}

void FShadowSceneRenderer::DispatchVirtualShadowMapViewAndCullingSetup(FRDGBuilder& GraphBuilder, TConstArrayView<FProjectedShadowInfo*> VirtualShadowMapShadows)
{
	// Don't want to run this more than once in a given frame.
	check(SceneInstanceCullingQuery == nullptr);

	// Unconditionally update GPU physical pages (on all GPUs) with new VSM IDs/addresses
	VirtualShadowMapArray.UpdatePhysicalPageAddresses(GraphBuilder);

	if (!VirtualShadowMapShadows.IsEmpty())
	{
		// Set up view array and collect culling work at the same time.
		SceneInstanceCullingQuery = SceneRenderer.SceneCullingRenderer.CreateInstanceQuery(GraphBuilder);
		VirtualShadowMapViews = VirtualShadowMapArray.CreateVirtualShadowMapNaniteViews(GraphBuilder, SceneRenderer.Views, VirtualShadowMapShadows, ComputeNaniteShadowsLODScaleFactor(), SceneInstanceCullingQuery);

		// Dispatch collected query 
		if (SceneInstanceCullingQuery)
		{
			SceneInstanceCullingQuery->Dispatch(GraphBuilder);
		}
	}
}

void FShadowSceneRenderer::PostSetupDebugRender()
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if ((SceneRenderer.ViewFamily.EngineShowFlags.DebugDrawDistantVirtualSMLights) && VirtualShadowMapArray.IsEnabled())
	{
		int32 NumFullyCached = 0;
		int32 NumDistant = 0;
		for (FViewInfo& View : SceneRenderer.Views)
		{
			FViewElementPDI DebugPDI(&View, nullptr, nullptr);

			for (const FLocalLightShadowFrameSetup& LightSetup : LocalLights)
			{			
				FLinearColor Color = FLinearColor(FColor::Blue);
				if (LightSetup.PerLightCacheEntry && LightSetup.PerLightCacheEntry->bIsDistantLight)
				{
					++NumDistant;
					int32 FramesSinceLastRender = int32(Scene.GetFrameNumber()) - int32(LightSetup.PerLightCacheEntry->GetLastScheduledFrameNumber());
					float Fade = FMath::Min(0.8f, float(FramesSinceLastRender) / float(LocalLights.Num()));
					if (LightSetup.PerLightCacheEntry->IsFullyCached())
					{
						++NumFullyCached;
						Color = FMath::Lerp(FLinearColor(FColor::Green), FLinearColor(FColor::Red), Fade);
					}
					else
					{
						Color = FLinearColor(FColor::Purple);
					}
				}

				Color.A = 1.0f;
				if (LightSetup.LightSceneInfo->Proxy->GetLightType() == LightType_Spot)
				{
					FTransform TransformNoScale = FTransform(LightSetup.LightSceneInfo->Proxy->GetLightToWorld());
					TransformNoScale.RemoveScaling();

					DrawWireSphereCappedCone(&DebugPDI, TransformNoScale, LightSetup.LightSceneInfo->Proxy->GetRadius(), FMath::RadiansToDegrees(LightSetup.LightSceneInfo->Proxy->GetOuterConeAngle()), 16, 4, 8, Color, SDPG_World);
				}
				else
				{
					DrawWireSphereAutoSides(&DebugPDI, -LightSetup.ProjectedShadowInfo->PreShadowTranslation, Color, LightSetup.LightSceneInfo->Proxy->GetRadius(), SDPG_World);
				}
			}
		}
		SET_DWORD_STAT(STAT_DistantLightCount, NumDistant);
		SET_DWORD_STAT(STAT_DistantCachedCount, NumFullyCached);
	}
#endif
}

void FShadowSceneRenderer::RenderVirtualShadowMapProjectionMaskBits(
	FRDGBuilder& GraphBuilder,
	FMinimalSceneTextures& SceneTextures)
{
	bShouldUseVirtualShadowMapOnePassProjection =
		VirtualShadowMapArray.IsAllocated() &&
		IsVSMOnePassProjectionEnabled(SceneRenderer.ViewFamily.EngineShowFlags) &&
		bNeedVSMProjection;

	if (bShouldUseVirtualShadowMapOnePassProjection)
	{
		RDG_EVENT_SCOPE(GraphBuilder, "VirtualShadowMapProjectionMaskBits");

		VirtualShadowMapMaskBits = CreateVirtualShadowMapMaskBits(GraphBuilder, SceneTextures, VirtualShadowMapArray, TEXT("Shadow.Virtual.MaskBits"));
		VirtualShadowMapMaskBitsHairStrands = CreateVirtualShadowMapMaskBits(GraphBuilder, SceneTextures, VirtualShadowMapArray, TEXT("Shadow.Virtual.MaskBits(HairStrands)"));

		for (int32 ViewIndex = 0; ViewIndex < SceneRenderer.Views.Num(); ++ViewIndex)
		{
			RDG_EVENT_SCOPE_CONDITIONAL(GraphBuilder, SceneRenderer.Views.Num() > 1, "View%d", ViewIndex);

			const FViewInfo& View = SceneRenderer.Views[ViewIndex];

			RenderVirtualShadowMapProjectionOnePass(
				GraphBuilder,
				SceneTextures,
				View, ViewIndex,
				VirtualShadowMapArray,
				EVirtualShadowMapProjectionInputType::GBuffer,
				VirtualShadowMapMaskBits);

			if (HairStrands::HasViewHairStrandsData(View))
			{
				// Shadow bits
				RenderVirtualShadowMapProjectionOnePass(
					GraphBuilder,
					SceneTextures,
					View, ViewIndex,
					VirtualShadowMapArray,
					EVirtualShadowMapProjectionInputType::HairStrands,
					VirtualShadowMapMaskBitsHairStrands);

				// Transmittance bits
				HairTransmittanceMaskBits = RenderHairStrandsOnePassTransmittanceMask(GraphBuilder, View, ViewIndex, VirtualShadowMapMaskBitsHairStrands, VirtualShadowMapArray).TransmittanceMask;
			}
		}
	}
	else
	{
		VirtualShadowMapMaskBits = nullptr;//Dummy;
		VirtualShadowMapMaskBitsHairStrands = nullptr;//Dummy;
		HairTransmittanceMaskBits = nullptr; //Dummy
	}
}

void FShadowSceneRenderer::ApplyVirtualShadowMapProjectionForLight(
	FRDGBuilder& GraphBuilder,
	const FMinimalSceneTextures& SceneTextures,
	const FLightSceneInfo* LightSceneInfo,
	FRDGTextureRef OutputScreenShadowMaskTexture,
	FRDGTextureRef OutputScreenShadowMaskSubPixelTexture)
{
	if (!VirtualShadowMapArray.HasAnyShadowData())
	{
		return;
	}

	const FVisibleLightInfo& VisibleLightInfo = SceneRenderer.VisibleLightInfos[LightSceneInfo->Id];

	if (!VisibleLightInfo.HasVirtualShadowMap())
	{
		return;
	}

	FSceneTextureParameters SceneTextureParameters = GetSceneTextureParameters(GraphBuilder, SceneTextures.UniformBuffer);

	for (int32 ViewIndex = 0; ViewIndex < SceneRenderer.Views.Num(); ViewIndex++)
	{
		RDG_EVENT_SCOPE_CONDITIONAL(GraphBuilder, SceneRenderer.Views.Num() > 1, "View%d", ViewIndex);

		FViewInfo& View = SceneRenderer.Views[ViewIndex];
		FIntRect ScissorRect;
		if (!LightSceneInfo->Proxy->GetScissorRect(ScissorRect, View, View.ViewRect))
		{
			ScissorRect = View.ViewRect;
		}

		if (ScissorRect.Area() > 0)
		{
			int32 VirtualShadowMapId = VisibleLightInfo.GetVirtualShadowMapId(&View);
			
			// Some lights can elide the screen shadow mask entirely, in which case they will be sampled directly in the lighting shader
			if (OutputScreenShadowMaskTexture)
			{
				if (VisibleLightInfo.VirtualShadowMapClipmaps.Num() > 0)
				{
					INC_DWORD_STAT(STAT_VSMDirectionalProjectionFull);

					// Project directional light virtual shadow map
					RenderVirtualShadowMapProjection(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						VirtualShadowMapArray,
						ScissorRect,
						EVirtualShadowMapProjectionInputType::GBuffer,
						VisibleLightInfo.FindShadowClipmapForView(&View),
						false, // bModulateRGB
						nullptr, // TiledVSMProjection
						OutputScreenShadowMaskTexture);
				}
				else if (bShouldUseVirtualShadowMapOnePassProjection)
				{
					INC_DWORD_STAT(STAT_VSMLocalProjectionOnePassCopy);

					// Copy local light from one pass projection output
					CompositeVirtualShadowMapFromMaskBits(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						ScissorRect,
						VirtualShadowMapArray,
						EVirtualShadowMapProjectionInputType::GBuffer,
						VirtualShadowMapId,
						VirtualShadowMapMaskBits,
						OutputScreenShadowMaskTexture);
				}
				else
				{
					INC_DWORD_STAT(STAT_VSMLocalProjectionFull);

					// Project local light virtual shadow map
					RenderVirtualShadowMapProjection(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						VirtualShadowMapArray,
						ScissorRect,
						EVirtualShadowMapProjectionInputType::GBuffer,
						*LightSceneInfo,
						VirtualShadowMapId,
						OutputScreenShadowMaskTexture);
				}
			}

			// Sub-pixel shadow (no denoising for hair)
			if (HairStrands::HasViewHairStrandsData(View) && OutputScreenShadowMaskSubPixelTexture)
			{
				if (VisibleLightInfo.VirtualShadowMapClipmaps.Num() > 0)
				{
					RenderVirtualShadowMapProjection(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						VirtualShadowMapArray,
						ScissorRect,
						EVirtualShadowMapProjectionInputType::HairStrands,
						VisibleLightInfo.FindShadowClipmapForView(&View),
						false, // bModulateRGB
						nullptr, // TiledVSMProjection
						OutputScreenShadowMaskSubPixelTexture);
				}
				else if (bShouldUseVirtualShadowMapOnePassProjection)
				{
					// Copy local light from one pass projection output
					CompositeVirtualShadowMapFromMaskBits(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						ScissorRect,
						VirtualShadowMapArray,
						EVirtualShadowMapProjectionInputType::HairStrands,
						VirtualShadowMapId,
						VirtualShadowMapMaskBitsHairStrands,
						OutputScreenShadowMaskSubPixelTexture);
				}
				else
				{
					RenderVirtualShadowMapProjection(
						GraphBuilder,
						SceneTextures,
						View, ViewIndex,
						VirtualShadowMapArray,
						ScissorRect,
						EVirtualShadowMapProjectionInputType::HairStrands,
						*LightSceneInfo,
						VirtualShadowMapId,
						OutputScreenShadowMaskSubPixelTexture);
				}
			}
		}
	}
}
