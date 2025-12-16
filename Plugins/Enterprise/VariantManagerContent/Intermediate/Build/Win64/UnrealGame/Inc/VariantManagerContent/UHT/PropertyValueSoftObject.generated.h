// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyValueSoftObject.h"

#ifdef VARIANTMANAGERCONTENT_PropertyValueSoftObject_generated_h
#error "PropertyValueSoftObject.generated.h already included, missing '#pragma once' in PropertyValueSoftObject.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValueSoftObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyValueSoftObject *************************************************
struct Z_Construct_UClass_UPropertyValueSoftObject_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueSoftObject_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueSoftObject(); \
	friend struct ::Z_Construct_UClass_UPropertyValueSoftObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueSoftObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueSoftObject, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueSoftObject_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueSoftObject)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueSoftObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueSoftObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueSoftObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueSoftObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueSoftObject(UPropertyValueSoftObject&&) = delete; \
	UPropertyValueSoftObject(const UPropertyValueSoftObject&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueSoftObject();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_19_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_22_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueSoftObject;

// ********** End Class UPropertyValueSoftObject ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
