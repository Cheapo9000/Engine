// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionComponent.h"

#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h
#error "GeometryCollectionComponent.generated.h already included, missing '#pragma once' in GeometryCollectionComponent.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChaosSolverActor;
class UFieldNodeBase;
class UFieldSystemMetaData;
class UGeometryCollection;
class UGeometryCollectionComponent;
enum class EDamageModelTypeEnum : uint8;
enum class EGeometryCollectionPhysicsTypeEnum : uint8;
struct FChaosBreakEvent;
struct FChaosCrumblingEvent;
struct FChaosPhysicsCollisionInfo;
struct FChaosRemovalEvent;
struct FGeometryCollectionDamagePropagationData;

// ********** Begin Delegate FOnChaosBreakEvent ****************************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_53_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent);


// ********** End Delegate FOnChaosBreakEvent ******************************************************

// ********** Begin Delegate FOnChaosRemovalEvent **************************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_55_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosRemovalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvent, FChaosRemovalEvent const& RemovalEvent);


// ********** End Delegate FOnChaosRemovalEvent ****************************************************

// ********** Begin Delegate FOnChaosCrumblingEvent ************************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_57_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosCrumblingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCrumblingEvent, FChaosCrumblingEvent const& CrumbleEvent);


// ********** End Delegate FOnChaosCrumblingEvent **************************************************

// ********** Begin Delegate FOnGeometryCollectionFullyDecayedEvent ********************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_59_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnGeometryCollectionFullyDecayedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionFullyDecayedEvent);


// ********** End Delegate FOnGeometryCollectionFullyDecayedEvent **********************************

// ********** Begin Delegate FOnGeometryCollectionRootMovedEvent ***********************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_61_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnGeometryCollectionRootMovedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionRootMovedEvent);


// ********** End Delegate FOnGeometryCollectionRootMovedEvent *************************************

// ********** Begin ScriptStruct FGeomComponentCacheParameters *************************************
struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FGeomComponentCacheParameters;
// ********** End ScriptStruct FGeomComponentCacheParameters ***************************************

// ********** Begin ScriptStruct FGeometryCollectionRepData ****************************************
struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_392_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FGeometryCollectionRepData;
// ********** End ScriptStruct FGeometryCollectionRepData ******************************************

// ********** Begin ScriptStruct FGeometryCollectionRepStateData ***********************************
struct Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_452_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FGeometryCollectionRepStateData;
// ********** End ScriptStruct FGeometryCollectionRepStateData *************************************

// ********** Begin ScriptStruct FGeometryCollectionRepDynamicData *********************************
struct Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics;
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_513_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


struct FGeometryCollectionRepDynamicData;
// ********** End ScriptStruct FGeometryCollectionRepDynamicData ***********************************

// ********** Begin Delegate FNotifyGeometryCollectionPhysicsStateChange ***************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1142_DELEGATE \
static GEOMETRYCOLLECTIONENGINE_API void FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent);


// ********** End Delegate FNotifyGeometryCollectionPhysicsStateChange *****************************

// ********** Begin Delegate FNotifyGeometryCollectionPhysicsLoadingStateChange ********************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1149_DELEGATE \
static GEOMETRYCOLLECTIONENGINE_API void FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent);


// ********** End Delegate FNotifyGeometryCollectionPhysicsLoadingStateChange **********************

// ********** Begin Class UGeometryCollectionComponent *********************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSolverActor); \
	DECLARE_FUNCTION(execGetSolverActor); \
	DECLARE_FUNCTION(execOnRep_RepDynamicData); \
	DECLARE_FUNCTION(execOnRep_RepStateData); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execEnableRootProxyForCustomRenderer); \
	DECLARE_FUNCTION(execSetRootProxyComponentSpaceTransform); \
	DECLARE_FUNCTION(execFindLeafTransformByLineTrace); \
	DECLARE_FUNCTION(execForceBrokenForCustomRenderer); \
	DECLARE_FUNCTION(execSetUseStaticMeshCollisionForTraces); \
	DECLARE_FUNCTION(execGetUseStaticMeshCollisionForTraces); \
	DECLARE_FUNCTION(execSetNotifyGlobalCrumblings); \
	DECLARE_FUNCTION(execSetNotifyGlobalRemovals); \
	DECLARE_FUNCTION(execSetNotifyGlobalCollision); \
	DECLARE_FUNCTION(execSetNotifyGlobalBreaks); \
	DECLARE_FUNCTION(execSetNotifyCrumblings); \
	DECLARE_FUNCTION(execSetNotifyRemovals); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField); \
	DECLARE_FUNCTION(execSetDamagePropagationData); \
	DECLARE_FUNCTION(execSetUseMaterialDamageModifiers); \
	DECLARE_FUNCTION(execSetDamageThreshold); \
	DECLARE_FUNCTION(execGetDamageThreshold); \
	DECLARE_FUNCTION(execSetDamageModel); \
	DECLARE_FUNCTION(execSetDensityFromPhysicsMaterial); \
	DECLARE_FUNCTION(execSetOneWayInteractionLevel); \
	DECLARE_FUNCTION(execSetGravityGroupIndex); \
	DECLARE_FUNCTION(execApplyAssetDefaults); \
	DECLARE_FUNCTION(execSetPerParticleCollisionProfileName); \
	DECLARE_FUNCTION(execSetPerLevelCollisionProfileNames); \
	DECLARE_FUNCTION(execSetAbandonedParticleCollisionProfileName); \
	DECLARE_FUNCTION(execSetEnableDamageFromCollision); \
	DECLARE_FUNCTION(execGetDebugInfo); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execSetRestCollection); \
	DECLARE_FUNCTION(execGetMassAndExtents); \
	DECLARE_FUNCTION(execSetLocalRestTransforms); \
	DECLARE_FUNCTION(execGetLocalRestTransforms); \
	DECLARE_FUNCTION(execGetInitialLocalRestTransforms); \
	DECLARE_FUNCTION(execIsRootBroken); \
	DECLARE_FUNCTION(execGetRootCurrentTransform); \
	DECLARE_FUNCTION(execGetRootInitialTransform); \
	DECLARE_FUNCTION(execGetRootIndex); \
	DECLARE_FUNCTION(execGetInitialLevel); \
	DECLARE_FUNCTION(execApplyAngularVelocity); \
	DECLARE_FUNCTION(execApplyLinearVelocity); \
	DECLARE_FUNCTION(execApplyBreakingAngularVelocity); \
	DECLARE_FUNCTION(execApplyBreakingLinearVelocity); \
	DECLARE_FUNCTION(execRemoveAllAnchors); \
	DECLARE_FUNCTION(execSetAnchoredByTransformedBox); \
	DECLARE_FUNCTION(execSetAnchoredByBox); \
	DECLARE_FUNCTION(execSetAnchoredByIndex); \
	DECLARE_FUNCTION(execCrumbleActiveClusters); \
	DECLARE_FUNCTION(execCrumbleCluster); \
	DECLARE_FUNCTION(execApplyInternalStrain); \
	DECLARE_FUNCTION(execApplyExternalStrain); \
	DECLARE_FUNCTION(execGetLocalBounds);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollectionComponent, GEOMETRYCOLLECTIONENGINE_API)


struct Z_Construct_UClass_UGeometryCollectionComponent_Statics;
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct ::Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONENGINE_API UClass* ::Z_Construct_UClass_UGeometryCollectionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		RepStateData, \
		RepDynamicData, \
		NETFIELD_REP_END=RepDynamicData	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(GEOMETRYCOLLECTIONENGINE_API)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCollectionComponent(UGeometryCollectionComponent&&) = delete; \
	UGeometryCollectionComponent(const UGeometryCollectionComponent&) = delete;


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_576_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_579_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCollectionComponent;

// ********** End Class UGeometryCollectionComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
