// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncAction_LearningAgentsQueryReplays.h"

#ifdef LEARNINGAGENTSREPLAY_AsyncAction_LearningAgentsQueryReplays_generated_h
#error "AsyncAction_LearningAgentsQueryReplays.generated.h already included, missing '#pragma once' in AsyncAction_LearningAgentsQueryReplays.h"
#endif
#define LEARNINGAGENTSREPLAY_AsyncAction_LearningAgentsQueryReplays_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAsyncAction_LearningAgentsQueryReplays;
class ULearningAgentsReplayList;

// ********** Begin Delegate FQueryReplayAsyncDelegate *********************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_17_DELEGATE \
LEARNINGAGENTSREPLAY_API void FQueryReplayAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& QueryReplayAsyncDelegate, ULearningAgentsReplayList* Results);


// ********** End Delegate FQueryReplayAsyncDelegate ***********************************************

// ********** Begin Class UAsyncAction_LearningAgentsQueryReplays **********************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQueryLearningAgentsReplays);


struct Z_Construct_UClass_UAsyncAction_LearningAgentsQueryReplays_Statics;
LEARNINGAGENTSREPLAY_API UClass* Z_Construct_UClass_UAsyncAction_LearningAgentsQueryReplays_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_LearningAgentsQueryReplays(); \
	friend struct ::Z_Construct_UClass_UAsyncAction_LearningAgentsQueryReplays_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSREPLAY_API UClass* ::Z_Construct_UClass_UAsyncAction_LearningAgentsQueryReplays_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_LearningAgentsQueryReplays, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsReplay"), Z_Construct_UClass_UAsyncAction_LearningAgentsQueryReplays_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_LearningAgentsQueryReplays)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_LearningAgentsQueryReplays(UAsyncAction_LearningAgentsQueryReplays&&) = delete; \
	UAsyncAction_LearningAgentsQueryReplays(const UAsyncAction_LearningAgentsQueryReplays&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_LearningAgentsQueryReplays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_LearningAgentsQueryReplays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_LearningAgentsQueryReplays) \
	NO_API virtual ~UAsyncAction_LearningAgentsQueryReplays();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_LearningAgentsQueryReplays;

// ********** End Class UAsyncAction_LearningAgentsQueryReplays ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_AsyncAction_LearningAgentsQueryReplays_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
