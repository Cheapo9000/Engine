// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageExpressions/DMMSETextureSample.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSETextureSample_generated_h
#error "DMMSETextureSample.generated.h already included, missing '#pragma once' in DMMSETextureSample.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSETextureSample_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMMaterialStageExpressionTextureSample **********************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanUseBaseTexture); \
	DECLARE_FUNCTION(execSetUseBaseTexture); \
	DECLARE_FUNCTION(execGetUseBaseTexture);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_ACCESSORS \
static void GetbUseBaseTexture_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseBaseTexture_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialStageExpressionTextureSample_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageExpressionTextureSample_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageExpressionTextureSample(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageExpressionTextureSample_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageExpressionTextureSample_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageExpressionTextureSample, UDMMaterialStageExpressionTextureSampleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageExpressionTextureSample_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageExpressionTextureSample)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageExpressionTextureSample(UDMMaterialStageExpressionTextureSample&&) = delete; \
	UDMMaterialStageExpressionTextureSample(const UDMMaterialStageExpressionTextureSample&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageExpressionTextureSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageExpressionTextureSample); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageExpressionTextureSample) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageExpressionTextureSample();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageExpressionTextureSample;

// ********** End Class UDMMaterialStageExpressionTextureSample ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSample_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
