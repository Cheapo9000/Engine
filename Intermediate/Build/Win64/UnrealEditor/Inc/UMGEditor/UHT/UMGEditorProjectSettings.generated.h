// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMGEditorProjectSettings.h"

#ifdef UMGEDITOR_UMGEditorProjectSettings_generated_h
#error "UMGEditorProjectSettings.generated.h already included, missing '#pragma once' in UMGEditorProjectSettings.h"
#endif
#define UMGEDITOR_UMGEditorProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUMGEditorProjectSettings ************************************************
struct Z_Construct_UClass_UUMGEditorProjectSettings_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UUMGEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUMGEditorProjectSettings, UWidgetEditingProjectSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UUMGEditorProjectSettings)


#define FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUMGEditorProjectSettings(UUMGEditorProjectSettings&&) = delete; \
	UUMGEditorProjectSettings(const UUMGEditorProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UUMGEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGEditorProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGEditorProjectSettings) \
	UMGEDITOR_API virtual ~UUMGEditorProjectSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_26_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUMGEditorProjectSettings;

// ********** End Class UUMGEditorProjectSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
