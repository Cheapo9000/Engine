// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialEffectFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialValue;
class UMaterialFunctionInterface;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialEffectFunction_generated_h
#error "DMMaterialEffectFunction.generated.h already included, missing '#pragma once' in DMMaterialEffectFunction.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialEffectFunction_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetInputValues); \
	DECLARE_FUNCTION(execGetInputValue); \
	DECLARE_FUNCTION(execSetMaterialFunction); \
	DECLARE_FUNCTION(execGetMaterialFunction);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialEffectFunction(); \
	friend struct Z_Construct_UClass_UDMMaterialEffectFunction_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialEffectFunction, UDMMaterialEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialEffectFunction)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialEffectFunction(UDMMaterialEffectFunction&&); \
	UDMMaterialEffectFunction(const UDMMaterialEffectFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialEffectFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialEffectFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialEffectFunction) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialEffectFunction();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialEffectFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
