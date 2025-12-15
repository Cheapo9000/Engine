// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TranslationPickerEditWindow.h"

#ifdef TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h
#error "TranslationPickerEditWindow.generated.h already included, missing '#pragma once' in TranslationPickerEditWindow.h"
#endif
#define TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTranslationPickerSettings ***********************************************
struct Z_Construct_UClass_UTranslationPickerSettings_Statics;
TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister();

#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTranslationPickerSettings(); \
	friend struct ::Z_Construct_UClass_UTranslationPickerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRANSLATIONEDITOR_API UClass* ::Z_Construct_UClass_UTranslationPickerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTranslationPickerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TranslationEditor"), Z_Construct_UClass_UTranslationPickerSettings_NoRegister) \
	DECLARE_SERIALIZER(UTranslationPickerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("TranslationPickerSettings");} \



#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranslationPickerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationPickerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranslationPickerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationPickerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTranslationPickerSettings(UTranslationPickerSettings&&) = delete; \
	UTranslationPickerSettings(const UTranslationPickerSettings&) = delete; \
	NO_API virtual ~UTranslationPickerSettings();


#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_33_PROLOG
#define FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_INCLASS \
	FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTranslationPickerSettings;

// ********** End Class UTranslationPickerSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_TranslationEditor_Private_TranslationPickerEditWindow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
