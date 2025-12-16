// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantObjectBinding.h"

#ifdef VARIANTMANAGERCONTENT_VariantObjectBinding_generated_h
#error "VariantObjectBinding.generated.h already included, missing '#pragma once' in VariantObjectBinding.h"
#endif
#define VARIANTMANAGERCONTENT_VariantObjectBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVariantObjectBinding ****************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantObjectBinding, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UVariantObjectBinding_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVariantObjectBinding(); \
	friend struct ::Z_Construct_UClass_UVariantObjectBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UVariantObjectBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UVariantObjectBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UVariantObjectBinding_NoRegister) \
	DECLARE_SERIALIZER(UVariantObjectBinding) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UVariantObjectBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantObjectBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UVariantObjectBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantObjectBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVariantObjectBinding(UVariantObjectBinding&&) = delete; \
	UVariantObjectBinding(const UVariantObjectBinding&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UVariantObjectBinding();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_14_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVariantObjectBinding;

// ********** End Class UVariantObjectBinding ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
