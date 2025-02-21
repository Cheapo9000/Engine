// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValues/DMMaterialValueColorAtlas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveLinearColor;
class UCurveLinearColorAtlas;
#ifdef DYNAMICMATERIAL_DMMaterialValueColorAtlas_generated_h
#error "DMMaterialValueColorAtlas.generated.h already included, missing '#pragma once' in DMMaterialValueColorAtlas.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueColorAtlas_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetCurve); \
	DECLARE_FUNCTION(execGetCurve); \
	DECLARE_FUNCTION(execSetAtlas); \
	DECLARE_FUNCTION(execGetAtlas); \
	DECLARE_FUNCTION(execSetDefaultValue); \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueColorAtlas(); \
	friend struct Z_Construct_UClass_UDMMaterialValueColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialValueColorAtlas, UDMMaterialValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialValueColorAtlas)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialValueColorAtlas(UDMMaterialValueColorAtlas&&); \
	UDMMaterialValueColorAtlas(const UDMMaterialValueColorAtlas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueColorAtlas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueColorAtlas); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueColorAtlas) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueColorAtlas();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialValueColorAtlas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueColorAtlas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
