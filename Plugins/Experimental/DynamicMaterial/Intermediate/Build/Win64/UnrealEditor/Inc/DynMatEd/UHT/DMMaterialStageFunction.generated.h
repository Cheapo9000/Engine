// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialStage;
class UDMMaterialStageFunction;
class UDMMaterialValue;
class UMaterialFunctionInterface;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageFunction_generated_h
#error "DMMaterialStageFunction.generated.h already included, missing '#pragma once' in DMMaterialStageFunction.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageFunction_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputValues); \
	DECLARE_FUNCTION(execGetInputValue); \
	DECLARE_FUNCTION(execSetMaterialFunction); \
	DECLARE_FUNCTION(execGetMaterialFunction); \
	DECLARE_FUNCTION(execChangeStageSource_Function);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_ACCESSORS \
static void GetMaterialFunction_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaterialFunction_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageFunction(); \
	friend struct Z_Construct_UClass_UDMMaterialStageFunction_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageFunction, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageFunction)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageFunction(UDMMaterialStageFunction&&); \
	UDMMaterialStageFunction(const UDMMaterialStageFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageFunction) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageFunction();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
