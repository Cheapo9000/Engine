// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyValue.h"

#ifdef VARIANTMANAGERCONTENT_PropertyValue_generated_h
#error "PropertyValue.generated.h already included, missing '#pragma once' in PropertyValue.h"
#endif
#define VARIANTMANAGERCONTENT_PropertyValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCapturedPropSegment **********************************************
struct Z_Construct_UScriptStruct_FCapturedPropSegment_Statics;
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCapturedPropSegment_Statics; \
	VARIANTMANAGERCONTENT_API static class UScriptStruct* StaticStruct();


struct FCapturedPropSegment;
// ********** End ScriptStruct FCapturedPropSegment ************************************************

// ********** Begin Class UPropertyValue ***********************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHasRecordedData); \
	DECLARE_FUNCTION(execGetFullDisplayString); \
	DECLARE_FUNCTION(execGetPropertyTooltip);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValue, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UPropertyValue_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValue(); \
	friend struct ::Z_Construct_UClass_UPropertyValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValue_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValue) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValue(UPropertyValue&&) = delete; \
	UPropertyValue(const UPropertyValue&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValue();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_56_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValue;

// ********** End Class UPropertyValue *************************************************************

// ********** Begin Class UPropertyValueTransform **************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueTransform, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UPropertyValueTransform_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueTransform_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueTransform(); \
	friend struct ::Z_Construct_UClass_UPropertyValueTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueTransform, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueTransform_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueTransform) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueTransform); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueTransform(UPropertyValueTransform&&) = delete; \
	UPropertyValueTransform(const UPropertyValueTransform&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueTransform();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_238_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_241_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueTransform;

// ********** End Class UPropertyValueTransform ****************************************************

// ********** Begin Class UPropertyValueVisibility *************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPropertyValueVisibility, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UPropertyValueVisibility_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueVisibility_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyValueVisibility(); \
	friend struct ::Z_Construct_UClass_UPropertyValueVisibility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UPropertyValueVisibility_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyValueVisibility, UPropertyValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UPropertyValueVisibility_NoRegister) \
	DECLARE_SERIALIZER(UPropertyValueVisibility) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UPropertyValueVisibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyValueVisibility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UPropertyValueVisibility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyValueVisibility); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyValueVisibility(UPropertyValueVisibility&&) = delete; \
	UPropertyValueVisibility(const UPropertyValueVisibility&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UPropertyValueVisibility();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_249_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h_252_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyValueVisibility;

// ********** End Class UPropertyValueVisibility ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h

// ********** Begin Enum EPropertyValueCategory ****************************************************
#define FOREACH_ENUM_EPROPERTYVALUECATEGORY(op) \
	op(EPropertyValueCategory::Undefined) \
	op(EPropertyValueCategory::Generic) \
	op(EPropertyValueCategory::RelativeLocation) \
	op(EPropertyValueCategory::RelativeRotation) \
	op(EPropertyValueCategory::RelativeScale3D) \
	op(EPropertyValueCategory::Visibility) \
	op(EPropertyValueCategory::Material) \
	op(EPropertyValueCategory::Color) \
	op(EPropertyValueCategory::Option) 

enum class EPropertyValueCategory : uint8;
template<> struct TIsUEnumClass<EPropertyValueCategory> { enum { Value = true }; };
template<> VARIANTMANAGERCONTENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyValueCategory>();
// ********** End Enum EPropertyValueCategory ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
