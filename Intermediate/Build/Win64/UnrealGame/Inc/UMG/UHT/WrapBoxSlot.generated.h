// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WrapBoxSlot.h"

#ifdef UMG_WrapBoxSlot_generated_h
#error "WrapBoxSlot.generated.h already included, missing '#pragma once' in WrapBoxSlot.h"
#endif
#define UMG_WrapBoxSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class UWrapBoxSlot *************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetNewLine); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan); \
	DECLARE_FUNCTION(execSetFillEmptySpace); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetFillSpanWhenLessThan_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetbFillEmptySpace_WrapperImpl(void* Object, const void* InValue); \
static void SetbForceNewLine_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UWrapBoxSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend struct ::Z_Construct_UClass_UWrapBoxSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWrapBoxSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWrapBoxSlot_NoRegister) \
	DECLARE_SERIALIZER(UWrapBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWrapBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWrapBoxSlot(UWrapBoxSlot&&) = delete; \
	UWrapBoxSlot(const UWrapBoxSlot&) = delete; \
	UMG_API virtual ~UWrapBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWrapBoxSlot;

// ********** End Class UWrapBoxSlot ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
