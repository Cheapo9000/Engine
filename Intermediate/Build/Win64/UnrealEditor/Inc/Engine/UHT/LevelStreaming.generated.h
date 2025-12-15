// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreaming.h"

#ifdef ENGINE_LevelStreaming_generated_h
#error "LevelStreaming.generated.h already included, missing '#pragma once' in LevelStreaming.h"
#endif
#define ENGINE_LevelStreaming_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelScriptActor;
class ULevel;
class ULevelStreaming;

// ********** Begin Delegate FLevelStreamingLoadedStatus *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_107_DELEGATE \
ENGINE_API void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus);


// ********** End Delegate FLevelStreamingLoadedStatus *********************************************

// ********** Begin Delegate FLevelStreamingVisibilityStatus ***************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_108_DELEGATE \
ENGINE_API void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus);


// ********** End Delegate FLevelStreamingVisibilityStatus *****************************************

// ********** Begin Class ULevelStreaming **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLevelScriptActor); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execIsStreamingStatePending); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execGetLoadedLevel); \
	DECLARE_FUNCTION(execShouldBeLoaded); \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName); \
	DECLARE_FUNCTION(execSetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execGetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetLevelLODIndex); \
	DECLARE_FUNCTION(execSetShouldBeLoaded); \
	DECLARE_FUNCTION(execSetShouldBeVisible);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming, ENGINE_API)


struct Z_Construct_UClass_ULevelStreaming_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct ::Z_Construct_UClass_ULevelStreaming_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreaming_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreaming_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreaming); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreaming(ULevelStreaming&&) = delete; \
	ULevelStreaming(const ULevelStreaming&) = delete; \
	ENGINE_API virtual ~ULevelStreaming();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreaming;

// ********** End Class ULevelStreaming ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
