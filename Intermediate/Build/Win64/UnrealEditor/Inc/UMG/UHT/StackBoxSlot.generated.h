// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StackBoxSlot.h"

#ifdef UMG_StackBoxSlot_generated_h
#error "StackBoxSlot.generated.h already included, missing '#pragma once' in StackBoxSlot.h"
#endif
#define UMG_StackBoxSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStackBoxSlot ************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UStackBoxSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStackBoxSlot(); \
	friend struct ::Z_Construct_UClass_UStackBoxSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UStackBoxSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UStackBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UStackBoxSlot_NoRegister) \
	DECLARE_SERIALIZER(UStackBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UStackBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStackBoxSlot(UStackBoxSlot&&) = delete; \
	UStackBoxSlot(const UStackBoxSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UStackBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStackBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStackBoxSlot) \
	UMG_API virtual ~UStackBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStackBoxSlot;

// ********** End Class UStackBoxSlot **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
