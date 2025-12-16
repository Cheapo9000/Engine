// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValuesDynamic/DMMaterialValueTextureDynamic.h"

#ifdef DYNAMICMATERIAL_DMMaterialValueTextureDynamic_generated_h
#error "DMMaterialValueTextureDynamic.generated.h already included, missing '#pragma once' in DMMaterialValueTextureDynamic.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueTextureDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;

// ********** Begin Class UDMMaterialValueTextureDynamic *******************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialValueTextureDynamic_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValueTextureDynamic_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueTextureDynamic(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueTextureDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValueTextureDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueTextureDynamic, UDMMaterialValueDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValueTextureDynamic_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueTextureDynamic)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueTextureDynamic(UDMMaterialValueTextureDynamic&&) = delete; \
	UDMMaterialValueTextureDynamic(const UDMMaterialValueTextureDynamic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueTextureDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueTextureDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueTextureDynamic) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueTextureDynamic();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueTextureDynamic;

// ********** End Class UDMMaterialValueTextureDynamic *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValuesDynamic_DMMaterialValueTextureDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
