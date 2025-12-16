// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValues/DMMaterialValueFloat.h"

#ifdef DYNAMICMATERIAL_DMMaterialValueFloat_generated_h
#error "DMMaterialValueFloat.generated.h already included, missing '#pragma once' in DMMaterialValueFloat.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloatInterval;

// ********** Begin Class UDMMaterialValueFloat ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValueRange); \
	DECLARE_FUNCTION(execHasValueRange); \
	DECLARE_FUNCTION(execGetValueRange);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_ACCESSORS \
static void GetValueRange_WrapperImpl(const void* Object, void* OutValue); \
static void SetValueRange_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialValueFloat_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValueFloat_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueFloat(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValueFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueFloat, UDMMaterialValue, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValueFloat_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueFloat)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueFloat(UDMMaterialValueFloat&&) = delete; \
	UDMMaterialValueFloat(const UDMMaterialValueFloat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueFloat); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueFloat) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialValueFloat();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueFloat;

// ********** End Class UDMMaterialValueFloat ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
