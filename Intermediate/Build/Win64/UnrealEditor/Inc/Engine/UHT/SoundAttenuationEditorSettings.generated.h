// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundAttenuationEditorSettings.h"

#ifdef ENGINE_SoundAttenuationEditorSettings_generated_h
#error "SoundAttenuationEditorSettings.generated.h already included, missing '#pragma once' in SoundAttenuationEditorSettings.h"
#endif
#define ENGINE_SoundAttenuationEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundAttenuationEditorSettings ******************************************
struct Z_Construct_UClass_USoundAttenuationEditorSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuationEditorSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAttenuationEditorSettings(); \
	friend struct ::Z_Construct_UClass_USoundAttenuationEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundAttenuationEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundAttenuationEditorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundAttenuationEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USoundAttenuationEditorSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuationEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundAttenuationEditorSettings(USoundAttenuationEditorSettings&&) = delete; \
	USoundAttenuationEditorSettings(const USoundAttenuationEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuationEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuationEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuationEditorSettings) \
	ENGINE_API virtual ~USoundAttenuationEditorSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundAttenuationEditorSettings;

// ********** End Class USoundAttenuationEditorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
