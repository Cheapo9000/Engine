// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/WidgetDesignerSettings.h"

#ifdef UMGEDITOR_WidgetDesignerSettings_generated_h
#error "WidgetDesignerSettings.generated.h already included, missing '#pragma once' in WidgetDesignerSettings.h"
#endif
#define UMGEDITOR_WidgetDesignerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetDesignerSettings **************************************************
struct Z_Construct_UClass_UWidgetDesignerSettings_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetDesignerSettings_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetDesignerSettings(); \
	friend struct ::Z_Construct_UClass_UWidgetDesignerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetDesignerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetDesignerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetDesignerSettings_NoRegister) \
	DECLARE_SERIALIZER(UWidgetDesignerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetDesignerSettings(UWidgetDesignerSettings&&) = delete; \
	UWidgetDesignerSettings(const UWidgetDesignerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetDesignerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetDesignerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetDesignerSettings) \
	UMGEDITOR_API virtual ~UWidgetDesignerSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_35_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetDesignerSettings;

// ********** End Class UWidgetDesignerSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h

// ********** Begin Enum EDisplayOnCompile *********************************************************
#define FOREACH_ENUM_EDISPLAYONCOMPILE(op) \
	op(DoC_ErrorsOrWarnings) \
	op(DoC_ErrorsOnly) \
	op(DoC_WarningsOnly) \
	op(DoC_Never) 

enum EDisplayOnCompile : int;
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayOnCompile>();
// ********** End Enum EDisplayOnCompile ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
