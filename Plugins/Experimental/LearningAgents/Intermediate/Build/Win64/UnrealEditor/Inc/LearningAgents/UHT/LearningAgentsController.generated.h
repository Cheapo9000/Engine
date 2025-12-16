// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsController.h"

#ifdef LEARNINGAGENTS_LearningAgentsController_generated_h
#error "LearningAgentsController.generated.h already included, missing '#pragma once' in LearningAgentsController.h"
#endif
#define LEARNINGAGENTS_LearningAgentsController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsActionObject;
class ULearningAgentsController;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsObservationObject;
struct FLearningAgentsActionObjectElement;
struct FLearningAgentsObservationObjectElement;

// ********** Begin Class ULearningAgentsController ************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	LEARNINGAGENTS_API virtual void EvaluateAgentControllers_Implementation(TArray<FLearningAgentsActionObjectElement>& OutActionObjectElements, ULearningAgentsActionObject* InActionObject, const ULearningAgentsObservationObject* InObservationObject, TArray<FLearningAgentsObservationObjectElement> const& InObservationObjectElements, TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void EvaluateAgentController_Implementation(FLearningAgentsActionObjectElement& OutActionObjectElement, ULearningAgentsActionObject* InActionObject, const ULearningAgentsObservationObject* InObservationObject, FLearningAgentsObservationObjectElement const& InObservationObjectElement, const int32 AgentId); \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execRunController); \
	DECLARE_FUNCTION(execEvaluateController); \
	DECLARE_FUNCTION(execEvaluateAgentControllers); \
	DECLARE_FUNCTION(execEvaluateAgentController); \
	DECLARE_FUNCTION(execSetupController); \
	DECLARE_FUNCTION(execMakeController);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsController_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsController_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsController(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsController, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsController_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsController)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsController(ULearningAgentsController&&) = delete; \
	ULearningAgentsController(const ULearningAgentsController&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsController)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsController;

// ********** End Class ULearningAgentsController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
