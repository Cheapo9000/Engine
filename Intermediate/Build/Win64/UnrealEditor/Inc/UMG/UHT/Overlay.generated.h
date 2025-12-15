// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Overlay.h"

#ifdef UMG_Overlay_generated_h
#error "Overlay.generated.h already included, missing '#pragma once' in Overlay.h"
#endif
#define UMG_Overlay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOverlaySlot;
class UWidget;

// ********** Begin Class UOverlay *****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReplaceOverlayChildAt); \
	DECLARE_FUNCTION(execAddChildToOverlay);


struct Z_Construct_UClass_UOverlay_Statics;
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct ::Z_Construct_UClass_UOverlay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UOverlay_NoRegister(); \
public: \
	DECLARE_CLASS2(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UOverlay_NoRegister) \
	DECLARE_SERIALIZER(UOverlay)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOverlay(UOverlay&&) = delete; \
	UOverlay(const UOverlay&) = delete; \
	UMG_API virtual ~UOverlay();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOverlay;

// ********** End Class UOverlay *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
