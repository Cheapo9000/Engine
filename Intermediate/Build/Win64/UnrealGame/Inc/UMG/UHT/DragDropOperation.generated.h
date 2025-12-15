// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/DragDropOperation.h"

#ifdef UMG_DragDropOperation_generated_h
#error "DragDropOperation.generated.h already included, missing '#pragma once' in DragDropOperation.h"
#endif
#define UMG_DragDropOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDragDropOperation;
struct FPointerEvent;

// ********** Begin Delegate FOnDragDropMulticast **************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_28_DELEGATE \
UMG_API void FOnDragDropMulticast_DelegateWrapper(const FMulticastScriptDelegate& OnDragDropMulticast, UDragDropOperation* Operation);


// ********** End Delegate FOnDragDropMulticast ****************************************************

// ********** Begin Class UDragDropOperation *******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_RPC_WRAPPERS \
	UMG_API virtual void Dragged_Implementation(FPointerEvent const& PointerEvent); \
	UMG_API virtual void DragCancelled_Implementation(FPointerEvent const& PointerEvent); \
	UMG_API virtual void Drop_Implementation(FPointerEvent const& PointerEvent); \
	DECLARE_FUNCTION(execDragged); \
	DECLARE_FUNCTION(execDragCancelled); \
	DECLARE_FUNCTION(execDrop);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDragDropOperation_Statics;
UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUDragDropOperation(); \
	friend struct ::Z_Construct_UClass_UDragDropOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UDragDropOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UDragDropOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UDragDropOperation_NoRegister) \
	DECLARE_SERIALIZER(UDragDropOperation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDragDropOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDragDropOperation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDragDropOperation(UDragDropOperation&&) = delete; \
	UDragDropOperation(const UDragDropOperation&) = delete; \
	UMG_API virtual ~UDragDropOperation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_53_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDragDropOperation;

// ********** End Class UDragDropOperation *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_DragDropOperation_h

// ********** Begin Enum EUMGItemDropZone **********************************************************
#define FOREACH_ENUM_EUMGITEMDROPZONE(op) \
	op(EUMGItemDropZone::AboveItem) \
	op(EUMGItemDropZone::OntoItem) \
	op(EUMGItemDropZone::BelowItem) \
	op(EUMGItemDropZone::None) 

enum class EUMGItemDropZone : uint8;
template<> struct TIsUEnumClass<EUMGItemDropZone> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EUMGItemDropZone>();
// ********** End Enum EUMGItemDropZone ************************************************************

// ********** Begin Enum EDragPivot ****************************************************************
#define FOREACH_ENUM_EDRAGPIVOT(op) \
	op(EDragPivot::MouseDown) \
	op(EDragPivot::TopLeft) \
	op(EDragPivot::TopCenter) \
	op(EDragPivot::TopRight) \
	op(EDragPivot::CenterLeft) \
	op(EDragPivot::CenterCenter) \
	op(EDragPivot::CenterRight) \
	op(EDragPivot::BottomLeft) \
	op(EDragPivot::BottomCenter) \
	op(EDragPivot::BottomRight) 

enum class EDragPivot : uint8;
template<> struct TIsUEnumClass<EDragPivot> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EDragPivot>();
// ********** End Enum EDragPivot ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
