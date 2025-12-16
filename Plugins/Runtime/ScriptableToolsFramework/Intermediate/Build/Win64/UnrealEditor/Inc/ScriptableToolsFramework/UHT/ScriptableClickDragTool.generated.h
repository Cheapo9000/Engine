// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/ScriptableClickDragTool.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableClickDragTool_generated_h
#error "ScriptableClickDragTool.generated.h already included, missing '#pragma once' in ScriptableClickDragTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableClickDragTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceRay;
struct FInputRayHit;
struct FScriptableToolModifierStates;

// ********** Begin Class UScriptableClickDragTool *************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveModifiers); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execIsCtrlDown); \
	DECLARE_FUNCTION(execIsShiftDown); \
	DECLARE_FUNCTION(execInActiveHover); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverUpdate); \
	DECLARE_FUNCTION(execOnHoverBegin); \
	DECLARE_FUNCTION(execOnHoverHitTest); \
	DECLARE_FUNCTION(execInActiveClickDrag); \
	DECLARE_FUNCTION(execOnDragSequenceCancelled); \
	DECLARE_FUNCTION(execOnDragEnd); \
	DECLARE_FUNCTION(execOnDragUpdatePosition); \
	DECLARE_FUNCTION(execOnDragBegin); \
	DECLARE_FUNCTION(execTestIfCanBeginClickDrag);


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UScriptableClickDragTool_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableClickDragTool_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableClickDragTool(); \
	friend struct ::Z_Construct_UClass_UScriptableClickDragTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableClickDragTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableClickDragTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableClickDragTool_NoRegister) \
	DECLARE_SERIALIZER(UScriptableClickDragTool)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableClickDragTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableClickDragTool(UScriptableClickDragTool&&) = delete; \
	UScriptableClickDragTool(const UScriptableClickDragTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableClickDragTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableClickDragTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableClickDragTool) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableClickDragTool();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableClickDragTool;

// ********** End Class UScriptableClickDragTool ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
