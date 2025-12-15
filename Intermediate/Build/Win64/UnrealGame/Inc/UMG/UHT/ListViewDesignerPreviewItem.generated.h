// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/ListViewDesignerPreviewItem.h"

#ifdef UMG_ListViewDesignerPreviewItem_generated_h
#error "ListViewDesignerPreviewItem.generated.h already included, missing '#pragma once' in ListViewDesignerPreviewItem.h"
#endif
#define UMG_ListViewDesignerPreviewItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UListViewDesignerPreviewItem *********************************************
struct Z_Construct_UClass_UListViewDesignerPreviewItem_Statics;
UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListViewDesignerPreviewItem(); \
	friend struct ::Z_Construct_UClass_UListViewDesignerPreviewItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UListViewDesignerPreviewItem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister) \
	DECLARE_SERIALIZER(UListViewDesignerPreviewItem) \
	DECLARE_WITHIN(UListView)


#define FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListViewDesignerPreviewItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UListViewDesignerPreviewItem(UListViewDesignerPreviewItem&&) = delete; \
	UListViewDesignerPreviewItem(const UListViewDesignerPreviewItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListViewDesignerPreviewItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewDesignerPreviewItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewDesignerPreviewItem) \
	NO_API virtual ~UListViewDesignerPreviewItem();


#define FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_10_PROLOG
#define FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UListViewDesignerPreviewItem;

// ********** End Class UListViewDesignerPreviewItem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
