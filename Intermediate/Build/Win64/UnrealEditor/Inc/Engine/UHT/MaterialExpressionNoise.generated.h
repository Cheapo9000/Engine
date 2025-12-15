// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNoise.h"

#ifdef ENGINE_MaterialExpressionNoise_generated_h
#error "MaterialExpressionNoise.generated.h already included, missing '#pragma once' in MaterialExpressionNoise.h"
#endif
#define ENGINE_MaterialExpressionNoise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionNoise *************************************************
struct Z_Construct_UClass_UMaterialExpressionNoise_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNoise(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionNoise_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionNoise_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionNoise, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionNoise_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionNoise)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNoise); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionNoise(UMaterialExpressionNoise&&) = delete; \
	UMaterialExpressionNoise(const UMaterialExpressionNoise&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionNoise();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_59_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_62_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionNoise;

// ********** End Class UMaterialExpressionNoise ***************************************************

// ********** Begin Class UMaterialExpressionScalarBlueNoise ***************************************
struct Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionScalarBlueNoise(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionScalarBlueNoise, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionScalarBlueNoise_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionScalarBlueNoise)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionScalarBlueNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionScalarBlueNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionScalarBlueNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionScalarBlueNoise); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionScalarBlueNoise(UMaterialExpressionScalarBlueNoise&&) = delete; \
	UMaterialExpressionScalarBlueNoise(const UMaterialExpressionScalarBlueNoise&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionScalarBlueNoise();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_126_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_129_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionScalarBlueNoise;

// ********** End Class UMaterialExpressionScalarBlueNoise *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNoise_h

// ********** Begin Enum ENoiseFunction ************************************************************
#define FOREACH_ENUM_ENOISEFUNCTION(op) \
	op(NOISEFUNCTION_SimplexTex) \
	op(NOISEFUNCTION_GradientTex) \
	op(NOISEFUNCTION_GradientTex3D) \
	op(NOISEFUNCTION_GradientALU) \
	op(NOISEFUNCTION_ValueALU) \
	op(NOISEFUNCTION_VoronoiALU) 

enum ENoiseFunction : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENoiseFunction>();
// ********** End Enum ENoiseFunction **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
