// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigSpaceHierarchy.h"

#ifdef CONTROLRIG_RigSpaceHierarchy_generated_h
#error "RigSpaceHierarchy.generated.h already included, missing '#pragma once' in RigSpaceHierarchy.h"
#endif
#define CONTROLRIG_RigSpaceHierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigSpace *********************************************************
struct Z_Construct_UScriptStruct_FRigSpace_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigElement Super;


struct FRigSpace;
// ********** End ScriptStruct FRigSpace ***********************************************************

// ********** Begin ScriptStruct FRigSpaceHierarchy ************************************************
struct Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigSpaceHierarchy_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigSpaceHierarchy;
// ********** End ScriptStruct FRigSpaceHierarchy **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigSpaceHierarchy_h

// ********** Begin Enum ERigSpaceType *************************************************************
#define FOREACH_ENUM_ERIGSPACETYPE(op) \
	op(ERigSpaceType::Global) \
	op(ERigSpaceType::Bone) \
	op(ERigSpaceType::Control) \
	op(ERigSpaceType::Space) 

enum class ERigSpaceType : uint8;
template<> struct TIsUEnumClass<ERigSpaceType> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigSpaceType>();
// ********** End Enum ERigSpaceType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
