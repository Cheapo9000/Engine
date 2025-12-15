// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ListView.h"

#ifdef UMG_ListView_generated_h
#error "ListView.generated.h already included, missing '#pragma once' in ListView.h"
#endif
#define UMG_ListView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDragDropOperation;
class UObject;
class UUserWidget;
enum class EScrollIntoViewAlignment : uint8;
enum class EUMGItemDropZone : uint8;
struct FGeometry;
struct FMargin;

// ********** Begin Delegate FSimpleListItemEventDynamic *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_13_DELEGATE \
UMG_API void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item);


// ********** End Delegate FSimpleListItemEventDynamic *********************************************

// ********** Begin Delegate FOnListEntryInitializedDynamic ****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_14_DELEGATE \
UMG_API void FOnListEntryInitializedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryInitializedDynamic, UObject* Item, UUserWidget* Widget);


// ********** End Delegate FOnListEntryInitializedDynamic ******************************************

// ********** Begin Delegate FOnListItemSelectionChangedDynamic ************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_15_DELEGATE \
UMG_API void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected);


// ********** End Delegate FOnListItemSelectionChangedDynamic **************************************

// ********** Begin Delegate FOnItemIsHoveredChangedDynamic ****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_16_DELEGATE \
UMG_API void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered);


// ********** End Delegate FOnItemIsHoveredChangedDynamic ******************************************

// ********** Begin Delegate FOnListItemScrolledIntoViewDynamic ************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_17_DELEGATE \
UMG_API void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget);


// ********** End Delegate FOnListItemScrolledIntoViewDynamic **************************************

// ********** Begin Delegate FOnListViewScrolledDynamic ********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_18_DELEGATE \
UMG_API void FOnListViewScrolledDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewScrolledDynamic, float ItemOffset, float DistanceRemaining);


// ********** End Delegate FOnListViewScrolledDynamic **********************************************

// ********** Begin Delegate FOnListViewFinishedScrollingDynamic ***********************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_19_DELEGATE \
UMG_API void FOnListViewFinishedScrollingDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewFinishedScrollingDynamic);


// ********** End Delegate FOnListViewFinishedScrollingDynamic *************************************

// ********** Begin Delegate FOnIsItemSelectableOrNavigableDynamic *********************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_20_DELEGATE \
UMG_API bool FOnIsItemSelectableOrNavigableDynamic_DelegateWrapper(const FScriptDelegate& OnIsItemSelectableOrNavigableDynamic, UObject* Item);


// ********** End Delegate FOnIsItemSelectableOrNavigableDynamic ***********************************

// ********** Begin Delegate FOnItemDragDropMulticastDynamic ***************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_22_DELEGATE \
UMG_API void FOnItemDragDropMulticastDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemDragDropMulticastDynamic, UObject* Item, UDragDropOperation* Operation);


// ********** End Delegate FOnItemDragDropMulticastDynamic *****************************************

// ********** Begin Delegate FOnItemGeometryMulticastDynamic ***************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_23_DELEGATE \
UMG_API void FOnItemGeometryMulticastDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemGeometryMulticastDynamic, UObject* Item, FGeometry const& MyGeometry);


// ********** End Delegate FOnItemGeometryMulticastDynamic *****************************************

// ********** Begin Delegate FOnItemZoneMulticastDynamic *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_24_DELEGATE \
UMG_API void FOnItemZoneMulticastDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemZoneMulticastDynamic, UObject* Item, EUMGItemDropZone DropZone, UDragDropOperation* Operation);


// ********** End Delegate FOnItemZoneMulticastDynamic *********************************************

// ********** Begin Delegate FOnItemDragCancelledDynamic *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_25_DELEGATE \
UMG_API void FOnItemDragCancelledDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemDragCancelledDynamic, UDragDropOperation* Operation);


// ********** End Delegate FOnItemDragCancelledDynamic *********************************************

// ********** Begin Delegate FOnListViewDraggingStateChangedDynamic ********************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_26_DELEGATE \
UMG_API void FOnListViewDraggingStateChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewDraggingStateChangedDynamic, bool bIsDragging);


// ********** End Delegate FOnListViewDraggingStateChangedDynamic **********************************

// ********** Begin Class UListView ****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetSelectedItem); \
	DECLARE_FUNCTION(execBP_SetListItems); \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView); \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView); \
	DECLARE_FUNCTION(execBP_NavigateToItem); \
	DECLARE_FUNCTION(execBP_IsItemVisible); \
	DECLARE_FUNCTION(execBP_GetSelectedItems); \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected); \
	DECLARE_FUNCTION(execBP_ClearSelection); \
	DECLARE_FUNCTION(execBP_SetItemSelection); \
	DECLARE_FUNCTION(execBP_SetSelectedItem); \
	DECLARE_FUNCTION(execGetScrollBarPadding); \
	DECLARE_FUNCTION(execGetVerticalEntrySpacing); \
	DECLARE_FUNCTION(execGetHorizontalEntrySpacing); \
	DECLARE_FUNCTION(execOnListItemOuterEndPlayed); \
	DECLARE_FUNCTION(execOnListItemEndPlayed); \
	DECLARE_FUNCTION(execNavigateToIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execScrollIndexIntoView); \
	DECLARE_FUNCTION(execIsRefreshPending); \
	DECLARE_FUNCTION(execSetScrollBarPadding); \
	DECLARE_FUNCTION(execSetScrollIntoViewAlignment); \
	DECLARE_FUNCTION(execSetSelectionMode); \
	DECLARE_FUNCTION(execClearListItems); \
	DECLARE_FUNCTION(execGetIndexForItem); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetListItems);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_ACCESSORS \
static void GetShadowBrushStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetShadowBrushStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalEntrySpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalEntrySpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalEntrySpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalEntrySpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollBarPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetScrollBarPadding_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UListView_Statics;
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct ::Z_Construct_UClass_UListView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UListView_NoRegister(); \
public: \
	DECLARE_CLASS2(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UListView_NoRegister) \
	DECLARE_SERIALIZER(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UListView(UListView&&) = delete; \
	UListView(const UListView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	UMG_API virtual ~UListView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_37_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UListView;

// ********** End Class UListView ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
