// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepAsset.h"

#ifdef DATAPREPCORE_DataprepAsset_generated_h
#error "DataprepAsset.generated.h already included, missing '#pragma once' in DataprepAsset.h"
#endif
#define DATAPREPCORE_DataprepAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepAsset ***********************************************************
struct Z_Construct_UClass_UDataprepAsset_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepAsset(); \
	friend struct ::Z_Construct_UClass_UDataprepAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepAsset, UDataprepAssetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepAsset_NoRegister) \
	DECLARE_SERIALIZER(UDataprepAsset)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepAsset(UDataprepAsset&&) = delete; \
	UDataprepAsset(const UDataprepAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataprepAsset)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_29_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepAsset;

// ********** End Class UDataprepAsset *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
