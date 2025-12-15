// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetLayoutLibrary.h"

#ifdef UMG_WidgetLayoutLibrary_generated_h
#error "WidgetLayoutLibrary.generated.h already included, missing '#pragma once' in WidgetLayoutLibrary.h"
#endif
#define UMG_WidgetLayoutLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UBorderSlot;
class UCanvasPanelSlot;
class UGridSlot;
class UHorizontalBoxSlot;
class UObject;
class UOverlaySlot;
class USafeZoneSlot;
class UScaleBoxSlot;
class UScrollBoxSlot;
class USizeBoxSlot;
class UStackBoxSlot;
class UUniformGridSlot;
class UVerticalBoxSlot;
class UWidget;
class UWidgetSwitcherSlot;
class UWrapBoxSlot;
struct FGeometry;

// ********** Begin Class UWidgetLayoutLibrary *****************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveAllWidgets); \
	DECLARE_FUNCTION(execSlotAsWidgetSwitcherSlot); \
	DECLARE_FUNCTION(execSlotAsWrapBoxSlot); \
	DECLARE_FUNCTION(execSlotAsStackBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSizeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScaleBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSafeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScrollBoxSlot); \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot); \
	DECLARE_FUNCTION(execSlotAsOverlaySlot); \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsGridSlot); \
	DECLARE_FUNCTION(execSlotAsCanvasSlot); \
	DECLARE_FUNCTION(execSlotAsBorderSlot); \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI); \
	DECLARE_FUNCTION(execGetMousePositionOnViewport); \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform); \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetViewportScale); \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition);


struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct ::Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetLayoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetLayoutLibrary(UWidgetLayoutLibrary&&) = delete; \
	UWidgetLayoutLibrary(const UWidgetLayoutLibrary&) = delete; \
	UMG_API virtual ~UWidgetLayoutLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_28_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetLayoutLibrary;

// ********** End Class UWidgetLayoutLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
