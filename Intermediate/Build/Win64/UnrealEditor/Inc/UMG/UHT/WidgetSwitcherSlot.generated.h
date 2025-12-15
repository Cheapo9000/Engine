// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetSwitcherSlot.h"

#ifdef UMG_WidgetSwitcherSlot_generated_h
#error "WidgetSwitcherSlot.generated.h already included, missing '#pragma once' in WidgetSwitcherSlot.h"
#endif
#define UMG_WidgetSwitcherSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class UWidgetSwitcherSlot ******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UWidgetSwitcherSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetSwitcherSlot(); \
	friend struct ::Z_Construct_UClass_UWidgetSwitcherSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetSwitcherSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister) \
	DECLARE_SERIALIZER(UWidgetSwitcherSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetSwitcherSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcherSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetSwitcherSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcherSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetSwitcherSlot(UWidgetSwitcherSlot&&) = delete; \
	UWidgetSwitcherSlot(const UWidgetSwitcherSlot&) = delete; \
	UMG_API virtual ~UWidgetSwitcherSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetSwitcherSlot;

// ********** End Class UWidgetSwitcherSlot ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
