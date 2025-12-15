// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WindowTitleBarArea.h"

#ifdef UMG_WindowTitleBarArea_generated_h
#error "WindowTitleBarArea.generated.h already included, missing '#pragma once' in WindowTitleBarArea.h"
#endif
#define UMG_WindowTitleBarArea_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;

// ********** Begin Class UWindowTitleBarArea ******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ACCESSORS \
static void GetbWindowButtonsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbWindowButtonsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbDoubleClickTogglesFullscreen_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDoubleClickTogglesFullscreen_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UWindowTitleBarArea_Statics;
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarArea_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWindowTitleBarArea(); \
	friend struct ::Z_Construct_UClass_UWindowTitleBarArea_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWindowTitleBarArea_NoRegister(); \
public: \
	DECLARE_CLASS2(UWindowTitleBarArea, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWindowTitleBarArea_NoRegister) \
	DECLARE_SERIALIZER(UWindowTitleBarArea)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWindowTitleBarArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowTitleBarArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWindowTitleBarArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowTitleBarArea); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWindowTitleBarArea(UWindowTitleBarArea&&) = delete; \
	UWindowTitleBarArea(const UWindowTitleBarArea&) = delete; \
	UMG_API virtual ~UWindowTitleBarArea();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWindowTitleBarArea;

// ********** End Class UWindowTitleBarArea ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
