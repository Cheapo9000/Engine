// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionVectorNoise.h"

#ifdef ENGINE_MaterialExpressionVectorNoise_generated_h
#error "MaterialExpressionVectorNoise.generated.h already included, missing '#pragma once' in MaterialExpressionVectorNoise.h"
#endif
#define ENGINE_MaterialExpressionVectorNoise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionVectorNoise *******************************************
struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVectorNoise(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionVectorNoise, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionVectorNoise)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVectorNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVectorNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVectorNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVectorNoise); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionVectorNoise(UMaterialExpressionVectorNoise&&) = delete; \
	UMaterialExpressionVectorNoise(const UMaterialExpressionVectorNoise&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionVectorNoise();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_51_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_54_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionVectorNoise;

// ********** End Class UMaterialExpressionVectorNoise *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionVectorNoise_h

// ********** Begin Enum EVectorNoiseFunction ******************************************************
#define FOREACH_ENUM_EVECTORNOISEFUNCTION(op) \
	op(VNF_CellnoiseALU) \
	op(VNF_VectorALU) \
	op(VNF_GradientALU) \
	op(VNF_CurlALU) \
	op(VNF_VoronoiALU) 

enum EVectorNoiseFunction : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVectorNoiseFunction>();
// ********** End Enum EVectorNoiseFunction ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
