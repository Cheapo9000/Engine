// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/DynamicMaterialModelBase.h"

#ifdef DYNAMICMATERIAL_DynamicMaterialModelBase_generated_h
#error "DynamicMaterialModelBase.generated.h already included, missing '#pragma once' in DynamicMaterialModelBase.h"
#endif
#define DYNAMICMATERIAL_DynamicMaterialModelBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMaterialInstance;
class UDynamicMaterialModel;
class UMaterial;

// ********** Begin Class UDynamicMaterialModelBase ************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGeneratedMaterial); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance); \
	DECLARE_FUNCTION(execResolveMaterialModel);


struct Z_Construct_UClass_UDynamicMaterialModelBase_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDynamicMaterialModelBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialModelBase(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialModelBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDynamicMaterialModelBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialModelBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDynamicMaterialModelBase_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialModelBase)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDynamicMaterialModelBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialModelBase(UDynamicMaterialModelBase&&) = delete; \
	UDynamicMaterialModelBase(const UDynamicMaterialModelBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialModelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModelBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMaterialModelBase) \
	DYNAMICMATERIAL_API virtual ~UDynamicMaterialModelBase();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialModelBase;

// ********** End Class UDynamicMaterialModelBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModelBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
