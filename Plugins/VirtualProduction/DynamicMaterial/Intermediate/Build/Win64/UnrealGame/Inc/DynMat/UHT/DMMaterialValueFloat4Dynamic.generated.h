// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValuesDynamic/DMMaterialValueFloat4Dynamic.h"

#ifdef DYNAMICMATERIAL_DMMaterialValueFloat4Dynamic_generated_h
#error "DMMaterialValueFloat4Dynamic.generated.h already included, missing '#pragma once' in DMMaterialValueFloat4Dynamic.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueFloat4Dynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UDMMaterialValueFloat4Dynamic ********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialValueFloat4Dynamic_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValueFloat4Dynamic_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueFloat4Dynamic(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueFloat4Dynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValueFloat4Dynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueFloat4Dynamic, UDMMaterialValueDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValueFloat4Dynamic_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueFloat4Dynamic)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueFloat4Dynamic(UDMMaterialValueFloat4Dynamic&&) = delete; \
	UDMMaterialValueFloat4Dynamic(const UDMMaterialValueFloat4Dynamic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueFloat4Dynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueFloat4Dynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueFloat4Dynamic) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueFloat4Dynamic();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueFloat4Dynamic;

// ********** End Class UDMMaterialValueFloat4Dynamic **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueFloat4Dynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
