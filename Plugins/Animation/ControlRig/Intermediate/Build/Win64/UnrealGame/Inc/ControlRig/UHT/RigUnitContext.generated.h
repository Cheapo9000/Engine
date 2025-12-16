// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/RigUnitContext.h"

#ifdef CONTROLRIG_RigUnitContext_generated_h
#error "RigUnitContext.generated.h already included, missing '#pragma once' in RigUnitContext.h"
#endif
#define CONTROLRIG_RigUnitContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigHierarchySettings *********************************************
struct Z_Construct_UScriptStruct_FRigHierarchySettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigHierarchySettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigHierarchySettings;
// ********** End ScriptStruct FRigHierarchySettings ***********************************************

// ********** Begin ScriptStruct FControlRigExecuteContext *****************************************
struct Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMExecuteContext Super;


struct FControlRigExecuteContext;
// ********** End ScriptStruct FControlRigExecuteContext *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h

// ********** Begin Enum EControlRigInteractionType ************************************************
#define FOREACH_ENUM_ECONTROLRIGINTERACTIONTYPE(op) \
	op(EControlRigInteractionType::None) \
	op(EControlRigInteractionType::Translate) \
	op(EControlRigInteractionType::Rotate) \
	op(EControlRigInteractionType::Scale) \
	op(EControlRigInteractionType::All) 

enum class EControlRigInteractionType : uint8;
template<> struct TIsUEnumClass<EControlRigInteractionType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigInteractionType>();
// ********** End Enum EControlRigInteractionType **************************************************

// ********** Begin Enum ERigMetaDataNameSpace *****************************************************
#define FOREACH_ENUM_ERIGMETADATANAMESPACE(op) \
	op(ERigMetaDataNameSpace::None) \
	op(ERigMetaDataNameSpace::Self) \
	op(ERigMetaDataNameSpace::Parent) \
	op(ERigMetaDataNameSpace::Root) \
	op(ERigMetaDataNameSpace::Last) 

enum class ERigMetaDataNameSpace : uint8;
template<> struct TIsUEnumClass<ERigMetaDataNameSpace> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigMetaDataNameSpace>();
// ********** End Enum ERigMetaDataNameSpace *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
