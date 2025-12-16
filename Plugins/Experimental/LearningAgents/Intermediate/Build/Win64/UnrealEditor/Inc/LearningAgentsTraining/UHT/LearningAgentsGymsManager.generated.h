// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsGymsManager.h"

#ifdef LEARNINGAGENTSTRAINING_LearningAgentsGymsManager_generated_h
#error "LearningAgentsGymsManager.generated.h already included, missing '#pragma once' in LearningAgentsGymsManager.h"
#endif
#define LEARNINGAGENTSTRAINING_LearningAgentsGymsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpawnGymInfo *****************************************************
struct Z_Construct_UScriptStruct_FSpawnGymInfo_Statics;
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpawnGymInfo_Statics; \
	LEARNINGAGENTSTRAINING_API static class UScriptStruct* StaticStruct();


struct FSpawnGymInfo;
// ********** End ScriptStruct FSpawnGymInfo *******************************************************

// ********** Begin Class ALearningAgentsGymsManager ***********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGymsCount); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_ALearningAgentsGymsManager_Statics;
LEARNINGAGENTSTRAINING_API UClass* Z_Construct_UClass_ALearningAgentsGymsManager_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALearningAgentsGymsManager(); \
	friend struct ::Z_Construct_UClass_ALearningAgentsGymsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSTRAINING_API UClass* ::Z_Construct_UClass_ALearningAgentsGymsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ALearningAgentsGymsManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgentsTraining"), Z_Construct_UClass_ALearningAgentsGymsManager_NoRegister) \
	DECLARE_SERIALIZER(ALearningAgentsGymsManager)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALearningAgentsGymsManager(ALearningAgentsGymsManager&&) = delete; \
	ALearningAgentsGymsManager(const ALearningAgentsGymsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSTRAINING_API, ALearningAgentsGymsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALearningAgentsGymsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALearningAgentsGymsManager) \
	LEARNINGAGENTSTRAINING_API virtual ~ALearningAgentsGymsManager();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALearningAgentsGymsManager;

// ********** End Class ALearningAgentsGymsManager *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsTraining_Public_LearningAgentsGymsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
