// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/CreateWidgetToolSettings.h"

#ifdef WIDGETEDITORTOOLPALETTE_CreateWidgetToolSettings_generated_h
#error "CreateWidgetToolSettings.generated.h already included, missing '#pragma once' in CreateWidgetToolSettings.h"
#endif
#define WIDGETEDITORTOOLPALETTE_CreateWidgetToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCreateWidgetToolInfo *********************************************
struct Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics;
#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCreateWidgetToolInfo;
// ********** End ScriptStruct FCreateWidgetToolInfo ***********************************************

// ********** Begin ScriptStruct FCreateWidgetStackInfo ********************************************
struct Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics;
#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCreateWidgetStackInfo;
// ********** End ScriptStruct FCreateWidgetStackInfo **********************************************

// ********** Begin Class UCreateWidgetToolSettings ************************************************
struct Z_Construct_UClass_UCreateWidgetToolSettings_Statics;
WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateWidgetToolSettings(); \
	friend struct ::Z_Construct_UClass_UCreateWidgetToolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETEDITORTOOLPALETTE_API UClass* ::Z_Construct_UClass_UCreateWidgetToolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCreateWidgetToolSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WidgetEditorToolPalette"), Z_Construct_UClass_UCreateWidgetToolSettings_NoRegister) \
	DECLARE_SERIALIZER(UCreateWidgetToolSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("WidgetEditorToolPalette");} \



#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateWidgetToolSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCreateWidgetToolSettings(UCreateWidgetToolSettings&&) = delete; \
	UCreateWidgetToolSettings(const UCreateWidgetToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateWidgetToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateWidgetToolSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateWidgetToolSettings) \
	NO_API virtual ~UCreateWidgetToolSettings();


#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_65_PROLOG
#define FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCreateWidgetToolSettings;

// ********** End Class UCreateWidgetToolSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
