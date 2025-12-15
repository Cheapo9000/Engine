// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetEditingProjectSettings.h"

#ifdef UMGEDITOR_WidgetEditingProjectSettings_generated_h
#error "WidgetEditingProjectSettings.generated.h already included, missing '#pragma once' in WidgetEditingProjectSettings.h"
#endif
#define UMGEDITOR_WidgetEditingProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDebugResolution **************************************************
struct Z_Construct_UScriptStruct_FDebugResolution_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDebugResolution_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDebugResolution;
// ********** End ScriptStruct FDebugResolution ****************************************************

// ********** Begin ScriptStruct FWidgetCompilerOptions ********************************************
struct Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FWidgetCompilerOptions;
// ********** End ScriptStruct FWidgetCompilerOptions **********************************************

// ********** Begin ScriptStruct FDirectoryWidgetCompilerOptions ***********************************
struct Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics;
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDirectoryWidgetCompilerOptions;
// ********** End ScriptStruct FDirectoryWidgetCompilerOptions *************************************

// ********** Begin Class UWidgetEditingProjectSettings ********************************************
struct Z_Construct_UClass_UWidgetEditingProjectSettings_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetEditingProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetEditingProjectSettings(); \
	friend struct ::Z_Construct_UClass_UWidgetEditingProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UWidgetEditingProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetEditingProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UWidgetEditingProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UWidgetEditingProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_127_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetEditingProjectSettings(UWidgetEditingProjectSettings&&) = delete; \
	UWidgetEditingProjectSettings(const UWidgetEditingProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetEditingProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetEditingProjectSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWidgetEditingProjectSettings) \
	UMGEDITOR_API virtual ~UWidgetEditingProjectSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_124_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetEditingProjectSettings;

// ********** End Class UWidgetEditingProjectSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetEditingProjectSettings_h

// ********** Begin Enum EPropertyBindingPermissionLevel *******************************************
#define FOREACH_ENUM_EPROPERTYBINDINGPERMISSIONLEVEL(op) \
	op(EPropertyBindingPermissionLevel::Allow) \
	op(EPropertyBindingPermissionLevel::Prevent) \
	op(EPropertyBindingPermissionLevel::PreventAndWarn) \
	op(EPropertyBindingPermissionLevel::PreventAndError) 

enum class EPropertyBindingPermissionLevel : uint8;
template<> struct TIsUEnumClass<EPropertyBindingPermissionLevel> { enum { Value = true }; };
template<> UMGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBindingPermissionLevel>();
// ********** End Enum EPropertyBindingPermissionLevel *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
