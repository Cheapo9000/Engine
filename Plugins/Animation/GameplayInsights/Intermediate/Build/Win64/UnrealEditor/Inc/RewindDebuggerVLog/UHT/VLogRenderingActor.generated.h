// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VLogRenderingActor.h"

#ifdef REWINDDEBUGGERVLOG_VLogRenderingActor_generated_h
#error "VLogRenderingActor.generated.h already included, missing '#pragma once' in VLogRenderingActor.h"
#endif
#define REWINDDEBUGGERVLOG_VLogRenderingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVLogRenderingActor ******************************************************
struct Z_Construct_UClass_AVLogRenderingActor_Statics;
REWINDDEBUGGERVLOG_API UClass* Z_Construct_UClass_AVLogRenderingActor_NoRegister();

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAVLogRenderingActor(); \
	friend struct ::Z_Construct_UClass_AVLogRenderingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REWINDDEBUGGERVLOG_API UClass* ::Z_Construct_UClass_AVLogRenderingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVLogRenderingActor, AVisualLoggerRenderingActorBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RewindDebuggerVLog"), Z_Construct_UClass_AVLogRenderingActor_NoRegister) \
	DECLARE_SERIALIZER(AVLogRenderingActor)


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVLogRenderingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVLogRenderingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVLogRenderingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVLogRenderingActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVLogRenderingActor(AVLogRenderingActor&&) = delete; \
	AVLogRenderingActor(const AVLogRenderingActor&) = delete;


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_16_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_20_INCLASS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVLogRenderingActor;

// ********** End Class AVLogRenderingActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogRenderingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
