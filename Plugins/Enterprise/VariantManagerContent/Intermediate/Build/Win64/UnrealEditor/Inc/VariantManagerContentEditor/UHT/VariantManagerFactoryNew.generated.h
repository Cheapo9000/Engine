// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantManagerFactoryNew.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGERCONTENTEDITOR_VariantManagerFactoryNew_generated_h
#error "VariantManagerFactoryNew.generated.h already included, missing '#pragma once' in VariantManagerFactoryNew.h"
#endif
#define VARIANTMANAGERCONTENTEDITOR_VariantManagerFactoryNew_generated_h

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUVariantManagerFactoryNew(); \
	friend struct Z_Construct_UClass_UVariantManagerFactoryNew_Statics; \
public: \
	DECLARE_CLASS(UVariantManagerFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContentEditor"), NO_API) \
	DECLARE_SERIALIZER(UVariantManagerFactoryNew)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantManagerFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantManagerFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantManagerFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantManagerFactoryNew); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVariantManagerFactoryNew(UVariantManagerFactoryNew&&); \
	UVariantManagerFactoryNew(const UVariantManagerFactoryNew&); \
public: \
	NO_API virtual ~UVariantManagerFactoryNew();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_9_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<class UVariantManagerFactoryNew>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerFactoryNew_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
