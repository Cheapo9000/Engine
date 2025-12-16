// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEditorSettings.h"

#ifdef PCGEDITOR_PCGEditorSettings_generated_h
#error "PCGEditorSettings.generated.h already included, missing '#pragma once' in PCGEditorSettings.h"
#endif
#define PCGEDITOR_PCGEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorProjectSettings ************************************************
struct Z_Construct_UClass_UPCGEditorProjectSettings_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorProjectSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UPCGEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorProjectSettings(UPCGEditorProjectSettings&&) = delete; \
	UPCGEditorProjectSettings(const UPCGEditorProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorProjectSettings) \
	PCGEDITOR_API virtual ~UPCGEditorProjectSettings();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorProjectSettings;

// ********** End Class UPCGEditorProjectSettings **************************************************

// ********** Begin ScriptStruct FPCGEditorAttributeListViewSettings *******************************
struct Z_Construct_UScriptStruct_FPCGEditorAttributeListViewSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGEditorAttributeListViewSettings_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct();


struct FPCGEditorAttributeListViewSettings;
// ********** End ScriptStruct FPCGEditorAttributeListViewSettings *********************************

// ********** Begin Class UPCGEditorSettings *******************************************************
struct Z_Construct_UClass_UPCGEditorSettings_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorSettings(UPCGEditorSettings&&) = delete; \
	UPCGEditorSettings(const UPCGEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorSettings) \
	PCGEDITOR_API virtual ~UPCGEditorSettings();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_71_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorSettings;

// ********** End Class UPCGEditorSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGEditorSettings_h

// ********** Begin Enum EPCGEditorDoubleClickAction ***********************************************
#define FOREACH_ENUM_EPCGEDITORDOUBLECLICKACTION(op) \
	op(EPCGEditorDoubleClickAction::DoNothing) \
	op(EPCGEditorDoubleClickAction::ToggleInspectNode) \
	op(EPCGEditorDoubleClickAction::ToggleDebugNode) \
	op(EPCGEditorDoubleClickAction::JumpToSourceFile) 

enum class EPCGEditorDoubleClickAction : uint8;
template<> struct TIsUEnumClass<EPCGEditorDoubleClickAction> { enum { Value = true }; };
template<> PCGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGEditorDoubleClickAction>();
// ********** End Enum EPCGEditorDoubleClickAction *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
