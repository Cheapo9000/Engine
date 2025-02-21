// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValuesDynamic/DMMaterialValueFloat3RGBDynamic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef DYNAMICMATERIAL_DMMaterialValueFloat3RGBDynamic_generated_h
#error "DMMaterialValueFloat3RGBDynamic.generated.h already included, missing '#pragma once' in DMMaterialValueFloat3RGBDynamic.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueFloat3RGBDynamic_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueFloat3RGBDynamic(); \
	friend struct Z_Construct_UClass_UDMMaterialValueFloat3RGBDynamic_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialValueFloat3RGBDynamic, UDMMaterialValueDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialValueFloat3RGBDynamic)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialValueFloat3RGBDynamic(UDMMaterialValueFloat3RGBDynamic&&); \
	UDMMaterialValueFloat3RGBDynamic(const UDMMaterialValueFloat3RGBDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueFloat3RGBDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueFloat3RGBDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueFloat3RGBDynamic) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueFloat3RGBDynamic();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialValueFloat3RGBDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat3RGBDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
