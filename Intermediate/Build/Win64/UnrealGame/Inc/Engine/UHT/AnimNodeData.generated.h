// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeData.h"

#ifdef ENGINE_AnimNodeData_generated_h
#error "AnimNodeData.generated.h already included, missing '#pragma once' in AnimNodeData.h"
#endif
#define ENGINE_AnimNodeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNodeData *****************************************************
struct Z_Construct_UScriptStruct_FAnimNodeData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNodeData;
// ********** End ScriptStruct FAnimNodeData *******************************************************

// ********** Begin ScriptStruct FAnimNodeStructData ***********************************************
struct Z_Construct_UScriptStruct_FAnimNodeStructData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeStructData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNodeStructData;
// ********** End ScriptStruct FAnimNodeStructData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h

// ********** Begin Enum EAnimNodeDataFlags ********************************************************
#define FOREACH_ENUM_EANIMNODEDATAFLAGS(op) \
	op(EAnimNodeDataFlags::None) \
	op(EAnimNodeDataFlags::HasInitialUpdateFunction) \
	op(EAnimNodeDataFlags::HasBecomeRelevantFunction) \
	op(EAnimNodeDataFlags::HasUpdateFunction) \
	op(EAnimNodeDataFlags::AllFunctions) 

enum class EAnimNodeDataFlags : uint32;
template<> struct TIsUEnumClass<EAnimNodeDataFlags> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNodeDataFlags>();
// ********** End Enum EAnimNodeDataFlags **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
