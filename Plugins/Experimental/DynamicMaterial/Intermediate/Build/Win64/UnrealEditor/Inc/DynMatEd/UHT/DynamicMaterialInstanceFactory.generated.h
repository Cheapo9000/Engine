// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Material/DynamicMaterialInstanceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIALEDITOR_DynamicMaterialInstanceFactory_generated_h
#error "DynamicMaterialInstanceFactory.generated.h already included, missing '#pragma once' in DynamicMaterialInstanceFactory.h"
#endif
#define DYNAMICMATERIALEDITOR_DynamicMaterialInstanceFactory_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialInstanceFactory(); \
	friend struct Z_Construct_UClass_UDynamicMaterialInstanceFactory_Statics; \
public: \
	DECLARE_CLASS(UDynamicMaterialInstanceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDynamicMaterialInstanceFactory)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMaterialInstanceFactory(UDynamicMaterialInstanceFactory&&); \
	UDynamicMaterialInstanceFactory(const UDynamicMaterialInstanceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDynamicMaterialInstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialInstanceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialInstanceFactory) \
	DYNAMICMATERIALEDITOR_API virtual ~UDynamicMaterialInstanceFactory();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDynamicMaterialInstanceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Material_DynamicMaterialInstanceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
