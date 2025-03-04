// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "LandscapePatchComponent.h"
#include "LandscapeEditTypes.h"

#include "LandscapeCircleHeightPatch.generated.h"

/**
 * The simplest height patch: a circle of flat ground with a falloff past the initial radius across which the
 * alpha decreases linearly. When added to an actor, initializes itself to the bottom of the bounding box.
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = Landscape, meta = (BlueprintSpawnableComponent))
class LANDSCAPEPATCH_API ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{
	GENERATED_BODY()

public:

	virtual UTextureRenderTarget2D* RenderLayer_Native(const FLandscapeBrushParameters& InParameters, const FTransform& HeightmapToWorld) override;

#if WITH_EDITOR
	using FEditLayerTargetTypeState = UE::Landscape::EditLayers::FEditLayerTargetTypeState;
	using FEditLayerRenderItem = UE::Landscape::EditLayers::FEditLayerRenderItem;

	// ILandscapeEditLayerRenderer, via ULandscapePatchComponent
	virtual void GetRendererStateInfo(const ULandscapeInfo* InLandscapeInfo,
		FEditLayerTargetTypeState& OutSupportedTargetTypeState, 
		FEditLayerTargetTypeState& OutEnabledTargetTypeState, 
		TArray<TSet<FName>>& OutRenderGroups) const override;
	virtual FString GetEditLayerRendererDebugName() const override;
	virtual TArray<FEditLayerRenderItem> GetRenderItems(const ULandscapeInfo* InLandscapeInfo) const override;
	virtual void RenderLayer(FRenderParams& InRenderParams) override;
#endif

	virtual bool CanAffectHeightmap() const override { return !bEditVisibility; }
	virtual bool CanAffectVisibilityLayer() const override { return bEditVisibility; }

	// UActorComponent
	virtual void OnComponentCreated() override;

protected:

	UPROPERTY(EditAnywhere, Category = Settings)
	float Radius = 500;

	/** Distance across which the alpha will go from 1 down to 0 outside of circle. */
	UPROPERTY(EditAnywhere, Category = Settings)
	float Falloff = 500;

	/** Specifies if this patch edits the visibility layer instead of height. */
	UPROPERTY(EditAnywhere, Category = Settings)
	bool bEditVisibility = false;

	/** When true, only the vertices in the circle have alpha 1. If false, the radius is expanded slightly so that neighboring 
	  vertices are also included and the whole circle is able to lie flat. */
	UPROPERTY(EditAnywhere, Category = Settings, AdvancedDisplay)
	bool bExclusiveRadius = false;

private:
	void ApplyCirclePatch(bool bIsVisibilityLayer,
		const TFunction<FRHITexture* ()>& RenderThreadLandscapeTextureGetter, int32 LandscapeTextureSliceIndex,
		const FIntPoint& DestinationResolution, const FTransform& HeightmapCoordsToWorld);
};

#if UE_ENABLE_INCLUDE_ORDER_DEPRECATED_IN_5_2
#include "CoreMinimal.h"
#endif
