// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyValueMaterial.h"

#ifdef VARIANTMANAGERCONTENT_PropertyValueMaterial_generated_h
#error "PropertyValueMaterial.generated.h already included, missing '#pragma once' in PropertyValueMaterial.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValueMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyValueMaterial ***************************************************
struct Z_Construct_UClass_UPropertyValueMaterial_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueMaterial(); \
	friend struct ::Z_Construct_UClass_UPropertyValueMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueMaterial, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueMaterial_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueMaterial)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueMaterial); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueMaterial(UPropertyValueMaterial&&) = delete; \
	UPropertyValueMaterial(const UPropertyValueMaterial&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueMaterial();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_13_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_16_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueMaterial;

// ********** End Class UPropertyValueMaterial *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
