// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuEntryScript.h"

#ifdef TOOLMENUS_ToolMenuEntryScript_generated_h
#error "ToolMenuEntryScript.generated.h already included, missing '#pragma once' in ToolMenuEntryScript.h"
#endif
#define TOOLMENUS_ToolMenuEntryScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToolMenu;
enum class ECheckBoxState : uint8;
struct FScriptSlateIcon;
struct FToolMenuContext;

// ********** Begin ScriptStruct FScriptSlateIcon **************************************************
struct Z_Construct_UScriptStruct_FScriptSlateIcon_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptSlateIcon_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FScriptSlateIcon;
// ********** End ScriptStruct FScriptSlateIcon ****************************************************

// ********** Begin ScriptStruct FToolMenuEntryScriptDataAdvanced **********************************
struct Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuEntryScriptDataAdvanced;
// ********** End ScriptStruct FToolMenuEntryScriptDataAdvanced ************************************

// ********** Begin ScriptStruct FToolMenuEntryScriptData ******************************************
struct Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuEntryScriptData;
// ********** End ScriptStruct FToolMenuEntryScriptData ********************************************

// ********** Begin Class UToolMenuEntryScript *****************************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowInToolbarTopLevel); \
	DECLARE_FUNCTION(execInitEntry); \
	DECLARE_FUNCTION(execUnregisterMenuEntry); \
	DECLARE_FUNCTION(execRegisterMenuEntry); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetCheckState); \
	DECLARE_FUNCTION(execCanExecute);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UToolMenuEntryScript_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuEntryScript(); \
	friend struct ::Z_Construct_UClass_UToolMenuEntryScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuEntryScript_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuEntryScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuEntryScript_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuEntryScript)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API UToolMenuEntryScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuEntryScript(UToolMenuEntryScript&&) = delete; \
	UToolMenuEntryScript(const UToolMenuEntryScript&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenuEntryScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryScript); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryScript) \
	TOOLMENUS_API virtual ~UToolMenuEntryScript();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_120_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuEntryScript;

// ********** End Class UToolMenuEntryScript *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
