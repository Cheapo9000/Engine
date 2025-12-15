// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Overlays.h"

#ifdef OVERLAY_Overlays_generated_h
#error "Overlays.generated.h already included, missing '#pragma once' in Overlays.h"
#endif
#define OVERLAY_Overlays_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOverlayItem ******************************************************
struct Z_Construct_UScriptStruct_FOverlayItem_Statics;
#define FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOverlayItem_Statics; \
	OVERLAY_API static class UScriptStruct* StaticStruct();


struct FOverlayItem;
// ********** End ScriptStruct FOverlayItem ********************************************************

// ********** Begin Class UOverlays ****************************************************************
struct Z_Construct_UClass_UOverlays_Statics;
OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();

#define FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlays(); \
	friend struct ::Z_Construct_UClass_UOverlays_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVERLAY_API UClass* ::Z_Construct_UClass_UOverlays_NoRegister(); \
public: \
	DECLARE_CLASS2(UOverlays, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Overlay"), Z_Construct_UClass_UOverlays_NoRegister) \
	DECLARE_SERIALIZER(UOverlays)


#define FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OVERLAY_API UOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOverlays(UOverlays&&) = delete; \
	UOverlays(const UOverlays&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OVERLAY_API, UOverlays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlays); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlays) \
	OVERLAY_API virtual ~UOverlays();


#define FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_46_PROLOG
#define FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOverlays;

// ********** End Class UOverlays ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Overlay_Public_Overlays_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
