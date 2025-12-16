// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIValue.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSIValue_generated_h
#error "DMMSIValue.generated.h already included, missing '#pragma once' in DMMSIValue.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageInputValue;
class UDMMaterialValue;

// ********** Begin Class UDMMaterialStageInputValue ***********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execChangeStageInput_NewValue); \
	DECLARE_FUNCTION(execChangeStageInput_Value); \
	DECLARE_FUNCTION(execChangeStageInput_NewLocalValue); \
	DECLARE_FUNCTION(execChangeStageSource_NewValue); \
	DECLARE_FUNCTION(execChangeStageSource_Value); \
	DECLARE_FUNCTION(execChangeStageSource_NewLocalValue); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageInputValue_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputValue_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputValue(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputValue, UDMMaterialStageInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputValue_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputValue)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputValue(UDMMaterialStageInputValue&&) = delete; \
	UDMMaterialStageInputValue(const UDMMaterialStageInputValue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputValue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputValue)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputValue;

// ********** End Class UDMMaterialStageInputValue *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
