// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NaniteAssemblyData.h"

#ifdef ENGINE_NaniteAssemblyData_generated_h
#error "NaniteAssemblyData.generated.h already included, missing '#pragma once' in NaniteAssemblyData.h"
#endif
#define ENGINE_NaniteAssemblyData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNaniteAssemblyBoneInfluence **************************************
struct Z_Construct_UScriptStruct_FNaniteAssemblyBoneInfluence_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NaniteAssemblyData_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteAssemblyBoneInfluence_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNaniteAssemblyBoneInfluence;
// ********** End ScriptStruct FNaniteAssemblyBoneInfluence ****************************************

// ********** Begin ScriptStruct FNaniteAssemblyNode ***********************************************
struct Z_Construct_UScriptStruct_FNaniteAssemblyNode_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NaniteAssemblyData_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteAssemblyNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNaniteAssemblyNode;
// ********** End ScriptStruct FNaniteAssemblyNode *************************************************

// ********** Begin ScriptStruct FNaniteAssemblyPart ***********************************************
struct Z_Construct_UScriptStruct_FNaniteAssemblyPart_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NaniteAssemblyData_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteAssemblyPart_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNaniteAssemblyPart;
// ********** End ScriptStruct FNaniteAssemblyPart *************************************************

// ********** Begin ScriptStruct FNaniteAssemblyData ***********************************************
struct Z_Construct_UScriptStruct_FNaniteAssemblyData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NaniteAssemblyData_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteAssemblyData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNaniteAssemblyData;
// ********** End ScriptStruct FNaniteAssemblyData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NaniteAssemblyData_h

// ********** Begin Enum ENaniteAssemblyNodeTransformSpace *****************************************
#define FOREACH_ENUM_ENANITEASSEMBLYNODETRANSFORMSPACE(op) \
	op(ENaniteAssemblyNodeTransformSpace::Local) \
	op(ENaniteAssemblyNodeTransformSpace::BoneRelative) 

enum class ENaniteAssemblyNodeTransformSpace : uint8;
template<> struct TIsUEnumClass<ENaniteAssemblyNodeTransformSpace> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENaniteAssemblyNodeTransformSpace>();
// ********** End Enum ENaniteAssemblyNodeTransformSpace *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
