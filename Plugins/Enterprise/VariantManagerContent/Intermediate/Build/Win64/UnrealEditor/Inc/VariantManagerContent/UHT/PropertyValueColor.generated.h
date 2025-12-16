// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyValueColor.h"

#ifdef VARIANTMANAGERCONTENT_PropertyValueColor_generated_h
#error "PropertyValueColor.generated.h already included, missing '#pragma once' in PropertyValueColor.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValueColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyValueColor ******************************************************
struct Z_Construct_UClass_UPropertyValueColor_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueColor_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueColor(); \
	friend struct ::Z_Construct_UClass_UPropertyValueColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueColor, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueColor_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueColor)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueColor(UPropertyValueColor&&) = delete; \
	UPropertyValueColor(const UPropertyValueColor&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueColor();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_13_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_16_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueColor;

// ********** End Class UPropertyValueColor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
