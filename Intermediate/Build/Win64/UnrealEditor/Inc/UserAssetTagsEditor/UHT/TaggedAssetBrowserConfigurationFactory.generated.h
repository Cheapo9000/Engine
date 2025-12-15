// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetFactories/TaggedAssetBrowserConfigurationFactory.h"

#ifdef USERASSETTAGSEDITOR_TaggedAssetBrowserConfigurationFactory_generated_h
#error "TaggedAssetBrowserConfigurationFactory.generated.h already included, missing '#pragma once' in TaggedAssetBrowserConfigurationFactory.h"
#endif
#define USERASSETTAGSEDITOR_TaggedAssetBrowserConfigurationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTaggedAssetBrowserConfigurationFactory **********************************
struct Z_Construct_UClass_UTaggedAssetBrowserConfigurationFactory_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UTaggedAssetBrowserConfigurationFactory_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaggedAssetBrowserConfigurationFactory(); \
	friend struct ::Z_Construct_UClass_UTaggedAssetBrowserConfigurationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UTaggedAssetBrowserConfigurationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaggedAssetBrowserConfigurationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UTaggedAssetBrowserConfigurationFactory_NoRegister) \
	DECLARE_SERIALIZER(UTaggedAssetBrowserConfigurationFactory)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaggedAssetBrowserConfigurationFactory(UTaggedAssetBrowserConfigurationFactory&&) = delete; \
	UTaggedAssetBrowserConfigurationFactory(const UTaggedAssetBrowserConfigurationFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaggedAssetBrowserConfigurationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaggedAssetBrowserConfigurationFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaggedAssetBrowserConfigurationFactory) \
	NO_API virtual ~UTaggedAssetBrowserConfigurationFactory();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_9_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaggedAssetBrowserConfigurationFactory;

// ********** End Class UTaggedAssetBrowserConfigurationFactory ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_AssetFactories_TaggedAssetBrowserConfigurationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
