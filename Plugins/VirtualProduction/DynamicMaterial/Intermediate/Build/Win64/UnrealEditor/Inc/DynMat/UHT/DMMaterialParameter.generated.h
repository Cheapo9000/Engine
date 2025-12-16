// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialParameter.h"

#ifdef DYNAMICMATERIAL_DMMaterialParameter_generated_h
#error "DMMaterialParameter.generated.h already included, missing '#pragma once' in DMMaterialParameter.h"
#endif
#define DYNAMICMATERIAL_DMMaterialParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMaterialModel;

// ********** Begin Class UDMMaterialParameter *****************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParameterName); \
	DECLARE_FUNCTION(execGetMaterialModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRenameParameter);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialParameter_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialParameter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialParameter(); \
	friend struct ::Z_Construct_UClass_UDMMaterialParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialParameter, UDMMaterialLinkedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialParameter_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialParameter)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialParameter(UDMMaterialParameter&&) = delete; \
	UDMMaterialParameter(const UDMMaterialParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialParameter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialParameter) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialParameter();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialParameter;

// ********** End Class UDMMaterialParameter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
