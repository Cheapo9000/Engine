// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanEditorSettings.h"

#ifdef METAHUMANCOREEDITOR_MetaHumanEditorSettings_generated_h
#error "MetaHumanEditorSettings.generated.h already included, missing '#pragma once' in MetaHumanEditorSettings.h"
#endif
#define METAHUMANCOREEDITOR_MetaHumanEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanEditorSettings *************************************************
struct Z_Construct_UClass_UMetaHumanEditorSettings_Statics;
METAHUMANCOREEDITOR_API UClass* Z_Construct_UClass_UMetaHumanEditorSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCOREEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanCoreEditor"), Z_Construct_UClass_UMetaHumanEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanEditorSettings(UMetaHumanEditorSettings&&) = delete; \
	UMetaHumanEditorSettings(const UMetaHumanEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCOREEDITOR_API, UMetaHumanEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanEditorSettings) \
	METAHUMANCOREEDITOR_API virtual ~UMetaHumanEditorSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_14_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanEditorSettings;

// ********** End Class UMetaHumanEditorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCoreEditor_Public_MetaHumanEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
