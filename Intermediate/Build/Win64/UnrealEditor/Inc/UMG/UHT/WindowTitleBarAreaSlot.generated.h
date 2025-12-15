// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WindowTitleBarAreaSlot.h"

#ifdef UMG_WindowTitleBarAreaSlot_generated_h
#error "WindowTitleBarAreaSlot.generated.h already included, missing '#pragma once' in WindowTitleBarAreaSlot.h"
#endif
#define UMG_WindowTitleBarAreaSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class UWindowTitleBarAreaSlot **************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWindowTitleBarAreaSlot(); \
	friend struct ::Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UWindowTitleBarAreaSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister) \
	DECLARE_SERIALIZER(UWindowTitleBarAreaSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWindowTitleBarAreaSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowTitleBarAreaSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWindowTitleBarAreaSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowTitleBarAreaSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWindowTitleBarAreaSlot(UWindowTitleBarAreaSlot&&) = delete; \
	UWindowTitleBarAreaSlot(const UWindowTitleBarAreaSlot&) = delete; \
	UMG_API virtual ~UWindowTitleBarAreaSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWindowTitleBarAreaSlot;

// ********** End Class UWindowTitleBarAreaSlot ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
