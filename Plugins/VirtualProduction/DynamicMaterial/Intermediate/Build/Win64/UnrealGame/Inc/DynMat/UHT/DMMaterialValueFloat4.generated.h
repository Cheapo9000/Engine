// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValues/DMMaterialValueFloat4.h"

#ifdef DYNAMICMATERIAL_DMMaterialValueFloat4_generated_h
#error "DMMaterialValueFloat4.generated.h already included, missing '#pragma once' in DMMaterialValueFloat4.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueFloat4_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UDMMaterialValueFloat4 ***************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetDefaultValue); \
	DECLARE_FUNCTION(execGetDefaultValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialValueFloat4_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValueFloat4_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueFloat4(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueFloat4_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValueFloat4_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueFloat4, UDMMaterialValueFloat, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValueFloat4_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueFloat4)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueFloat4(UDMMaterialValueFloat4&&) = delete; \
	UDMMaterialValueFloat4(const UDMMaterialValueFloat4&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueFloat4); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueFloat4); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueFloat4) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueFloat4();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueFloat4;

// ********** End Class UDMMaterialValueFloat4 *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat4_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
