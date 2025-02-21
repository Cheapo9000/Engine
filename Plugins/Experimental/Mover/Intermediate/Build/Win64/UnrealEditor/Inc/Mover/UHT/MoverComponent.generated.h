// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APhysicsVolume;
class UBaseMovementMode;
class UMoverBlackboard;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
struct FGameplayTag;
struct FHitResult;
struct FMovementModifierHandle;
struct FMoverAuxStateContext;
struct FMoverInputCmdContext;
struct FMoverOnImpactParams;
struct FMoverPredictTrajectoryParams;
struct FMoverSyncState;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FPlanarConstraint;
struct FProposedMove;
struct FTrajectorySampleInfo;
#ifdef MOVER_MoverComponent_generated_h
#error "MoverComponent.generated.h already included, missing '#pragma once' in MoverComponent.h"
#endif
#define MOVER_MoverComponent_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_35_DELEGATE \
MOVER_API void FMover_OnPreSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPreSimTick, FMoverTimeStep const& TimeStep, FMoverInputCmdContext const& InputCmd);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_38_DELEGATE \
MOVER_API void FMover_OnPostMovement_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostMovement, FMoverTimeStep const& TimeStep, FMoverSyncState& SyncState, FMoverAuxStateContext& AuxState);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_41_DELEGATE \
MOVER_API void FMover_OnPostSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimTick, FMoverTimeStep const& TimeStep);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_44_DELEGATE \
MOVER_API void FMover_OnPostSimRollback_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimRollback, FMoverTimeStep const& CurrentTimeStep, FMoverTimeStep const& ExpungedTimeStep);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_47_DELEGATE \
MOVER_API void FMover_OnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnMovementModeChanged, FName const& PreviousMovementModeName, FName const& NewMovementModeName);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_50_DELEGATE \
MOVER_API void FMover_ProcessGeneratedMovement_DelegateWrapper(const FScriptDelegate& Mover_ProcessGeneratedMovement, FMoverTickStartData const& StartState, FMoverTimeStep const& TimeStep, FProposedMove& OutProposedMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execHandleImpact); \
	DECLARE_FUNCTION(execHasGameplayTag); \
	DECLARE_FUNCTION(execIsModifierActiveOrQueued); \
	DECLARE_FUNCTION(execFindMovementMode); \
	DECLARE_FUNCTION(execFindSharedSettings_BP); \
	DECLARE_FUNCTION(execFindSharedSettings_Mutable_BP); \
	DECLARE_FUNCTION(execGetSimBlackboard); \
	DECLARE_FUNCTION(execTryGetFloorCheckHitResult); \
	DECLARE_FUNCTION(execGetLastTimeStep); \
	DECLARE_FUNCTION(execGetLastInputCmd); \
	DECLARE_FUNCTION(execHasValidCachedInputCmd); \
	DECLARE_FUNCTION(execGetSyncState); \
	DECLARE_FUNCTION(execHasValidCachedState); \
	DECLARE_FUNCTION(execGetMovementBaseBoneName); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execGetMovementMode); \
	DECLARE_FUNCTION(execGetMovementModeName); \
	DECLARE_FUNCTION(execGetPredictedTrajectory); \
	DECLARE_FUNCTION(execGetFutureTrajectory); \
	DECLARE_FUNCTION(execGetTargetOrientation); \
	DECLARE_FUNCTION(execGetMovementIntent); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execSetPrimaryVisualComponent); \
	DECLARE_FUNCTION(execSetPlanarConstraint); \
	DECLARE_FUNCTION(execGetPlanarConstraint); \
	DECLARE_FUNCTION(execGetUpDirection); \
	DECLARE_FUNCTION(execGetGravityAcceleration); \
	DECLARE_FUNCTION(execSetGravityOverride); \
	DECLARE_FUNCTION(execRemoveMovementMode); \
	DECLARE_FUNCTION(execAddMovementModeFromObject); \
	DECLARE_FUNCTION(execAddMovementModeFromClass); \
	DECLARE_FUNCTION(execQueueNextMode); \
	DECLARE_FUNCTION(execCancelModifierFromHandle); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execUnbindProcessGeneratedMovement); \
	DECLARE_FUNCTION(execBindProcessGeneratedMovement);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetStartingMovementModeNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverComponent(); \
	friend struct Z_Construct_UClass_UMoverComponent_Statics; \
public: \
	DECLARE_CLASS(UMoverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverComponent(UMoverComponent&&); \
	UMoverComponent(const UMoverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverComponent) \
	NO_API virtual ~UMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
