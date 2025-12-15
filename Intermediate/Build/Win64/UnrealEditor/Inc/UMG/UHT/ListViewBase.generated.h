// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ListViewBase.h"

#ifdef UMG_ListViewBase_generated_h
#error "ListViewBase.generated.h already included, missing '#pragma once' in ListViewBase.h"
#endif
#define UMG_ListViewBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDragDropOperation;
class UObject;
class UUserWidget;
enum class ESlateVisibility : uint8;

// ********** Begin Delegate FOnListEntryGeneratedDynamic ******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_19_DELEGATE \
UMG_API void FOnListEntryGeneratedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryGeneratedDynamic, UUserWidget* Widget);


// ********** End Delegate FOnListEntryGeneratedDynamic ********************************************

// ********** Begin Delegate FOnListEntryReleasedDynamic *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_20_DELEGATE \
UMG_API void FOnListEntryReleasedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryReleasedDynamic, UUserWidget* Widget);


// ********** End Delegate FOnListEntryReleasedDynamic *********************************************

// ********** Begin Delegate FOnListEntriesGeneratedDynamic ****************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_21_DELEGATE \
UMG_API void FOnListEntriesGeneratedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntriesGeneratedDynamic, int32 NumEntries);


// ********** End Delegate FOnListEntriesGeneratedDynamic ******************************************

// ********** Begin Class UListViewBase ************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execCreateDragDropOperation); \
	DECLARE_FUNCTION(execCancelListViewDragDrop); \
	DECLARE_FUNCTION(execSetIsGamepadScrollingEnabled); \
	DECLARE_FUNCTION(execSetIsPointerScrollingEnabled); \
	DECLARE_FUNCTION(execSetAllowOverScroll); \
	DECLARE_FUNCTION(execSetScrollbarVisibility); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execEndInertialScrolling); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execScrollToBottom); \
	DECLARE_FUNCTION(execScrollToTop); \
	DECLARE_FUNCTION(execRegenerateAllEntries); \
	DECLARE_FUNCTION(execGetIsDraggingListItem); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execGetDisplayedEntryWidgets);


struct Z_Construct_UClass_UListViewBase_Statics;
UMG_API UClass* Z_Construct_UClass_UListViewBase_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListViewBase(); \
	friend struct ::Z_Construct_UClass_UListViewBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UListViewBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UListViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UListViewBase_NoRegister) \
	DECLARE_SERIALIZER(UListViewBase)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UListViewBase(UListViewBase&&) = delete; \
	UListViewBase(const UListViewBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UListViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewBase) \
	UMG_API virtual ~UListViewBase();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_544_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_547_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UListViewBase;

// ********** End Class UListViewBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
