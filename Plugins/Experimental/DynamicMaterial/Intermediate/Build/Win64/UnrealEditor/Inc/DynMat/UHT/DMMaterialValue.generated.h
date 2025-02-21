// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialParameter;
class UDMMaterialValue;
class UDynamicMaterialModel;
enum class EDMValueType : uint8;
#ifdef DYNAMICMATERIAL_DMMaterialValue_generated_h
#error "DMMaterialValue.generated.h already included, missing '#pragma once' in DMMaterialValue.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValue_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialParameterName); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execIsLocal); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetMaterialModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetShouldExposeParameter); \
	DECLARE_FUNCTION(execGetShouldExposeParameter); \
	DECLARE_FUNCTION(execSetParameterName); \
	DECLARE_FUNCTION(execResetDefaultValue); \
	DECLARE_FUNCTION(execApplyDefaultValue); \
	DECLARE_FUNCTION(execIsDefaultValue); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execCreateMaterialValue);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValue(); \
	friend struct Z_Construct_UClass_UDMMaterialValue_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialValue, UDMMaterialLinkedComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialValue) \
	virtual UObject* _getUObject() const override { return const_cast<UDMMaterialValue*>(this); }


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialValue(UDMMaterialValue&&); \
	UDMMaterialValue(const UDMMaterialValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValue); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValue) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValue();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
