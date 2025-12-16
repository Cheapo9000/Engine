// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsDepthMapComponent.h"

#ifdef LEARNINGAGENTS_LearningAgentsDepthMapComponent_generated_h
#error "LearningAgentsDepthMapComponent.generated.h already included, missing '#pragma once' in LearningAgentsDepthMapComponent.h"
#endif
#define LEARNINGAGENTS_LearningAgentsDepthMapComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDepthMapConfig ***************************************************
struct Z_Construct_UScriptStruct_FDepthMapConfig_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDepthMapConfig_Statics; \
	LEARNINGAGENTS_API static class UScriptStruct* StaticStruct();


struct FDepthMapConfig;
// ********** End ScriptStruct FDepthMapConfig *****************************************************

// ********** Begin Class ULearningAgentsDepthMapComponent *****************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDepthMapFlatArray);


struct Z_Construct_UClass_ULearningAgentsDepthMapComponent_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsDepthMapComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsDepthMapComponent(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsDepthMapComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsDepthMapComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsDepthMapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsDepthMapComponent_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsDepthMapComponent)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsDepthMapComponent(ULearningAgentsDepthMapComponent&&) = delete; \
	ULearningAgentsDepthMapComponent(const ULearningAgentsDepthMapComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULearningAgentsDepthMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsDepthMapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsDepthMapComponent) \
	NO_API virtual ~ULearningAgentsDepthMapComponent();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsDepthMapComponent;

// ********** End Class ULearningAgentsDepthMapComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsDepthMapComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
