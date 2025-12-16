// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRigModel.h"

#ifdef CONTROLRIG_ModularRigModel_generated_h
#error "ModularRigModel.generated.h already included, missing '#pragma once' in ModularRigModel.h"
#endif
#define CONTROLRIG_ModularRigModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigModuleReference ***********************************************
struct Z_Construct_UScriptStruct_FRigModuleReference_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleReference_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleReference;
// ********** End ScriptStruct FRigModuleReference *************************************************

// ********** Begin ScriptStruct FModularRigSingleConnection ***************************************
struct Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigSingleConnection;
// ********** End ScriptStruct FModularRigSingleConnection *****************************************

// ********** Begin ScriptStruct FModularRigConnections ********************************************
struct Z_Construct_UScriptStruct_FModularRigConnections_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigConnections_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigConnections;
// ********** End ScriptStruct FModularRigConnections **********************************************

// ********** Begin ScriptStruct FModularRigModel **************************************************
struct Z_Construct_UScriptStruct_FModularRigModel_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_337_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigModel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigModel;
// ********** End ScriptStruct FModularRigModel ****************************************************

// ********** Begin ScriptStruct FModularRigModuleSettingsForClipboard *****************************
struct Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigModuleSettingsForClipboard_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigModuleSettingsForClipboard;
// ********** End ScriptStruct FModularRigModuleSettingsForClipboard *******************************

// ********** Begin ScriptStruct FModularRigModuleSettingsSetForClipboard **************************
struct Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_448_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigModuleSettingsSetForClipboard_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigModuleSettingsSetForClipboard;
// ********** End ScriptStruct FModularRigModuleSettingsSetForClipboard ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h

// ********** Begin Enum EModularRigNotification ***************************************************
#define FOREACH_ENUM_EMODULARRIGNOTIFICATION(op) \
	op(EModularRigNotification::ModuleAdded) \
	op(EModularRigNotification::ModuleRenamed) \
	op(EModularRigNotification::ModuleRemoved) \
	op(EModularRigNotification::ModuleReparented) \
	op(EModularRigNotification::ModuleReordered) \
	op(EModularRigNotification::ConnectionChanged) \
	op(EModularRigNotification::ModuleConfigValueChanged) \
	op(EModularRigNotification::ModuleShortNameChanged) \
	op(EModularRigNotification::InteractionBracketOpened) \
	op(EModularRigNotification::InteractionBracketClosed) \
	op(EModularRigNotification::InteractionBracketCanceled) \
	op(EModularRigNotification::ModuleClassChanged) \
	op(EModularRigNotification::ModuleSelected) \
	op(EModularRigNotification::ModuleDeselected) \
	op(EModularRigNotification::Max) 

enum class EModularRigNotification : uint8;
template<> struct TIsUEnumClass<EModularRigNotification> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularRigNotification>();
// ********** End Enum EModularRigNotification *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
