// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuralMorphTypes.h"

#ifdef NEURALMORPHMODEL_NeuralMorphTypes_generated_h
#error "NeuralMorphTypes.generated.h already included, missing '#pragma once' in NeuralMorphTypes.h"
#endif
#define NEURALMORPHMODEL_NeuralMorphTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNeuralMorphBoneGroup *********************************************
struct Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics; \
	NEURALMORPHMODEL_API static class UScriptStruct* StaticStruct();


struct FNeuralMorphBoneGroup;
// ********** End ScriptStruct FNeuralMorphBoneGroup ***********************************************

// ********** Begin ScriptStruct FNeuralMorphCurveGroup ********************************************
struct Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics; \
	NEURALMORPHMODEL_API static class UScriptStruct* StaticStruct();


struct FNeuralMorphCurveGroup;
// ********** End ScriptStruct FNeuralMorphCurveGroup **********************************************

// ********** Begin ScriptStruct FNeuralMorphMaskInfo **********************************************
struct Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FNeuralMorphMaskInfo;
// ********** End ScriptStruct FNeuralMorphMaskInfo ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h

// ********** Begin Enum ENeuralMorphMode **********************************************************
#define FOREACH_ENUM_ENEURALMORPHMODE(op) \
	op(ENeuralMorphMode::Local) \
	op(ENeuralMorphMode::Global) 

enum class ENeuralMorphMode : uint8;
template<> struct TIsUEnumClass<ENeuralMorphMode> { enum { Value = true }; };
template<> NEURALMORPHMODEL_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralMorphMode>();
// ********** End Enum ENeuralMorphMode ************************************************************

// ********** Begin Enum ENeuralMorphMaskVizMode ***************************************************
#define FOREACH_ENUM_ENEURALMORPHMASKVIZMODE(op) \
	op(ENeuralMorphMaskVizMode::Off) \
	op(ENeuralMorphMaskVizMode::WhenInFocus) \
	op(ENeuralMorphMaskVizMode::Always) 

enum class ENeuralMorphMaskVizMode : uint8;
template<> struct TIsUEnumClass<ENeuralMorphMaskVizMode> { enum { Value = true }; };
template<> NEURALMORPHMODEL_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralMorphMaskVizMode>();
// ********** End Enum ENeuralMorphMaskVizMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
