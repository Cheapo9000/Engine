// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScaleBoxComponent.h"

#ifdef UMG_ScaleBoxComponent_generated_h
#error "ScaleBoxComponent.generated.h already included, missing '#pragma once' in ScaleBoxComponent.h"
#endif
#define UMG_ScaleBoxComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScaleBoxComponent *******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetStretch_WrapperImpl(const void* Object, void* OutValue); \
static void SetStretch_WrapperImpl(void* Object, const void* InValue); \
static void GetStretchDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetStretchDirection_WrapperImpl(void* Object, const void* InValue); \
static void GetUserSpecifiedScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetUserSpecifiedScale_WrapperImpl(void* Object, const void* InValue); \
static void GetIgnoreInheritedScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetIgnoreInheritedScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UScaleBoxComponent_Statics;
UMG_API UClass* Z_Construct_UClass_UScaleBoxComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScaleBoxComponent(); \
	friend struct ::Z_Construct_UClass_UScaleBoxComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UScaleBoxComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UScaleBoxComponent, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UScaleBoxComponent_NoRegister) \
	DECLARE_SERIALIZER(UScaleBoxComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UScaleBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScaleBoxComponent(UScaleBoxComponent&&) = delete; \
	UScaleBoxComponent(const UScaleBoxComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UScaleBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaleBoxComponent) \
	UMG_API virtual ~UScaleBoxComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScaleBoxComponent;

// ********** End Class UScaleBoxComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBoxComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
