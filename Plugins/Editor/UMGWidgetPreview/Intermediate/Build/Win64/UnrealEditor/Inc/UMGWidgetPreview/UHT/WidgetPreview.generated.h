// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPreview.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGWIDGETPREVIEW_WidgetPreview_generated_h
#error "WidgetPreview.generated.h already included, missing '#pragma once' in WidgetPreview.h"
#endif
#define UMGWIDGETPREVIEW_WidgetPreview_generated_h

#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreviewableWidgetVariant_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGWIDGETPREVIEW_API UScriptStruct* StaticStruct<struct FPreviewableWidgetVariant>();

#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableWidgetSlotNames); \
	DECLARE_FUNCTION(execGetWidgetSlotNames);


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_ACCESSORS \
static void GetWidgetType_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetType_WrapperImpl(void* Object, const void* InValue); \
static void GetSlotWidgetTypes_WrapperImpl(const void* Object, void* OutValue); \
static void SetSlotWidgetTypes_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetPreview(); \
	friend struct Z_Construct_UClass_UWidgetPreview_Statics; \
public: \
	DECLARE_CLASS(UWidgetPreview, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGWidgetPreview"), NO_API) \
	DECLARE_SERIALIZER(UWidgetPreview)


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetPreview(UWidgetPreview&&); \
	UWidgetPreview(const UWidgetPreview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetPreview) \
	NO_API virtual ~UWidgetPreview();


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_66_PROLOG
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_ACCESSORS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGWIDGETPREVIEW_API UClass* StaticClass<class UWidgetPreview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Public_WidgetPreview_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
