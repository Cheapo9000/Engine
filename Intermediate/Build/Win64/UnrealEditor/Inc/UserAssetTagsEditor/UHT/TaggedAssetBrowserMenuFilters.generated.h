// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaggedAssetBrowserMenuFilters.h"

#ifdef USERASSETTAGSEDITOR_TaggedAssetBrowserMenuFilters_generated_h
#error "TaggedAssetBrowserMenuFilters.generated.h already included, missing '#pragma once' in TaggedAssetBrowserMenuFilters.h"
#endif
#define USERASSETTAGSEDITOR_TaggedAssetBrowserMenuFilters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTaggedAssetBrowserFilterBase ********************************************
struct Z_Construct_UClass_UTaggedAssetBrowserFilterBase_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UTaggedAssetBrowserFilterBase_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaggedAssetBrowserFilterBase(); \
	friend struct ::Z_Construct_UClass_UTaggedAssetBrowserFilterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UTaggedAssetBrowserFilterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTaggedAssetBrowserFilterBase, UHierarchyItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UTaggedAssetBrowserFilterBase_NoRegister) \
	DECLARE_SERIALIZER(UTaggedAssetBrowserFilterBase)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTaggedAssetBrowserFilterBase(UTaggedAssetBrowserFilterBase&&) = delete; \
	UTaggedAssetBrowserFilterBase(const UTaggedAssetBrowserFilterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaggedAssetBrowserFilterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaggedAssetBrowserFilterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTaggedAssetBrowserFilterBase) \
	NO_API virtual ~UTaggedAssetBrowserFilterBase();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_27_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTaggedAssetBrowserFilterBase;

// ********** End Class UTaggedAssetBrowserFilterBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_TaggedAssetBrowserMenuFilters_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
