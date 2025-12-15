// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PrimitiveComponent.h"

#ifdef ENGINE_PrimitiveComponent_generated_h
#error "PrimitiveComponent.generated.h already included, missing '#pragma once' in PrimitiveComponent.h"
#endif
#define ENGINE_PrimitiveComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UClass;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPhysicalMaterial;
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;
enum class EFirstPersonPrimitiveType : uint8;
enum class EHLODLevelExclusion : uint8;
enum class ERendererStencilMask : uint8;
struct FBodyInstanceAsyncPhysicsTickHandle;
struct FHitResult;
struct FKey;
struct FWalkableSlopeOverride;

// ********** Begin ScriptStruct FSpriteCategoryInfo ***********************************************
struct Z_Construct_UScriptStruct_FSpriteCategoryInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpriteCategoryInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSpriteCategoryInfo;
// ********** End ScriptStruct FSpriteCategoryInfo *************************************************

// ********** Begin SparseDelegate FComponentHitSignature ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_229_DELEGATE \
ENGINE_API void FComponentHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentHitSignature, UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit);


// ********** End SparseDelegate FComponentHitSignature ********************************************

// ********** Begin SparseDelegate FComponentBeginOverlapSignature *********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_231_DELEGATE \
ENGINE_API void FComponentBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult);


// ********** End SparseDelegate FComponentBeginOverlapSignature ***********************************

// ********** Begin SparseDelegate FComponentEndOverlapSignature ***********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_233_DELEGATE \
ENGINE_API void FComponentEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


// ********** End SparseDelegate FComponentEndOverlapSignature *************************************

// ********** Begin SparseDelegate FComponentWakeSignature *****************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_235_DELEGATE \
ENGINE_API void FComponentWakeSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentWakeSignature, UPrimitiveComponent* WakingComponent, FName BoneName);


// ********** End SparseDelegate FComponentWakeSignature *******************************************

// ********** Begin SparseDelegate FComponentSleepSignature ****************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_237_DELEGATE \
ENGINE_API void FComponentSleepSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentSleepSignature, UPrimitiveComponent* SleepingComponent, FName BoneName);


// ********** End SparseDelegate FComponentSleepSignature ******************************************

// ********** Begin SparseDelegate FComponentCollisionSettingsChangedSignature *********************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_239_DELEGATE \
ENGINE_API void FComponentCollisionSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentCollisionSettingsChangedSignature, UPrimitiveComponent* ChangedComponent);


// ********** End SparseDelegate FComponentCollisionSettingsChangedSignature ***********************

// ********** Begin SparseDelegate FComponentPhysicsStateChanged ***********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_241_DELEGATE \
ENGINE_API void FComponentPhysicsStateChanged_DelegateWrapper(const FMulticastScriptDelegate& ComponentPhysicsStateChanged, UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);


// ********** End SparseDelegate FComponentPhysicsStateChanged *************************************

// ********** Begin SparseDelegate FComponentBeginCursorOverSignature ******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_243_DELEGATE \
ENGINE_API void FComponentBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginCursorOverSignature, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentBeginCursorOverSignature ********************************

// ********** Begin SparseDelegate FComponentEndCursorOverSignature ********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_244_DELEGATE \
ENGINE_API void FComponentEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndCursorOverSignature, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentEndCursorOverSignature **********************************

// ********** Begin SparseDelegate FComponentOnClickedSignature ************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_245_DELEGATE \
ENGINE_API void FComponentOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnClickedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);


// ********** End SparseDelegate FComponentOnClickedSignature **************************************

// ********** Begin SparseDelegate FComponentOnReleasedSignature ***********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_246_DELEGATE \
ENGINE_API void FComponentOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnReleasedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonReleased);


// ********** End SparseDelegate FComponentOnReleasedSignature *************************************

// ********** Begin SparseDelegate FComponentOnInputTouchBeginSignature ****************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_247_DELEGATE \
ENGINE_API void FComponentOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentOnInputTouchBeginSignature ******************************

// ********** Begin SparseDelegate FComponentOnInputTouchEndSignature ******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_248_DELEGATE \
ENGINE_API void FComponentOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentOnInputTouchEndSignature ********************************

// ********** Begin SparseDelegate FComponentBeginTouchOverSignature *******************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_249_DELEGATE \
ENGINE_API void FComponentBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentBeginTouchOverSignature *********************************

// ********** Begin SparseDelegate FComponentEndTouchOverSignature *********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_250_DELEGATE \
ENGINE_API void FComponentEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);


// ********** End SparseDelegate FComponentEndTouchOverSignature ***********************************

// ********** Begin Class UPrimitiveComponent ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePostMigrationPhysicsStateChanged); \
	DECLARE_FUNCTION(execCanCharacterStepUp); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetPhysMaterialOverride); \
	DECLARE_FUNCTION(execUnregisterAsFocalPointInPhysicsReplicationLOD); \
	DECLARE_FUNCTION(execRegisterAsFocalPointInPhysicsReplicationLOD); \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels); \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake); \
	DECLARE_FUNCTION(execSetAllAllowPartialIslandSleep); \
	DECLARE_FUNCTION(execSetAllowPartialIslandSleep); \
	DECLARE_FUNCTION(execSetAllUseMACD); \
	DECLARE_FUNCTION(execSetUseMACD); \
	DECLARE_FUNCTION(execSetAllUseCCD); \
	DECLARE_FUNCTION(execSetUseCCD); \
	DECLARE_FUNCTION(execSetMaxDepenetrationVelocity); \
	DECLARE_FUNCTION(execGetMaxDepenetrationVelocity); \
	DECLARE_FUNCTION(execScaleByMomentOfInertia); \
	DECLARE_FUNCTION(execGetInertiaTensor); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execSetMassOverrideInKg); \
	DECLARE_FUNCTION(execSetAllMassScale); \
	DECLARE_FUNCTION(execGetMassScale); \
	DECLARE_FUNCTION(execSetMassScale); \
	DECLARE_FUNCTION(execGetAngularDamping); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execGetLinearDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetGyroscopicTorqueEnabled); \
	DECLARE_FUNCTION(execSetGyroscopicTorqueEnabled); \
	DECLARE_FUNCTION(execGetUpdateKinematicFromSimulation); \
	DECLARE_FUNCTION(execSetUpdateKinematicFromSimulation); \
	DECLARE_FUNCTION(execIsGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableGravity); \
	DECLARE_FUNCTION(execWakeAllRigidBodies); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled); \
	DECLARE_FUNCTION(execGetCollisionEnabled); \
	DECLARE_FUNCTION(execGetClosestPointOnCollision); \
	DECLARE_FUNCTION(execGetBodyInstanceAsyncPhysicsTickHandle); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execAllowHLODLevelsExclusion); \
	DECLARE_FUNCTION(execSetFirstPersonPrimitiveType); \
	DECLARE_FUNCTION(execSetHiddenInSceneCapture); \
	DECLARE_FUNCTION(execSetVisibleInSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetRenderInDepthPass); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetRenderCustomDepth); \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent); \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent); \
	DECLARE_FUNCTION(execK2_SphereTraceComponent); \
	DECLARE_FUNCTION(execK2_LineTraceComponent); \
	DECLARE_FUNCTION(execSetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionEnabled); \
	DECLARE_FUNCTION(execSetAffectIndirectLightingWhileHidden); \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting); \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetAffectDistanceFieldLighting); \
	DECLARE_FUNCTION(execSetTranslucencySortDistanceOffset); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights); \
	DECLARE_FUNCTION(execSetExcludeFromLightAttachmentGroup); \
	DECLARE_FUNCTION(execSetLightAttachmentsAsGroup); \
	DECLARE_FUNCTION(execSetCastContactShadow); \
	DECLARE_FUNCTION(execSetCastInsetShadow); \
	DECLARE_FUNCTION(execSetCastHiddenShadow); \
	DECLARE_FUNCTION(execSetEmissiveLightSource); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetOnlyOwnerSee); \
	DECLARE_FUNCTION(execSetOwnerNoSee); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execPutRigidBodyToSleep); \
	DECLARE_FUNCTION(execWakeRigidBody); \
	DECLARE_FUNCTION(execSetCenterOfMass); \
	DECLARE_FUNCTION(execGetCenterOfMass); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execAddTorqueInDegrees); \
	DECLARE_FUNCTION(execAddTorqueInRadians); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddForceAtLocationLocal); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddVelocityChangeImpulseAtLocation); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execSetConstraintMode); \
	DECLARE_FUNCTION(execGetStaticWhenNotMoveable); \
	DECLARE_FUNCTION(execSetStaticWhenNotMoveable); \
	DECLARE_FUNCTION(execSetSimulatePhysics); \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex); \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execSetMaterialByName); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterialByName); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetBoundsScale); \
	DECLARE_FUNCTION(execSetIgnoreBoundsForEditorFocus); \
	DECLARE_FUNCTION(execGetIgnoreBoundsForEditorFocus); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execIsOverlappingComponent); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataFloatArray); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloatArray); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForVectorParameter); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForScalarParameter); \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents); \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving); \
	DECLARE_FUNCTION(execClearMoveIgnoreActors); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors); \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execGetExcludeForSpecificHLODLevels); \
	DECLARE_FUNCTION(execSetExcludeForSpecificHLODLevels); \
	DECLARE_FUNCTION(execSetExcludedFromHLODLevel); \
	DECLARE_FUNCTION(execIsExcludedFromHLODLevel); \
	DECLARE_FUNCTION(execInvalidateLumenSurfaceCache); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents); \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetEditorMaterial);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ACCESSORS \
static void GetLightmapType_WrapperImpl(const void* Object, void* OutValue); \
static void SetLightmapType_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPrimitiveComponent, ENGINE_API)


struct Z_Construct_UClass_UPrimitiveComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct ::Z_Construct_UClass_UPrimitiveComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPrimitiveComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), Z_Construct_UClass_UPrimitiveComponent_NoRegister) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimitiveComponent(UPrimitiveComponent&&) = delete; \
	UPrimitiveComponent(const UPrimitiveComponent&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_257_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimitiveComponent;

// ********** End Class UPrimitiveComponent ********************************************************

// ********** Begin ScriptStruct FPrimitiveComponentInstanceData ***********************************
struct Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_3165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FPrimitiveComponentInstanceData;
// ********** End ScriptStruct FPrimitiveComponentInstanceData *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h

// ********** Begin Enum ECanBeCharacterBase *******************************************************
#define FOREACH_ENUM_ECANBECHARACTERBASE(op) \
	op(ECB_No) \
	op(ECB_Yes) \
	op(ECB_Owner) 

enum ECanBeCharacterBase : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECanBeCharacterBase>();
// ********** End Enum ECanBeCharacterBase *********************************************************

// ********** Begin Enum ERendererStencilMask ******************************************************
#define FOREACH_ENUM_ERENDERERSTENCILMASK(op) \
	op(ERendererStencilMask::ERSM_Default) \
	op(ERendererStencilMask::ERSM_255) \
	op(ERendererStencilMask::ERSM_1) \
	op(ERendererStencilMask::ERSM_2) \
	op(ERendererStencilMask::ERSM_4) \
	op(ERendererStencilMask::ERSM_8) \
	op(ERendererStencilMask::ERSM_16) \
	op(ERendererStencilMask::ERSM_32) \
	op(ERendererStencilMask::ERSM_64) \
	op(ERendererStencilMask::ERSM_128) 

enum class ERendererStencilMask : uint8;
template<> struct TIsUEnumClass<ERendererStencilMask> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERendererStencilMask>();
// ********** End Enum ERendererStencilMask ********************************************************

// ********** Begin Enum ERayTracingGroupCullingPriority *******************************************
#define FOREACH_ENUM_ERAYTRACINGGROUPCULLINGPRIORITY(op) \
	op(ERayTracingGroupCullingPriority::CP_0_NEVER_CULL) \
	op(ERayTracingGroupCullingPriority::CP_1) \
	op(ERayTracingGroupCullingPriority::CP_2) \
	op(ERayTracingGroupCullingPriority::CP_3) \
	op(ERayTracingGroupCullingPriority::CP_4_DEFAULT) \
	op(ERayTracingGroupCullingPriority::CP_5) \
	op(ERayTracingGroupCullingPriority::CP_6) \
	op(ERayTracingGroupCullingPriority::CP_7) \
	op(ERayTracingGroupCullingPriority::CP_8_QUICKLY_CULL) 

enum class ERayTracingGroupCullingPriority : uint8;
template<> struct TIsUEnumClass<ERayTracingGroupCullingPriority> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERayTracingGroupCullingPriority>();
// ********** End Enum ERayTracingGroupCullingPriority *********************************************

// ********** Begin Enum EFirstPersonPrimitiveType *************************************************
#define FOREACH_ENUM_EFIRSTPERSONPRIMITIVETYPE(op) \
	op(EFirstPersonPrimitiveType::None) \
	op(EFirstPersonPrimitiveType::FirstPerson) \
	op(EFirstPersonPrimitiveType::WorldSpaceRepresentation) 

enum class EFirstPersonPrimitiveType : uint8;
template<> struct TIsUEnumClass<EFirstPersonPrimitiveType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFirstPersonPrimitiveType>();
// ********** End Enum EFirstPersonPrimitiveType ***************************************************

// ********** Begin Enum EComponentPhysicsStateChange **********************************************
#define FOREACH_ENUM_ECOMPONENTPHYSICSSTATECHANGE(op) \
	op(EComponentPhysicsStateChange::Created) \
	op(EComponentPhysicsStateChange::Destroyed) 

enum class EComponentPhysicsStateChange : uint8;
template<> struct TIsUEnumClass<EComponentPhysicsStateChange> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EComponentPhysicsStateChange>();
// ********** End Enum EComponentPhysicsStateChange ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
