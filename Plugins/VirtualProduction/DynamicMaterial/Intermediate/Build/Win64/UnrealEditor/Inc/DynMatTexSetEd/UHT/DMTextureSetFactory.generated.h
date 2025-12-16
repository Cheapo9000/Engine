// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMTextureSetFactory.h"

#ifdef DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetFactory_generated_h
#error "DMTextureSetFactory.generated.h already included, missing '#pragma once' in DMTextureSetFactory.h"
#endif
#define DYNAMICMATERIALTEXTURESETEDITOR_DMTextureSetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMTextureSetFactory *****************************************************
struct Z_Construct_UClass_UDMTextureSetFactory_Statics;
DYNAMICMATERIALTEXTURESETEDITOR_API UClass* Z_Construct_UClass_UDMTextureSetFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMTextureSetFactory(); \
	friend struct ::Z_Construct_UClass_UDMTextureSetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALTEXTURESETEDITOR_API UClass* ::Z_Construct_UClass_UDMTextureSetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMTextureSetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialTextureSetEditor"), Z_Construct_UClass_UDMTextureSetFactory_NoRegister) \
	DECLARE_SERIALIZER(UDMTextureSetFactory)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMTextureSetFactory(UDMTextureSetFactory&&) = delete; \
	UDMTextureSetFactory(const UDMTextureSetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALTEXTURESETEDITOR_API, UDMTextureSetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMTextureSetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMTextureSetFactory) \
	DYNAMICMATERIALTEXTURESETEDITOR_API virtual ~UDMTextureSetFactory();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMTextureSetFactory;

// ********** End Class UDMTextureSetFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialTextureSetEditor_Public_DMTextureSetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
