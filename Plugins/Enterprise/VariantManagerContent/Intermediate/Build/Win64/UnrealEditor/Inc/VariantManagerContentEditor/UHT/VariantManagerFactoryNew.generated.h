// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantManagerFactoryNew.h"

#ifdef VARIANTMANAGERCONTENTEDITOR_VariantManagerFactoryNew_generated_h
#error "VariantManagerFactoryNew.generated.h already included, missing '#pragma once' in VariantManagerFactoryNew.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_VariantManagerFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVariantManagerFactoryNew ************************************************
struct Z_Construct_UClass_UVariantManagerFactoryNew_Statics;
VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_UVariantManagerFactoryNew_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVariantManagerFactoryNew(); \
	friend struct ::Z_Construct_UClass_UVariantManagerFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENTEDITOR_API UClass* ::Z_Construct_UClass_UVariantManagerFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UVariantManagerFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), Z_Construct_UClass_UVariantManagerFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UVariantManagerFactoryNew)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantManagerFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantManagerFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantManagerFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantManagerFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVariantManagerFactoryNew(UVariantManagerFactoryNew&&) = delete; \
	UVariantManagerFactoryNew(const UVariantManagerFactoryNew&) = delete; \
	NO_API virtual ~UVariantManagerFactoryNew();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_9_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVariantManagerFactoryNew;

// ********** End Class UVariantManagerFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
