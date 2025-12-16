// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsManager.h"

#ifdef LEARNINGAGENTS_LearningAgentsManager_generated_h
#error "LearningAgentsManager.generated.h already included, missing '#pragma once' in LearningAgentsManager.h"
#endif
#define LEARNINGAGENTS_LearningAgentsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULearningAgentsManagerListener;
class UObject;

// ********** Begin Class ULearningAgentsManager ***************************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveListener); \
	DECLARE_FUNCTION(execAddListener); \
	DECLARE_FUNCTION(execHasAgent); \
	DECLARE_FUNCTION(execHasAgentObject); \
	DECLARE_FUNCTION(execGetAgentNum); \
	DECLARE_FUNCTION(execGetAgentIds); \
	DECLARE_FUNCTION(execGetAgentId); \
	DECLARE_FUNCTION(execGetAllAgents); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetAgent); \
	DECLARE_FUNCTION(execResetAllAgents); \
	DECLARE_FUNCTION(execResetAgents); \
	DECLARE_FUNCTION(execResetAgent); \
	DECLARE_FUNCTION(execRequestRemoveAgent); \
	DECLARE_FUNCTION(execRemoveAllAgents); \
	DECLARE_FUNCTION(execRemoveAgents); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execRequestAddAgent); \
	DECLARE_FUNCTION(execAddAgents); \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execSetMaxAgentNum); \
	DECLARE_FUNCTION(execGetMaxAgentNum);


struct Z_Construct_UClass_ULearningAgentsManager_Statics;
LEARNINGAGENTS_API UClass* Z_Construct_UClass_ULearningAgentsManager_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsManager(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTS_API UClass* ::Z_Construct_UClass_ULearningAgentsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningAgents"), Z_Construct_UClass_ULearningAgentsManager_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsManager)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsManager(ULearningAgentsManager&&) = delete; \
	ULearningAgentsManager(const ULearningAgentsManager&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsManager)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsManager;

// ********** End Class ULearningAgentsManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgents_Public_LearningAgentsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
