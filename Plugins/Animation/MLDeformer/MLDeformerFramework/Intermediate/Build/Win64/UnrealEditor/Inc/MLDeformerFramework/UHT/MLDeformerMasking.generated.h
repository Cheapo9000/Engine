// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerMasking.h"

#ifdef MLDEFORMERFRAMEWORK_MLDeformerMasking_generated_h
#error "MLDeformerMasking.generated.h already included, missing '#pragma once' in MLDeformerMasking.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerMasking_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMLDeformerMaskInfo ***********************************************
struct Z_Construct_UScriptStruct_FMLDeformerMaskInfo_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMasking_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMLDeformerMaskInfo_Statics; \
	MLDEFORMERFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMLDeformerMaskInfo;
// ********** End ScriptStruct FMLDeformerMaskInfo *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMasking_h

// ********** Begin Enum EMLDeformerMaskingMode ****************************************************
#define FOREACH_ENUM_EMLDEFORMERMASKINGMODE(op) \
	op(EMLDeformerMaskingMode::Generated) \
	op(EMLDeformerMaskingMode::VertexAttribute) 

enum class EMLDeformerMaskingMode : uint8;
template<> struct TIsUEnumClass<EMLDeformerMaskingMode> { enum { Value = true }; };
template<> MLDEFORMERFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EMLDeformerMaskingMode>();
// ********** End Enum EMLDeformerMaskingMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
