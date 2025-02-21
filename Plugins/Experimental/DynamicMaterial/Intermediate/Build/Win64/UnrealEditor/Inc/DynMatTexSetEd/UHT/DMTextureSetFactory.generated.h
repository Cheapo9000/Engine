// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetFactory_generated_h
#error "DMTextureSetFactory.generated.h already included, missing '#pragma once' in DMTextureSetFactory.h"
#endif
#define DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetFactory_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSetFactory(); \
	friend struct Z_Construct_UClass_UDMTextureSetFactory_Statics; \
public: \
	DECLARE_CLASS(UDMTextureSetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialTextureSetEditor"), DYNAMICMATERIALTEXTURESETEDITOR_API) \
	DECLARE_SERIALIZER(UDMTextureSetFactory)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMTextureSetFactory(UDMTextureSetFactory&&); \
	UDMTextureSetFactory(const UDMTextureSetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALTEXTURESETEDITOR_API, UDMTextureSetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureSetFactory) \
	DYNAMICMATERIALTEXTURESETEDITOR_API virtual ~UDMTextureSetFactory();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALTEXTURESETEDITOR_API UClass* StaticClass<class UDMTextureSetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
