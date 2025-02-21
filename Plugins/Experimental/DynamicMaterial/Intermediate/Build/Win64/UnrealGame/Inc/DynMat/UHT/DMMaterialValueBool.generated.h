// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValues/DMMaterialValueBool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIAL_DMMaterialValueBool_generated_h
#error "DMMaterialValueBool.generated.h already included, missing '#pragma once' in DMMaterialValueBool.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueBool_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetDefaultValue); \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueBool(); \
	friend struct Z_Construct_UClass_UDMMaterialValueBool_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialValueBool, UDMMaterialValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialValueBool)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialValueBool(UDMMaterialValueBool&&); \
	UDMMaterialValueBool(const UDMMaterialValueBool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueBool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueBool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueBool) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueBool();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialValueBool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueBool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
