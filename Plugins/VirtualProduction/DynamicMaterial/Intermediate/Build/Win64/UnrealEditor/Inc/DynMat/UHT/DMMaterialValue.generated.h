// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialValue.h"

#ifdef DYNAMICMATERIAL_DMMaterialValue_generated_h
#error "DMMaterialValue.generated.h already included, missing '#pragma once' in DMMaterialValue.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialParameter;
class UDMMaterialValue;
class UDynamicMaterialModel;
enum class EDMValueType : uint8;

// ********** Begin Class UDMMaterialValue *********************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaterialParameterName); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execIsLocal); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetMaterialModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
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
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialValue_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValue_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValue(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValue, UDMMaterialLinkedComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValue_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValue) \
	virtual UObject* _getUObject() const override { return const_cast<UDMMaterialValue*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValue(UDMMaterialValue&&) = delete; \
	UDMMaterialValue(const UDMMaterialValue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValue); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValue) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValue();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_32_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValue;

// ********** End Class UDMMaterialValue ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
