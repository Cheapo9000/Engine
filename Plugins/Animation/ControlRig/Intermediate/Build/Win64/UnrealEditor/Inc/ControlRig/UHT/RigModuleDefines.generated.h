// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigModuleDefines.h"

#ifdef CONTROLRIG_RigModuleDefines_generated_h
#error "RigModuleDefines.generated.h already included, missing '#pragma once' in RigModuleDefines.h"
#endif
#define CONTROLRIG_RigModuleDefines_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModularRigSettings ***********************************************
struct Z_Construct_UScriptStruct_FModularRigSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularRigSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModularRigSettings;
// ********** End ScriptStruct FModularRigSettings *************************************************

// ********** Begin ScriptStruct FRigModuleIdentifier **********************************************
struct Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleIdentifier_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleIdentifier;
// ********** End ScriptStruct FRigModuleIdentifier ************************************************

// ********** Begin ScriptStruct FRigModuleConnector ***********************************************
struct Z_Construct_UScriptStruct_FRigModuleConnector_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleConnector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleConnector;
// ********** End ScriptStruct FRigModuleConnector *************************************************

// ********** Begin ScriptStruct FRigModuleSettings ************************************************
struct Z_Construct_UScriptStruct_FRigModuleSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleSettings;
// ********** End ScriptStruct FRigModuleSettings **************************************************

// ********** Begin ScriptStruct FRigModuleDescription *********************************************
struct Z_Construct_UScriptStruct_FRigModuleDescription_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleDescription_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleDescription;
// ********** End ScriptStruct FRigModuleDescription ***********************************************

// ********** Begin ScriptStruct FModuleReferenceData **********************************************
struct Z_Construct_UScriptStruct_FModuleReferenceData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModuleReferenceData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FModuleReferenceData;
// ********** End ScriptStruct FModuleReferenceData ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigModuleDefines_h

// ********** Begin Enum EControlRigType ***********************************************************
#define FOREACH_ENUM_ECONTROLRIGTYPE(op) \
	op(EControlRigType::IndependentRig) \
	op(EControlRigType::RigModule) \
	op(EControlRigType::ModularRig) 

enum class EControlRigType : uint8;
template<> struct TIsUEnumClass<EControlRigType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigType>();
// ********** End Enum EControlRigType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
