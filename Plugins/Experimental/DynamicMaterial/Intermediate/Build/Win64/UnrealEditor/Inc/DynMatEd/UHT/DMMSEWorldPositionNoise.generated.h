// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageExpressions/DMMSEWorldPositionNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMLocationType : uint8;
#ifdef DYNAMICMATERIALEDITOR_DMMSEWorldPositionNoise_generated_h
#error "DMMSEWorldPositionNoise.generated.h already included, missing '#pragma once' in DMMSEWorldPositionNoise.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSEWorldPositionNoise_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTileSize); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execGetTiling); \
	DECLARE_FUNCTION(execSetQuality); \
	DECLARE_FUNCTION(execGetQuality); \
	DECLARE_FUNCTION(execSetNoiseFunction); \
	DECLARE_FUNCTION(execGetNoiseFunction); \
	DECLARE_FUNCTION(execSetShaderOffset); \
	DECLARE_FUNCTION(execGetShaderOffset); \
	DECLARE_FUNCTION(execSetLocationType); \
	DECLARE_FUNCTION(execGetLocationType);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_ACCESSORS \
static void SetLocationType_WrapperImpl(void* Object, const void* InValue); \
static void SetShaderOffset_WrapperImpl(void* Object, const void* InValue); \
static void SetNoiseFunction_WrapperImpl(void* Object, const void* InValue); \
static void SetQuality_WrapperImpl(void* Object, const void* InValue); \
static void SetbTiling_WrapperImpl(void* Object, const void* InValue); \
static void SetTileSize_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageExpressionWorldPositionNoise(); \
	friend struct Z_Construct_UClass_UDMMaterialStageExpressionWorldPositionNoise_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageExpressionWorldPositionNoise, UDMMaterialStageExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UDMMaterialStageExpressionWorldPositionNoise)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageExpressionWorldPositionNoise(UDMMaterialStageExpressionWorldPositionNoise&&); \
	UDMMaterialStageExpressionWorldPositionNoise(const UDMMaterialStageExpressionWorldPositionNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMMaterialStageExpressionWorldPositionNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageExpressionWorldPositionNoise); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageExpressionWorldPositionNoise) \
	NO_API virtual ~UDMMaterialStageExpressionWorldPositionNoise();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageExpressionWorldPositionNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_Components_MaterialStageExpressions_DMMSEWorldPositionNoise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
