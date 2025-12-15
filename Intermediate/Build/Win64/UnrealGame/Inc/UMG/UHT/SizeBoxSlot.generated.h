// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SizeBoxSlot.h"

#ifdef UMG_SizeBoxSlot_generated_h
#error "SizeBoxSlot.generated.h already included, missing '#pragma once' in SizeBoxSlot.h"
#endif
#define UMG_SizeBoxSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class USizeBoxSlot *************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_USizeBoxSlot_Statics;
UMG_API UClass* Z_Construct_UClass_USizeBoxSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSizeBoxSlot(); \
	friend struct ::Z_Construct_UClass_USizeBoxSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USizeBoxSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(USizeBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USizeBoxSlot_NoRegister) \
	DECLARE_SERIALIZER(USizeBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USizeBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USizeBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBoxSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USizeBoxSlot(USizeBoxSlot&&) = delete; \
	USizeBoxSlot(const USizeBoxSlot&) = delete; \
	UMG_API virtual ~USizeBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USizeBoxSlot;

// ********** End Class USizeBoxSlot ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
