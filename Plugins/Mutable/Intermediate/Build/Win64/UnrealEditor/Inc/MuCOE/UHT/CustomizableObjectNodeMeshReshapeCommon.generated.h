// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMeshReshapeCommon.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshapeCommon_generated_h
#error "CustomizableObjectNodeMeshReshapeCommon.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMeshReshapeCommon.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshapeCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshReshapeBoneReference *****************************************
struct Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshReshapeBoneReference_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FMeshReshapeBoneReference;
// ********** End ScriptStruct FMeshReshapeBoneReference *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshapeCommon_h

// ********** Begin Enum EBoneDeformSelectionMethod ************************************************
#define FOREACH_ENUM_EBONEDEFORMSELECTIONMETHOD(op) \
	op(EBoneDeformSelectionMethod::ONLY_SELECTED) \
	op(EBoneDeformSelectionMethod::ALL_BUT_SELECTED) \
	op(EBoneDeformSelectionMethod::DEFORM_REF_SKELETON) \
	op(EBoneDeformSelectionMethod::DEFORM_NONE_REF_SKELETON) 

enum class EBoneDeformSelectionMethod : uint8;
template<> struct TIsUEnumClass<EBoneDeformSelectionMethod> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneDeformSelectionMethod>();
// ********** End Enum EBoneDeformSelectionMethod **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
