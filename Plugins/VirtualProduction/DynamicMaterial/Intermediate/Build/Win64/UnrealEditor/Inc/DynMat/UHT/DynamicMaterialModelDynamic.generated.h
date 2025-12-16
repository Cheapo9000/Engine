// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/DynamicMaterialModelDynamic.h"

#ifdef DYNAMICMATERIAL_DynamicMaterialModelDynamic_generated_h
#error "DynamicMaterialModelDynamic.generated.h already included, missing '#pragma once' in DynamicMaterialModelDynamic.h"
#endif
#define DYNAMICMATERIAL_DynamicMaterialModelDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;
class UDMMaterialComponentDynamic;
class UDynamicMaterialModel;
class UDynamicMaterialModelDynamic;
class UObject;

// ********** Begin Class UDynamicMaterialModelDynamic *********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetComponentByPath); \
	DECLARE_FUNCTION(execGetParentModel);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetComponentDynamic); \
	DECLARE_FUNCTION(execCreate);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDynamicMaterialModelDynamic_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDynamicMaterialModelDynamic_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelDynamic(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialModelDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDynamicMaterialModelDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialModelDynamic, UDynamicMaterialModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDynamicMaterialModelDynamic_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialModelDynamic)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelDynamic(UDynamicMaterialModelDynamic&&) = delete; \
	UDynamicMaterialModelDynamic(const UDynamicMaterialModelDynamic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialModelDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialModelDynamic) \
	DYNAMICMATERIAL_API virtual ~UDynamicMaterialModelDynamic();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialModelDynamic;

// ********** End Class UDynamicMaterialModelDynamic ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
