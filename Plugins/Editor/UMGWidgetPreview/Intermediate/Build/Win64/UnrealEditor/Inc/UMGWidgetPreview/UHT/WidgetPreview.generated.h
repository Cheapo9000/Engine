// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPreview.h"

#ifdef UMGWIDGETPREVIEW_WidgetPreview_generated_h
#error "WidgetPreview.generated.h already included, missing '#pragma once' in WidgetPreview.h"
#endif
#define UMGWIDGETPREVIEW_WidgetPreview_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPreviewableWidgetVariant *****************************************
struct Z_Construct_UScriptStruct_FPreviewableWidgetVariant_Statics;
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreviewableWidgetVariant_Statics; \
	UMGWIDGETPREVIEW_API static class UScriptStruct* StaticStruct();


struct FPreviewableWidgetVariant;
// ********** End ScriptStruct FPreviewableWidgetVariant *******************************************

// ********** Begin Class UWidgetPreview ***********************************************************
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableWidgetSlotNames); \
	DECLARE_FUNCTION(execGetWidgetSlotNames);


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_ACCESSORS \
static void GetWidgetType_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetType_WrapperImpl(void* Object, const void* InValue); \
static void GetSlotWidgetTypes_WrapperImpl(const void* Object, void* OutValue); \
static void SetSlotWidgetTypes_WrapperImpl(void* Object, const void* InValue); \
static void GetbShouldOverrideWidgetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbShouldOverrideWidgetSize_WrapperImpl(void* Object, const void* InValue); \
static void GetOverriddenWidgetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetOverriddenWidgetSize_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UWidgetPreview_Statics;
UMGWIDGETPREVIEW_API UClass* Z_Construct_UClass_UWidgetPreview_NoRegister();

#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetPreview(); \
	friend struct ::Z_Construct_UClass_UWidgetPreview_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGWIDGETPREVIEW_API UClass* ::Z_Construct_UClass_UWidgetPreview_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetPreview, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGWidgetPreview"), Z_Construct_UClass_UWidgetPreview_NoRegister) \
	DECLARE_SERIALIZER(UWidgetPreview)


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetPreview(UWidgetPreview&&) = delete; \
	UWidgetPreview(const UWidgetPreview&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGWIDGETPREVIEW_API, UWidgetPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetPreview) \
	UMGWIDGETPREVIEW_API virtual ~UWidgetPreview();


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_69_PROLOG
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_ACCESSORS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetPreview;

// ********** End Class UWidgetPreview *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
