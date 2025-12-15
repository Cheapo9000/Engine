// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/FilterBarConfig.h"

#ifdef EDITORWIDGETS_FilterBarConfig_generated_h
#error "FilterBarConfig.generated.h already included, missing '#pragma once' in FilterBarConfig.h"
#endif
#define EDITORWIDGETS_FilterBarConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomTextFilterState ********************************************
struct Z_Construct_UScriptStruct_FCustomTextFilterState_Statics;
#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomTextFilterState_Statics; \
	EDITORWIDGETS_API static class UScriptStruct* StaticStruct();


struct FCustomTextFilterState;
// ********** End ScriptStruct FCustomTextFilterState **********************************************

// ********** Begin ScriptStruct FFilterBarSettings ************************************************
struct Z_Construct_UScriptStruct_FFilterBarSettings_Statics;
#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFilterBarSettings_Statics; \
	EDITORWIDGETS_API static class UScriptStruct* StaticStruct();


struct FFilterBarSettings;
// ********** End ScriptStruct FFilterBarSettings **************************************************

// ********** Begin Class UFilterBarConfig *********************************************************
struct Z_Construct_UClass_UFilterBarConfig_Statics;
EDITORWIDGETS_API UClass* Z_Construct_UClass_UFilterBarConfig_NoRegister();

#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilterBarConfig(); \
	friend struct ::Z_Construct_UClass_UFilterBarConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORWIDGETS_API UClass* ::Z_Construct_UClass_UFilterBarConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilterBarConfig, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorWidgets"), Z_Construct_UClass_UFilterBarConfig_NoRegister) \
	DECLARE_SERIALIZER(UFilterBarConfig)


#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORWIDGETS_API UFilterBarConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilterBarConfig(UFilterBarConfig&&) = delete; \
	UFilterBarConfig(const UFilterBarConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORWIDGETS_API, UFilterBarConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterBarConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterBarConfig) \
	EDITORWIDGETS_API virtual ~UFilterBarConfig();


#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_80_PROLOG
#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilterBarConfig;

// ********** End Class UFilterBarConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorWidgets_Public_Filters_FilterBarConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
