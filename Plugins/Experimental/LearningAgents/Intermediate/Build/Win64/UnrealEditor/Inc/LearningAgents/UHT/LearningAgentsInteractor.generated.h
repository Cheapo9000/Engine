// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsInteractor.h"

#ifdef LEARNINGAGENTS_LearningAgentsInteractor_generated_h
#error "LearningAgentsInteractor.generated.h already included, missing '#pragma once' in LearningAgentsInteractor.h"
#endif
#define LEARNINGAGENTS_LearningAgentsInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsActionModifier;
class ULearningAgentsActionObject;
class ULearningAgentsActionSchema;
class ULearningAgentsInteractor;
class ULearningAgentsManager;
class ULearningAgentsObservationObject;
class ULearningAgentsObservationSchema;
struct FLearningAgentsActionModifierElement;
struct FLearningAgentsActionObjectElement;
struct FLearningAgentsActionSchemaElement;
struct FLearningAgentsObservationObjectElement;
struct FLearningAgentsObservationSchemaElement;

// ********** Begin Class ULearningAgentsInteractor ************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	LEARNINGAGENTS_API virtual void MakeAgentActionModifiers_Implementation(TArray<FLearningAgentsActionModifierElement>& OutActionModifierElements, ULearningAgentsActionModifier* InActionModifier, const ULearningAgentsObservationObject* InObservationObject, TArray<FLearningAgentsObservationObjectElement> const& InObservationObjectElements, TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void MakeAgentActionModifier_Implementation(FLearningAgentsActionModifierElement& OutActionModifierElement, ULearningAgentsActionModifier* InActionModifier, const ULearningAgentsObservationObject* InObservationObject, FLearningAgentsObservationObjectElement const& InObservationObjectElement, const int32 AgentId); \
	LEARNINGAGENTS_API virtual void PerformAgentActions_Implementation(const ULearningAgentsActionObject* InActionObject, TArray<FLearningAgentsActionObjectElement> const& InActionObjectElements, TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void PerformAgentAction_Implementation(const ULearningAgentsActionObject* InActionObject, FLearningAgentsActionObjectElement const& InActionObjectElement, const int32 AgentId); \
	LEARNINGAGENTS_API virtual void SpecifyAgentAction_Implementation(FLearningAgentsActionSchemaElement& OutActionSchemaElement, ULearningAgentsActionSchema* InActionSchema); \
	LEARNINGAGENTS_API virtual void GatherAgentObservations_Implementation(TArray<FLearningAgentsObservationObjectElement>& OutObservationObjectElements, ULearningAgentsObservationObject* InObservationObject, TArray<int32> const& AgentIds); \
	LEARNINGAGENTS_API virtual void GatherAgentObservation_Implementation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, ULearningAgentsObservationObject* InObservationObject, const int32 AgentId); \
	LEARNINGAGENTS_API virtual void SpecifyAgentObservation_Implementation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, ULearningAgentsObservationSchema* InObservationSchema); \
	DECLARE_FUNCTION(execGetActionEncodedVectorSize); \
	DECLARE_FUNCTION(execGetActionModifierVectorSize); \
	DECLARE_FUNCTION(execGetActionDistributionVectorSize); \
	DECLARE_FUNCTION(execGetActionVectorSize); \
	DECLARE_FUNCTION(execGetObservationEncodedVectorSize); \
	DECLARE_FUNCTION(execGetObservationVectorSize); \
	DECLARE_FUNCTION(execHasActionVector); \
	DECLARE_FUNCTION(execHasActionModifierVector); \
	DECLARE_FUNCTION(execHasObservationVector); \
	DECLARE_FUNCTION(execSetActionVector); \
	DECLARE_FUNCTION(execSetActionModifierVector); \
	DECLARE_FUNCTION(execSetObservationVector); \
	DECLARE_FUNCTION(execGetActionVector); \
	DECLARE_FUNCTION(execGetActionModifierVector); \
	DECLARE_FUNCTION(execGetObservationVector); \
	DECLARE_FUNCTION(execPerformActions); \
	DECLARE_FUNCTION(execMakeActionModifiers); \
	DECLARE_FUNCTION(execGatherObservations); \
	DECLARE_FUNCTION(execMakeAgentActionModifiers); \
	DECLARE_FUNCTION(execMakeAgentActionModifier); \
	DECLARE_FUNCTION(execPerformAgentActions); \
	DECLARE_FUNCTION(execPerformAgentAction); \
	DECLARE_FUNCTION(execSpecifyAgentAction); \
	DECLARE_FUNCTION(execGatherAgentObservations); \
	DECLARE_FUNCTION(execGatherAgentObservation); \
	DECLARE_FUNCTION(execSpecifyAgentObservation); \
	DECLARE_FUNCTION(execSetupInteractor); \
	DECLARE_FUNCTION(execMakeInteractor);


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULearningAgentsInteractor_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsInteractor_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsInteractor(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsInteractor, ULearningAgentsManagerListener, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsInteractor_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsInteractor(ULearningAgentsInteractor&&) = delete; \
	ULearningAgentsInteractor(const ULearningAgentsInteractor&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsInteractor)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsInteractor;

// ********** End Class ULearningAgentsInteractor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
