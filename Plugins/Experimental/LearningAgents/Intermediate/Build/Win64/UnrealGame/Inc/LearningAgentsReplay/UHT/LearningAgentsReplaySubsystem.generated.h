// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LearningAgentsReplaySubsystem.h"

#ifdef LEARNINGAGENTSREPLAY_LearningAgentsReplaySubsystem_generated_h
#error "LearningAgentsReplaySubsystem.generated.h already included, missing '#pragma once' in LearningAgentsReplaySubsystem.h"
#endif
#define LEARNINGAGENTSREPLAY_LearningAgentsReplaySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULearningAgentsReplayListEntry;
struct FDateTime;
struct FTimespan;

// ********** Begin Class ULearningAgentsReplayListEntry *******************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsLive); \
	DECLARE_FUNCTION(execGetNumViewers); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetFriendlyName);


struct Z_Construct_UClass_ULearningAgentsReplayListEntry_Statics;
LEARNINGAGENTSREPLAY_API UClass* Z_Construct_UClass_ULearningAgentsReplayListEntry_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsReplayListEntry(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsReplayListEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSREPLAY_API UClass* ::Z_Construct_UClass_ULearningAgentsReplayListEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsReplayListEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsReplay"), Z_Construct_UClass_ULearningAgentsReplayListEntry_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsReplayListEntry)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSREPLAY_API ULearningAgentsReplayListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsReplayListEntry(ULearningAgentsReplayListEntry&&) = delete; \
	ULearningAgentsReplayListEntry(const ULearningAgentsReplayListEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSREPLAY_API, ULearningAgentsReplayListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsReplayListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsReplayListEntry) \
	LEARNINGAGENTSREPLAY_API virtual ~ULearningAgentsReplayListEntry();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsReplayListEntry;

// ********** End Class ULearningAgentsReplayListEntry *********************************************

// ********** Begin Class ULearningAgentsReplayList ************************************************
struct Z_Construct_UClass_ULearningAgentsReplayList_Statics;
LEARNINGAGENTSREPLAY_API UClass* Z_Construct_UClass_ULearningAgentsReplayList_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsReplayList(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsReplayList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSREPLAY_API UClass* ::Z_Construct_UClass_ULearningAgentsReplayList_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsReplayList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsReplay"), Z_Construct_UClass_ULearningAgentsReplayList_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsReplayList)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGAGENTSREPLAY_API ULearningAgentsReplayList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsReplayList(ULearningAgentsReplayList&&) = delete; \
	ULearningAgentsReplayList(const ULearningAgentsReplayList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSREPLAY_API, ULearningAgentsReplayList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsReplayList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULearningAgentsReplayList) \
	LEARNINGAGENTSREPLAY_API virtual ~ULearningAgentsReplayList();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsReplayList;

// ********** End Class ULearningAgentsReplayList **************************************************

// ********** Begin Class ULearningAgentsReplaySubsystem *******************************************
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReplayCurrentTime); \
	DECLARE_FUNCTION(execGetReplayLengthInSeconds); \
	DECLARE_FUNCTION(execSeekInActiveReplay); \
	DECLARE_FUNCTION(execRecordClientReplay); \
	DECLARE_FUNCTION(execStopRecordingReplay); \
	DECLARE_FUNCTION(execPlayReplay); \
	DECLARE_FUNCTION(execDoesPlatformSupportReplays); \
	DECLARE_FUNCTION(execOnDemoPlayStarted);


struct Z_Construct_UClass_ULearningAgentsReplaySubsystem_Statics;
LEARNINGAGENTSREPLAY_API UClass* Z_Construct_UClass_ULearningAgentsReplaySubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULearningAgentsReplaySubsystem(); \
	friend struct ::Z_Construct_UClass_ULearningAgentsReplaySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEARNINGAGENTSREPLAY_API UClass* ::Z_Construct_UClass_ULearningAgentsReplaySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULearningAgentsReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningAgentsReplay"), Z_Construct_UClass_ULearningAgentsReplaySubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULearningAgentsReplaySubsystem)


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULearningAgentsReplaySubsystem(ULearningAgentsReplaySubsystem&&) = delete; \
	ULearningAgentsReplaySubsystem(const ULearningAgentsReplaySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGAGENTSREPLAY_API, ULearningAgentsReplaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULearningAgentsReplaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULearningAgentsReplaySubsystem) \
	LEARNINGAGENTSREPLAY_API virtual ~ULearningAgentsReplaySubsystem();


#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULearningAgentsReplaySubsystem;

// ********** End Class ULearningAgentsReplaySubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LearningAgents_Source_LearningAgentsReplay_Public_LearningAgentsReplaySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
