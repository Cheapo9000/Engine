// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantSet.h"

#ifdef VARIANTMANAGERCONTENT_VariantSet_generated_h
#error "VariantSet.generated.h already included, missing '#pragma once' in VariantSet.h"
#endif
#define VARIANTMANAGERCONTENT_VariantSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelVariantSets;
class UObject;
class UTexture2D;
class UVariant;

// ********** Begin Class UVariantSet **************************************************************
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execSetThumbnailFromEditorViewport); \
	DECLARE_FUNCTION(execSetThumbnailFromCamera); \
	DECLARE_FUNCTION(execSetThumbnailFromFile); \
	DECLARE_FUNCTION(execSetThumbnailFromTexture); \
	DECLARE_FUNCTION(execGetVariantByName); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetNumVariants); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetParent);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantSet, VARIANTMANAGERCONTENT_API)


struct Z_Construct_UClass_UVariantSet_Statics;
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVariantSet(); \
	friend struct ::Z_Construct_UClass_UVariantSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGERCONTENT_API UClass* ::Z_Construct_UClass_UVariantSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UVariantSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), Z_Construct_UClass_UVariantSet_NoRegister) \
	DECLARE_SERIALIZER(UVariantSet) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VARIANTMANAGERCONTENT_API UVariantSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VARIANTMANAGERCONTENT_API, UVariantSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVariantSet(UVariantSet&&) = delete; \
	UVariantSet(const UVariantSet&) = delete; \
	VARIANTMANAGERCONTENT_API virtual ~UVariantSet();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_14_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVariantSet;

// ********** End Class UVariantSet ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
