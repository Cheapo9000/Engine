// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIExpression.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageExpression;
class UDMMaterialStageInputExpression;
#ifdef DYNAMICMATERIALEDITOR_DMMSIExpression_generated_h
#error "DMMSIExpression.generated.h already included, missing '#pragma once' in DMMSIExpression.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIExpression_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialStageExpression); \
	DECLARE_FUNCTION(execSetMaterialStageExpressionClass); \
	DECLARE_FUNCTION(execGetMaterialStageExpressionClass); \
	DECLARE_FUNCTION(execChangeStageInput_Expression); \
	DECLARE_FUNCTION(execChangeStageSource_Expression); \
	DECLARE_FUNCTION(execCreateStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputExpression(); \
	friend struct Z_Construct_UClass_UDMMaterialStageInputExpression_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageInputExpression, UDMMaterialStageInputThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageInputExpression)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMMaterialStageInputExpression(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputExpression(UDMMaterialStageInputExpression&&); \
	UDMMaterialStageInputExpression(const UDMMaterialStageInputExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputExpression); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputExpression) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageInputExpression();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageInputExpression>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
