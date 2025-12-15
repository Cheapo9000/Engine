// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyBagDetails.h"

#ifdef STRUCTUTILSEDITOR_PropertyBagDetails_generated_h
#error "PropertyBagDetails.generated.h already included, missing '#pragma once' in PropertyBagDetails.h"
#endif
#define STRUCTUTILSEDITOR_PropertyBagDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyBagSchema *******************************************************
struct Z_Construct_UClass_UPropertyBagSchema_Statics;
STRUCTUTILSEDITOR_API UClass* Z_Construct_UClass_UPropertyBagSchema_NoRegister();

#define FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBagSchema(); \
	friend struct ::Z_Construct_UClass_UPropertyBagSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTUTILSEDITOR_API UClass* ::Z_Construct_UClass_UPropertyBagSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBagSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StructUtilsEditor"), Z_Construct_UClass_UPropertyBagSchema_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBagSchema)


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STRUCTUTILSEDITOR_API UPropertyBagSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBagSchema(UPropertyBagSchema&&) = delete; \
	UPropertyBagSchema(const UPropertyBagSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STRUCTUTILSEDITOR_API, UPropertyBagSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBagSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBagSchema) \
	STRUCTUTILSEDITOR_API virtual ~UPropertyBagSchema();


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_245_PROLOG
#define FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_248_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBagSchema;

// ********** End Class UPropertyBagSchema *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StructUtilsEditor_Public_PropertyBagDetails_h

// ********** Begin Enum EPropertyBagChildRowFeatures **********************************************
#define FOREACH_ENUM_EPROPERTYBAGCHILDROWFEATURES(op) \
	op(EPropertyBagChildRowFeatures::Fixed) \
	op(EPropertyBagChildRowFeatures::Renaming) \
	op(EPropertyBagChildRowFeatures::Deletion) \
	op(EPropertyBagChildRowFeatures::DragAndDrop) \
	op(EPropertyBagChildRowFeatures::CompactTypeSelector) \
	op(EPropertyBagChildRowFeatures::AccessSpecifierButton) \
	op(EPropertyBagChildRowFeatures::DropDownMenuButton) \
	op(EPropertyBagChildRowFeatures::Categories) \
	op(EPropertyBagChildRowFeatures::AllGeneralOptions) \
	op(EPropertyBagChildRowFeatures::Menu_TypeSelector) \
	op(EPropertyBagChildRowFeatures::Menu_Rename) \
	op(EPropertyBagChildRowFeatures::Menu_Delete) \
	op(EPropertyBagChildRowFeatures::Menu_Categories) \
	op(EPropertyBagChildRowFeatures::Menu_MetadataSpecifiers) \
	op(EPropertyBagChildRowFeatures::AllMenuOptions) \
	op(EPropertyBagChildRowFeatures::Deprecated) \
	op(EPropertyBagChildRowFeatures::ReadOnly) \
	op(EPropertyBagChildRowFeatures::Core) \
	op(EPropertyBagChildRowFeatures::Extended) \
	op(EPropertyBagChildRowFeatures::All) \
	op(EPropertyBagChildRowFeatures::Default) 

enum class EPropertyBagChildRowFeatures : uint64;
template<> struct TIsUEnumClass<EPropertyBagChildRowFeatures> { enum { Value = true }; };
template<> STRUCTUTILSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyBagChildRowFeatures>();
// ********** End Enum EPropertyBagChildRowFeatures ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
