// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIGradient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageGradient;
class UDMMaterialStageInputGradient;
#ifdef DYNAMICMATERIALEDITOR_DMMSIGradient_generated_h
#error "DMMSIGradient.generated.h already included, missing '#pragma once' in DMMSIGradient.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIGradient_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialStageGradient); \
	DECLARE_FUNCTION(execSetMaterialStageGradientClass); \
	DECLARE_FUNCTION(execGetMaterialStageGradientClass); \
	DECLARE_FUNCTION(execChangeStageInput_Gradient); \
	DECLARE_FUNCTION(execChangeStageSource_Gradient); \
	DECLARE_FUNCTION(execCreateStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputGradient(); \
	friend struct Z_Construct_UClass_UDMMaterialStageInputGradient_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageInputGradient, UDMMaterialStageInputThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageInputGradient)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMMaterialStageInputGradient(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputGradient(UDMMaterialStageInputGradient&&); \
	UDMMaterialStageInputGradient(const UDMMaterialStageInputGradient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputGradient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputGradient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputGradient) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageInputGradient();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageInputGradient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIGradient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
