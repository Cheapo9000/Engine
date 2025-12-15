// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TreeView.h"

#ifdef UMG_TreeView_generated_h
#error "TreeView.generated.h already included, missing '#pragma once' in TreeView.h"
#endif
#define UMG_TreeView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Delegate FOnGetItemChildrenDynamic *********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_9_DELEGATE \
UMG_API void FOnGetItemChildrenDynamic_DelegateWrapper(const FScriptDelegate& OnGetItemChildrenDynamic, UObject* Item, TArray<UObject*>& Children);


// ********** End Delegate FOnGetItemChildrenDynamic ***********************************************

// ********** Begin Delegate FOnItemExpansionChangedDynamic ****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_10_DELEGATE \
UMG_API void FOnItemExpansionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemExpansionChangedDynamic, UObject* Item, bool bIsExpanded);


// ********** End Delegate FOnItemExpansionChangedDynamic ******************************************

// ********** Begin Class UTreeView ****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCollapseAll); \
	DECLARE_FUNCTION(execExpandAll); \
	DECLARE_FUNCTION(execSetItemExpansion);


struct Z_Construct_UClass_UTreeView_Statics;
UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct ::Z_Construct_UClass_UTreeView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UTreeView_NoRegister(); \
public: \
	DECLARE_CLASS2(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UTreeView_NoRegister) \
	DECLARE_SERIALIZER(UTreeView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTreeView(UTreeView&&) = delete; \
	UTreeView(const UTreeView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTreeView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView) \
	UMG_API virtual ~UTreeView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_19_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTreeView;

// ********** End Class UTreeView ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_TreeView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
