// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BorderSlot.h"

#ifdef UMG_BorderSlot_generated_h
#error "BorderSlot.generated.h already included, missing '#pragma once' in BorderSlot.h"
#endif
#define UMG_BorderSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class UBorderSlot **************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UBorderSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UBorderSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend struct ::Z_Construct_UClass_UBorderSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UBorderSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UBorderSlot_NoRegister) \
	DECLARE_SERIALIZER(UBorderSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UBorderSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBorderSlot(UBorderSlot&&) = delete; \
	UBorderSlot(const UBorderSlot&) = delete; \
	UMG_API virtual ~UBorderSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_19_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBorderSlot;

// ********** End Class UBorderSlot ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
