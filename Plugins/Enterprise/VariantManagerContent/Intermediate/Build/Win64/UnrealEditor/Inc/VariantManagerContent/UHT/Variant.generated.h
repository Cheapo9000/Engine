// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant.h"

#ifdef VARIANTMANAGERCONTENT_Variant_generated_h
#error "Variant.generated.h already included, missing '#pragma once' in Variant.h"
#endif
#define VARIANTMANAGERCONTENT_Variant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevelVariantSets;
class UObject;
class UTexture2D;
class UVariant;
class UVariantSet;
struct FVariantDependency;

// ********** Begin ScriptStruct FVariantDependency ************************************************
struct Z_Construct_UScriptStruct_FVariantDependency_Statics;
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVariantDependency_Statics; \
	VARIANTMANAGERCONTENT_API static class UScriptStruct* StaticStruct();


struct FVariantDependency;
// ********** End ScriptStruct FVariantDependency **************************************************

// ********** Begin Class UVariant *****************************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetNumDependencies); \
	DECLARE_FUNCTION(execDeleteDependency); \
	DECLARE_FUNCTION(execSetDependency); \
	DECLARE_FUNCTION(execGetDependency); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execGetDependents); \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execSetThumbnailFromEditorViewport); \
	DECLARE_FUNCTION(execSetThumbnailFromCamera); \
	DECLARE_FUNCTION(execSetThumbnailFromFile); \
	DECLARE_FUNCTION(execSetThumbnailFromTexture); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSwitchOn); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execGetNumActors); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetParent);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariant, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UVariant_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUVariant(); \
	friend struct ::Z_Construct_UClass_UVariant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UVariant_NoRegister(); \
public: \
	DECLARE_CLASS2(UVariant, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UVariant_NoRegister) \
	DECLARE_SERIALIZER(UVariant) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UVariant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UVariant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVariant(UVariant&&) = delete; \
	UVariant(const UVariant&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UVariant();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_33_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVariant;

// ********** End Class UVariant *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
