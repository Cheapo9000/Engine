// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosPathedMovementControllerComponent.h"

#ifdef CHAOSMOVER_ChaosPathedMovementControllerComponent_generated_h
#error "ChaosPathedMovementControllerComponent.generated.h already included, missing '#pragma once' in ChaosPathedMovementControllerComponent.h"
#endif
#define CHAOSMOVER_ChaosPathedMovementControllerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EChaosPathedMovementExecutionType : uint8;
struct FMoverAuxStateContext;
struct FMoverSimulationEventData;
struct FMoverSyncState;

// ********** Begin Delegate FChaosMover_OnPathedMovementStarted ***********************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_21_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementStarted_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementStarted);


// ********** End Delegate FChaosMover_OnPathedMovementStarted *************************************

// ********** Begin Delegate FChaosMover_OnPathedMovementStopped ***********************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_23_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementStopped_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementStopped, bool bReachedEndOfPlayback);


// ********** End Delegate FChaosMover_OnPathedMovementStopped *************************************

// ********** Begin Delegate FChaosMover_OnPathedMovementBounced ***********************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_25_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementBounced_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementBounced);


// ********** End Delegate FChaosMover_OnPathedMovementBounced *************************************

// ********** Begin Delegate FChaosMover_OnPathedMovementReversePlaybackChanged ********************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_27_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementReversePlaybackChanged_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementReversePlaybackChanged, bool bIsReversePlayback);


// ********** End Delegate FChaosMover_OnPathedMovementReversePlaybackChanged **********************

// ********** Begin Delegate FChaosMover_OnPathedMovementLoopingPlaybackChanged ********************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_29_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementLoopingPlaybackChanged_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementLoopingPlaybackChanged, bool bIsLoopingPlayback);


// ********** End Delegate FChaosMover_OnPathedMovementLoopingPlaybackChanged **********************

// ********** Begin Delegate FChaosMover_OnPathedMovementOneWayPlaybackChanged *********************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_31_DELEGATE \
CHAOSMOVER_API void FChaosMover_OnPathedMovementOneWayPlaybackChanged_DelegateWrapper(const FMulticastScriptDelegate& ChaosMover_OnPathedMovementOneWayPlaybackChanged, bool bIsOneWayPlayback);


// ********** End Delegate FChaosMover_OnPathedMovementOneWayPlaybackChanged ***********************

// ********** Begin Class UChaosPathedMovementControllerComponent **********************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPostFinalize); \
	DECLARE_FUNCTION(execOnPostSimEventReceived); \
	DECLARE_FUNCTION(execIsOneWayPlayback); \
	DECLARE_FUNCTION(execWantsOneWayPlayback); \
	DECLARE_FUNCTION(execRequestOneWayPlayback); \
	DECLARE_FUNCTION(execIsLoopingPlayback); \
	DECLARE_FUNCTION(execWantsLoopingPlayback); \
	DECLARE_FUNCTION(execRequestLoopingPlayback); \
	DECLARE_FUNCTION(execIsReversePlayback); \
	DECLARE_FUNCTION(execWantsReversePlayback); \
	DECLARE_FUNCTION(execRequestReversePlayback); \
	DECLARE_FUNCTION(execIsPlayingPath); \
	DECLARE_FUNCTION(execWantsPlayingPath); \
	DECLARE_FUNCTION(execRequestStopPlayingPath); \
	DECLARE_FUNCTION(execRequestStartPlayingPath);


struct Z_Construct_UClass_UChaosPathedMovementControllerComponent_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPathedMovementControllerComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosPathedMovementControllerComponent(); \
	friend struct ::Z_Construct_UClass_UChaosPathedMovementControllerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPathedMovementControllerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPathedMovementControllerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPathedMovementControllerComponent_NoRegister) \
	DECLARE_SERIALIZER(UChaosPathedMovementControllerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosPathedMovementControllerComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPathedMovementControllerComponent(UChaosPathedMovementControllerComponent&&) = delete; \
	UChaosPathedMovementControllerComponent(const UChaosPathedMovementControllerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosPathedMovementControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPathedMovementControllerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosPathedMovementControllerComponent) \
	NO_API virtual ~UChaosPathedMovementControllerComponent();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPathedMovementControllerComponent;

// ********** End Class UChaosPathedMovementControllerComponent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPathedMovementControllerComponent_h

// ********** Begin Enum EChaosPathedMovementExecutionType *****************************************
#define FOREACH_ENUM_ECHAOSPATHEDMOVEMENTEXECUTIONTYPE(op) \
	op(EChaosPathedMovementExecutionType::AuthorityOnly) \
	op(EChaosPathedMovementExecutionType::ClientPredicted_AutonomousOnly) 

enum class EChaosPathedMovementExecutionType : uint8;
template<> struct TIsUEnumClass<EChaosPathedMovementExecutionType> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosPathedMovementExecutionType>();
// ********** End Enum EChaosPathedMovementExecutionType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
