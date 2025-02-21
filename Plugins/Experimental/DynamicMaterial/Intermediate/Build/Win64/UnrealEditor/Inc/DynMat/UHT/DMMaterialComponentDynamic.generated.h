// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialComponentDynamic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;
class UDynamicMaterialModelDynamic;
#ifdef DYNAMICMATERIAL_DMMaterialComponentDynamic_generated_h
#error "DMMaterialComponentDynamic.generated.h already included, missing '#pragma once' in DMMaterialComponentDynamic.h"
#endif
#define DYNAMICMATERIAL_DMMaterialComponentDynamic_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGeResolvedParentComponent); \
	DECLARE_FUNCTION(execGetParentComponentName); \
	DECLARE_FUNCTION(execGetMaterialModelDynamic);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialComponentDynamic(); \
	friend struct Z_Construct_UClass_UDMMaterialComponentDynamic_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialComponentDynamic, UDMMaterialComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialComponentDynamic)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialComponentDynamic(UDMMaterialComponentDynamic&&); \
	UDMMaterialComponentDynamic(const UDMMaterialComponentDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialComponentDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialComponentDynamic); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialComponentDynamic)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialComponentDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponentDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
