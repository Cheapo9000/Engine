// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VerticalBoxSlot.h"

#ifdef UMG_VerticalBoxSlot_generated_h
#error "VerticalBoxSlot.generated.h already included, missing '#pragma once' in VerticalBoxSlot.h"
#endif
#define UMG_VerticalBoxSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateChildSize;

// ********** Begin Class UVerticalBoxSlot *********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ACCESSORS \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UVerticalBoxSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBoxSlot(); \
	friend struct ::Z_Construct_UClass_UVerticalBoxSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UVerticalBoxSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerticalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UVerticalBoxSlot_NoRegister) \
	DECLARE_SERIALIZER(UVerticalBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UVerticalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UVerticalBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBoxSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerticalBoxSlot(UVerticalBoxSlot&&) = delete; \
	UVerticalBoxSlot(const UVerticalBoxSlot&) = delete; \
	UMG_API virtual ~UVerticalBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerticalBoxSlot;

// ********** End Class UVerticalBoxSlot ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
