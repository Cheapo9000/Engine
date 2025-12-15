// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIController.h"

#ifdef AIMODULE_AIController_generated_h
#error "AIController.generated.h already included, missing '#pragma once' in AIController.h"
#endif
#define AIMODULE_AIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAIPerceptionComponent;
class UBehaviorTree;
class UBlackboardComponent;
class UBlackboardData;
class UClass;
class UGameplayTaskResource;
class UNavigationQueryFilter;
class UPathFollowingComponent;
struct FAIRequestID;
struct FGameplayResourceSet;

// ********** Begin Delegate FAIMoveCompletedSignature *********************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_45_DELEGATE \
AIMODULE_API void FAIMoveCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& AIMoveCompletedSignature, FAIRequestID RequestID, EPathFollowingResult::Type Result);


// ********** End Delegate FAIMoveCompletedSignature ***********************************************

// ********** Begin Class AAIController ************************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPathFollowingComponent); \
	DECLARE_FUNCTION(execGetAIPerceptionComponent); \
	DECLARE_FUNCTION(execGetPathFollowingComponent); \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed); \
	DECLARE_FUNCTION(execK2_ClearFocus); \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execK2_SetFocus); \
	DECLARE_FUNCTION(execK2_SetFocalPoint); \
	DECLARE_FUNCTION(execGetFocalPointOnActor); \
	DECLARE_FUNCTION(execGetFocalPoint); \
	DECLARE_FUNCTION(execUnclaimTaskResource); \
	DECLARE_FUNCTION(execClaimTaskResource); \
	DECLARE_FUNCTION(execUseBlackboard); \
	DECLARE_FUNCTION(execRunBehaviorTree); \
	DECLARE_FUNCTION(execSetMoveBlockDetection); \
	DECLARE_FUNCTION(execGetImmediateMoveDestination); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execMoveToLocation); \
	DECLARE_FUNCTION(execMoveToActor);


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AAIController_Statics;
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct ::Z_Construct_UClass_AAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_AAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_AAIController_NoRegister) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIController(AAIController&&) = delete; \
	AAIController(const AAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, AAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController) \
	AIMODULE_API virtual ~AAIController();


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_89_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIController;

// ********** End Class AAIController **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
