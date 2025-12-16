// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/ScriptableSingleClickTool.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableSingleClickTool_generated_h
#error "ScriptableSingleClickTool.generated.h already included, missing '#pragma once' in ScriptableSingleClickTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableSingleClickTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceRay;
struct FInputRayHit;
struct FScriptableToolModifierStates;

// ********** Begin Class UScriptableSingleClickTool ***********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveModifiers); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execIsCtrlDown); \
	DECLARE_FUNCTION(execIsShiftDown); \
	DECLARE_FUNCTION(execInActiveHover); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverUpdate); \
	DECLARE_FUNCTION(execOnHoverBegin); \
	DECLARE_FUNCTION(execOnHoverHitTest); \
	DECLARE_FUNCTION(execOnHitByClick); \
	DECLARE_FUNCTION(execTestIfHitByClick);


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UScriptableSingleClickTool_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableSingleClickTool_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableSingleClickTool(); \
	friend struct ::Z_Construct_UClass_UScriptableSingleClickTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableSingleClickTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableSingleClickTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableSingleClickTool_NoRegister) \
	DECLARE_SERIALIZER(UScriptableSingleClickTool)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableSingleClickTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableSingleClickTool(UScriptableSingleClickTool&&) = delete; \
	UScriptableSingleClickTool(const UScriptableSingleClickTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableSingleClickTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableSingleClickTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableSingleClickTool) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableSingleClickTool();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableSingleClickTool;

// ********** End Class UScriptableSingleClickTool *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
