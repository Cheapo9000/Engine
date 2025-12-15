// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolPalette/WidgetEditorModeUILayer.h"

#ifdef UMGEDITOR_WidgetEditorModeUILayer_generated_h
#error "WidgetEditorModeUILayer.generated.h already included, missing '#pragma once' in WidgetEditorModeUILayer.h"
#endif
#define UMGEDITOR_WidgetEditorModeUILayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetEditorModeUISubsystem *********************************************
struct Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetEditorModeUISubsystem_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetEditorModeUISubsystem(); \
	friend struct ::Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetEditorModeUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetEditorModeUISubsystem, UAssetEditorUISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetEditorModeUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWidgetEditorModeUISubsystem)


#define FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetEditorModeUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetEditorModeUISubsystem(UWidgetEditorModeUISubsystem&&) = delete; \
	UWidgetEditorModeUISubsystem(const UWidgetEditorModeUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetEditorModeUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetEditorModeUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetEditorModeUISubsystem) \
	NO_API virtual ~UWidgetEditorModeUISubsystem();


#define FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_8_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetEditorModeUISubsystem;

// ********** End Class UWidgetEditorModeUISubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
