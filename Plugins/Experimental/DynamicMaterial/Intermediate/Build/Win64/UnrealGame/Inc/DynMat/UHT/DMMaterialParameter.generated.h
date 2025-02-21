// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMaterialModel;
#ifdef DYNAMICMATERIAL_DMMaterialParameter_generated_h
#error "DMMaterialParameter.generated.h already included, missing '#pragma once' in DMMaterialParameter.h"
#endif
#define DYNAMICMATERIAL_DMMaterialParameter_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParameterName); \
	DECLARE_FUNCTION(execGetMaterialModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRenameParameter);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialParameter(); \
	friend struct Z_Construct_UClass_UDMMaterialParameter_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialParameter, UDMMaterialLinkedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialParameter)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialParameter(UDMMaterialParameter&&); \
	UDMMaterialParameter(const UDMMaterialParameter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialParameter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialParameter) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialParameter();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
