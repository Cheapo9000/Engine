// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformEditorToolMenuContext.h"

#ifdef WAVEFORMEDITOR_WaveformEditorToolMenuContext_generated_h
#error "WaveformEditorToolMenuContext.generated.h already included, missing '#pragma once' in WaveformEditorToolMenuContext.h"
#endif
#define WAVEFORMEDITOR_WaveformEditorToolMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveformEditorToolMenuContext *******************************************
struct Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics;
WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorToolMenuContext_NoRegister();

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformEditorToolMenuContext(); \
	friend struct ::Z_Construct_UClass_UWaveformEditorToolMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFORMEDITOR_API UClass* ::Z_Construct_UClass_UWaveformEditorToolMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformEditorToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveformEditor"), Z_Construct_UClass_UWaveformEditorToolMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UWaveformEditorToolMenuContext)


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVEFORMEDITOR_API UWaveformEditorToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformEditorToolMenuContext(UWaveformEditorToolMenuContext&&) = delete; \
	UWaveformEditorToolMenuContext(const UWaveformEditorToolMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVEFORMEDITOR_API, UWaveformEditorToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformEditorToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformEditorToolMenuContext) \
	WAVEFORMEDITOR_API virtual ~UWaveformEditorToolMenuContext();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_11_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformEditorToolMenuContext;

// ********** End Class UWaveformEditorToolMenuContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Public_WaveformEditorToolMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
