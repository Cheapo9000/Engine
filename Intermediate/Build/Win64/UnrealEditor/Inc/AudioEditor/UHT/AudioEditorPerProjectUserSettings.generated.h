// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioEditorPerProjectUserSettings.h"

#ifdef AUDIOEDITOR_AudioEditorPerProjectUserSettings_generated_h
#error "AudioEditorPerProjectUserSettings.generated.h already included, missing '#pragma once' in AudioEditorPerProjectUserSettings.h"
#endif
#define AUDIOEDITOR_AudioEditorPerProjectUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioEditorPerProjectUserSettings ***************************************
struct Z_Construct_UClass_UAudioEditorPerProjectUserSettings_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioEditorPerProjectUserSettings_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEditorPerProjectUserSettings(); \
	friend struct ::Z_Construct_UClass_UAudioEditorPerProjectUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAudioEditorPerProjectUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioEditorPerProjectUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAudioEditorPerProjectUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioEditorPerProjectUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAudioEditorPerProjectUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioEditorPerProjectUserSettings(UAudioEditorPerProjectUserSettings&&) = delete; \
	UAudioEditorPerProjectUserSettings(const UAudioEditorPerProjectUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAudioEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEditorPerProjectUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEditorPerProjectUserSettings) \
	AUDIOEDITOR_API virtual ~UAudioEditorPerProjectUserSettings();


#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_17_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioEditorPerProjectUserSettings;

// ********** End Class UAudioEditorPerProjectUserSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorPerProjectUserSettings_h

// ********** Begin Enum EUseTemplateSoundWaveDuringAssetImport ************************************
#define FOREACH_ENUM_EUSETEMPLATESOUNDWAVEDURINGASSETIMPORT(op) \
	op(EUseTemplateSoundWaveDuringAssetImport::AlwaysPrompt) \
	op(EUseTemplateSoundWaveDuringAssetImport::AlwaysUse) \
	op(EUseTemplateSoundWaveDuringAssetImport::NeverUse) 

enum class EUseTemplateSoundWaveDuringAssetImport : uint8;
template<> struct TIsUEnumClass<EUseTemplateSoundWaveDuringAssetImport> { enum { Value = true }; };
template<> AUDIOEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EUseTemplateSoundWaveDuringAssetImport>();
// ********** End Enum EUseTemplateSoundWaveDuringAssetImport **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
