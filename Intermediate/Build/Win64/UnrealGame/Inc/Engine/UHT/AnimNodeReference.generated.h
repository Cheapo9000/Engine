// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeReference.h"

#ifdef ENGINE_AnimNodeReference_generated_h
#error "AnimNodeReference.generated.h already included, missing '#pragma once' in AnimNodeReference.h"
#endif
#define ENGINE_AnimNodeReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNodeReference ************************************************
struct Z_Construct_UScriptStruct_FAnimNodeReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNodeReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNodeReference;
// ********** End ScriptStruct FAnimNodeReference **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h

// ********** Begin Enum EAnimNodeReferenceConversionResult ****************************************
#define FOREACH_ENUM_EANIMNODEREFERENCECONVERSIONRESULT(op) \
	op(EAnimNodeReferenceConversionResult::Succeeded) \
	op(EAnimNodeReferenceConversionResult::Failed) 

enum class EAnimNodeReferenceConversionResult : uint8;
template<> struct TIsUEnumClass<EAnimNodeReferenceConversionResult> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNodeReferenceConversionResult>();
// ********** End Enum EAnimNodeReferenceConversionResult ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
