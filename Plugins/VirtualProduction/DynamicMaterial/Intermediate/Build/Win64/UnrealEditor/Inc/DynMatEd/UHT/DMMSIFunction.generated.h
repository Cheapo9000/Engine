// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIFunction.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSIFunction_generated_h
#error "DMMSIFunction.generated.h already included, missing '#pragma once' in DMMSIFunction.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageFunction;
class UDMMaterialStageInputFunction;
class UMaterialFunctionInterface;

// ********** Begin Class UDMMaterialStageInputFunction ********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterialFunction); \
	DECLARE_FUNCTION(execGetMaterialFunction); \
	DECLARE_FUNCTION(execGetMaterialStageFunction); \
	DECLARE_FUNCTION(execChangeStageInput_Function); \
	DECLARE_FUNCTION(execChangeStageSource_Function); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageInputFunction_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputFunction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputFunction(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputFunction, UDMMaterialStageInputThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputFunction_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputFunction)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMMaterialStageInputFunction(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputFunction(UDMMaterialStageInputFunction&&) = delete; \
	UDMMaterialStageInputFunction(const UDMMaterialStageInputFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputFunction) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageInputFunction();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputFunction;

// ********** End Class UDMMaterialStageInputFunction **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
