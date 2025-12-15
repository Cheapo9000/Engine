// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LogVisualizerSessionSettings.h"

#ifdef LOGVISUALIZER_LogVisualizerSessionSettings_generated_h
#error "LogVisualizerSessionSettings.generated.h already included, missing '#pragma once' in LogVisualizerSessionSettings.h"
#endif
#define LOGVISUALIZER_LogVisualizerSessionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULogVisualizerSessionSettings ********************************************
struct Z_Construct_UClass_ULogVisualizerSessionSettings_Statics;
LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister();

#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULogVisualizerSessionSettings(); \
	friend struct ::Z_Construct_UClass_ULogVisualizerSessionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOGVISUALIZER_API UClass* ::Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULogVisualizerSessionSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogVisualizer"), Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister) \
	DECLARE_SERIALIZER(ULogVisualizerSessionSettings)


#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOGVISUALIZER_API ULogVisualizerSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogVisualizerSessionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOGVISUALIZER_API, ULogVisualizerSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogVisualizerSessionSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULogVisualizerSessionSettings(ULogVisualizerSessionSettings&&) = delete; \
	ULogVisualizerSessionSettings(const ULogVisualizerSessionSettings&) = delete; \
	LOGVISUALIZER_API virtual ~ULogVisualizerSessionSettings();


#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_16_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_19_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULogVisualizerSessionSettings;

// ********** End Class ULogVisualizerSessionSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
