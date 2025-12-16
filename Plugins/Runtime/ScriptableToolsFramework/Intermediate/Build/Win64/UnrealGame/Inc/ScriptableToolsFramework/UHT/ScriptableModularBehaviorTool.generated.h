// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/ScriptableModularBehaviorTool.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableModularBehaviorTool_generated_h
#error "ScriptableModularBehaviorTool.generated.h already included, missing '#pragma once' in ScriptableModularBehaviorTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableModularBehaviorTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EScriptableToolMouseButton : uint8;
struct FKey;
struct FScriptableToolModifierStates;

// ********** Begin Class UScriptableModularBehaviorTool *******************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveModifiers); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execIsCtrlDown); \
	DECLARE_FUNCTION(execIsShiftDown); \
	DECLARE_FUNCTION(execAddMultiKeyInputBehavior); \
	DECLARE_FUNCTION(execAddSingleKeyInputBehavior); \
	DECLARE_FUNCTION(execAddMouseHoverBehavior); \
	DECLARE_FUNCTION(execAddMultiClickSequenceBehavior); \
	DECLARE_FUNCTION(execAddMouseWheelBehavior); \
	DECLARE_FUNCTION(execAddSingleClickOrDragBehavior); \
	DECLARE_FUNCTION(execAddClickDragBehavior); \
	DECLARE_FUNCTION(execAddDoubleClickBehavior); \
	DECLARE_FUNCTION(execAddSingleClickBehavior);


struct Z_Construct_UClass_UScriptableModularBehaviorTool_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableModularBehaviorTool_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableModularBehaviorTool(); \
	friend struct ::Z_Construct_UClass_UScriptableModularBehaviorTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableModularBehaviorTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableModularBehaviorTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableModularBehaviorTool_NoRegister) \
	DECLARE_SERIALIZER(UScriptableModularBehaviorTool)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableModularBehaviorTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableModularBehaviorTool(UScriptableModularBehaviorTool&&) = delete; \
	UScriptableModularBehaviorTool(const UScriptableModularBehaviorTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableModularBehaviorTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableModularBehaviorTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableModularBehaviorTool) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableModularBehaviorTool();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableModularBehaviorTool;

// ********** End Class UScriptableModularBehaviorTool *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableModularBehaviorTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
