// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyValueOption.h"

#ifdef VARIANTMANAGERCONTENT_PropertyValueOption_generated_h
#error "PropertyValueOption.generated.h already included, missing '#pragma once' in PropertyValueOption.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValueOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyValueOption *****************************************************
struct Z_Construct_UClass_UPropertyValueOption_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueOption_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueOption(); \
	friend struct ::Z_Construct_UClass_UPropertyValueOption_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueOption_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueOption, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueOption_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueOption)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueOption); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueOption(UPropertyValueOption&&) = delete; \
	UPropertyValueOption(const UPropertyValueOption&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueOption();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_15_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueOption;

// ********** End Class UPropertyValueOption *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
