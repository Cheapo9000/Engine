// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SizeBoxComponent.h"

#ifdef UMG_SizeBoxComponent_generated_h
#error "SizeBoxComponent.generated.h already included, missing '#pragma once' in SizeBoxComponent.h"
#endif
#define UMG_SizeBoxComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USizeBoxComponent ********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearMaxAspectRatio); \
	DECLARE_FUNCTION(execClearMinAspectRatio); \
	DECLARE_FUNCTION(execClearMaxDesiredHeight); \
	DECLARE_FUNCTION(execClearMaxDesiredWidth); \
	DECLARE_FUNCTION(execClearMinDesiredHeight); \
	DECLARE_FUNCTION(execClearMinDesiredWidth); \
	DECLARE_FUNCTION(execClearHeightOverride); \
	DECLARE_FUNCTION(execClearWidthOverride);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetWidthOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidthOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetHeightOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeightOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxDesiredHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxDesiredHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetMinAspectRatio_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinAspectRatio_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxAspectRatio_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxAspectRatio_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_USizeBoxComponent_Statics;
UMG_API UClass* Z_Construct_UClass_USizeBoxComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSizeBoxComponent(); \
	friend struct ::Z_Construct_UClass_USizeBoxComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USizeBoxComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USizeBoxComponent, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USizeBoxComponent_NoRegister) \
	DECLARE_SERIALIZER(USizeBoxComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USizeBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USizeBoxComponent(USizeBoxComponent&&) = delete; \
	USizeBoxComponent(const USizeBoxComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USizeBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBoxComponent) \
	UMG_API virtual ~USizeBoxComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USizeBoxComponent;

// ********** End Class USizeBoxComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
