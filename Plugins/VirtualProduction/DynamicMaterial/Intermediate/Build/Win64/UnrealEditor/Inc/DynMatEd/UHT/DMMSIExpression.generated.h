// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIExpression.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSIExpression_generated_h
#error "DMMSIExpression.generated.h already included, missing '#pragma once' in DMMSIExpression.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIExpression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageExpression;
class UDMMaterialStageInputExpression;

// ********** Begin Class UDMMaterialStageInputExpression ******************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialStageExpression); \
	DECLARE_FUNCTION(execSetMaterialStageExpressionClass); \
	DECLARE_FUNCTION(execGetMaterialStageExpressionClass); \
	DECLARE_FUNCTION(execChangeStageInput_Expression); \
	DECLARE_FUNCTION(execChangeStageSource_Expression); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageInputExpression_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputExpression_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputExpression(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputExpression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputExpression_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputExpression, UDMMaterialStageInputThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputExpression_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputExpression)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMMaterialStageInputExpression(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputExpression(UDMMaterialStageInputExpression&&) = delete; \
	UDMMaterialStageInputExpression(const UDMMaterialStageInputExpression&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputExpression); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputExpression) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageInputExpression();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputExpression;

// ********** End Class UDMMaterialStageInputExpression ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIExpression_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
