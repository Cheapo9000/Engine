// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULearningAgentsActionObject;
class ULearningAgentsActionSchema;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsObservationObject;
class ULearningAgentsObservationSchema;
struct FLearningAgentsActionObjectElement;
struct FLearningAgentsActionSchemaElement;
struct FLearningAgentsObservationObjectElement;
struct FLearningAgentsObservationSchemaElement;
#ifdef LEARNINGAGENTS_LearningAgentsInteractor_generated_h
#error "LearningAgentsInteractor.generated.h already included, missing '#pragma once' in LearningAgentsInteractor.h"
#endif
#define LEARNINGAGENTS_LearningAgentsInteractor_generated_h

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformAgentActions_Implementation(const ULearningAgentsActionObject* InActionObject, TArray<FLearningAgentsActionObjectElement> const& InActionObjectElements, TArray<int32> const& AgentIds); \
	virtual void PerformAgentAction_Implementation(const ULearningAgentsActionObject* InActionObject, FLearningAgentsActionObjectElement const& InActionObjectElement, const int32 AgentId); \
	virtual void SpecifyAgentAction_Implementation(FLearningAgentsActionSchemaElement& OutActionSchemaElement, ULearningAgentsActionSchema* InActionSchema); \
	virtual void GatherAgentObservations_Implementation(TArray<FLearningAgentsObservationObjectElement>& OutObservationObjectElements, ULearningAgentsObservationObject* InObservationObject, TArray<int32> const& AgentIds); \
	virtual void GatherAgentObservation_Implementation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, ULearningAgentsObservationObject* InObservationObject, const int32 AgentId); \
	virtual void SpecifyAgentObservation_Implementation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, ULearningAgentsObservationSchema* InObservationSchema); \
	DECLARE_FUNCTION(execGetActionEncodedVectorSize); \
	DECLARE_FUNCTION(execGetActionDistributionVectorSize); \
	DECLARE_FUNCTION(execGetActionVectorSize); \
	DECLARE_FUNCTION(execGetObservationEncodedVectorSize); \
	DECLARE_FUNCTION(execGetObservationVectorSize); \
	DECLARE_FUNCTION(execHasActionVector); \
	DECLARE_FUNCTION(execHasObservationVector); \
	DECLARE_FUNCTION(execSetActionVector); \
	DECLARE_FUNCTION(execSetObservationVector); \
	DECLARE_FUNCTION(execGetActionVector); \
	DECLARE_FUNCTION(execGetObservationVector); \
	DECLARE_FUNCTION(execPerformActions); \
	DECLARE_FUNCTION(execGatherObservations); \
	DECLARE_FUNCTION(execPerformAgentActions); \
	DECLARE_FUNCTION(execPerformAgentAction); \
	DECLARE_FUNCTION(execSpecifyAgentAction); \
	DECLARE_FUNCTION(execGatherAgentObservations); \
	DECLARE_FUNCTION(execGatherAgentObservation); \
	DECLARE_FUNCTION(execSpecifyAgentObservation); \
	DECLARE_FUNCTION(execSetupInteractor); \
	DECLARE_FUNCTION(execMakeInteractor);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsInteractor(); \
	friend struct Z_Construct_UClass_ULearningAgentsInteractor_Statics; \
public: \
	DECLARE_CLASS(ULearningAgentsInteractor, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgents"), NO_API) \
	DECLARE_SERIALIZER(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULearningAgentsInteractor(ULearningAgentsInteractor&&); \
	ULearningAgentsInteractor(const ULearningAgentsInteractor&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGAGENTS_API UClass* StaticClass<class ULearningAgentsInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
