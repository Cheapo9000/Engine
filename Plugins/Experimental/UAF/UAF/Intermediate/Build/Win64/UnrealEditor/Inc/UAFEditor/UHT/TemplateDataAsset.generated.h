// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wizard/TemplateDataAsset.h"

#ifdef UAFEDITOR_TemplateDataAsset_generated_h
#error "TemplateDataAsset.generated.h already included, missing '#pragma once' in TemplateDataAsset.h"
#endif
#define UAFEDITOR_TemplateDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUAFTemplateDataAsset ****************************************************
struct Z_Construct_UClass_UUAFTemplateDataAsset_Statics;
UAFEDITOR_API UClass* Z_Construct_UClass_UUAFTemplateDataAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUAFTemplateDataAsset(); \
	friend struct ::Z_Construct_UClass_UUAFTemplateDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFEDITOR_API UClass* ::Z_Construct_UClass_UUAFTemplateDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UUAFTemplateDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFEditor"), Z_Construct_UClass_UUAFTemplateDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UUAFTemplateDataAsset)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUAFTemplateDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUAFTemplateDataAsset(UUAFTemplateDataAsset&&) = delete; \
	UUAFTemplateDataAsset(const UUAFTemplateDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUAFTemplateDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUAFTemplateDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUAFTemplateDataAsset) \
	NO_API virtual ~UUAFTemplateDataAsset();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUAFTemplateDataAsset;

// ********** End Class UUAFTemplateDataAsset ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
