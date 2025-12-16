// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/DynamicMaterialModelFactory.h"

#ifdef DYNAMICMATERIALEDITOR_DynamicMaterialModelFactory_generated_h
#error "DynamicMaterialModelFactory.generated.h already included, missing '#pragma once' in DynamicMaterialModelFactory.h"
#endif
#define DYNAMICMATERIALEDITOR_DynamicMaterialModelFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicMaterialModelFactory *********************************************
struct Z_Construct_UClass_UDynamicMaterialModelFactory_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDynamicMaterialModelFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelFactory(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialModelFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDynamicMaterialModelFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialModelFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDynamicMaterialModelFactory_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialModelFactory)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelFactory(UDynamicMaterialModelFactory&&) = delete; \
	UDynamicMaterialModelFactory(const UDynamicMaterialModelFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicMaterialModelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialModelFactory) \
	NO_API virtual ~UDynamicMaterialModelFactory();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialModelFactory;

// ********** End Class UDynamicMaterialModelFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Model_DynamicMaterialModelFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
