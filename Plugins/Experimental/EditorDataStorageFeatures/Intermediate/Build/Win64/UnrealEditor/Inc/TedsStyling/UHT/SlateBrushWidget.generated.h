// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SlateBrushWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSSTYLING_SlateBrushWidget_generated_h
#error "SlateBrushWidget.generated.h already included, missing '#pragma once' in SlateBrushWidget.h"
#endif
#define TEDSSTYLING_SlateBrushWidget_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateStylePreviewWidget(); \
	friend struct Z_Construct_UClass_USlateStylePreviewWidget_Statics; \
public: \
	DECLARE_CLASS(USlateStylePreviewWidget, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsStyling"), NO_API) \
	DECLARE_SERIALIZER(USlateStylePreviewWidget)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateStylePreviewWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateStylePreviewWidget(USlateStylePreviewWidget&&); \
	USlateStylePreviewWidget(const USlateStylePreviewWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateStylePreviewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateStylePreviewWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateStylePreviewWidget)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSSTYLING_API UClass* StaticClass<class USlateStylePreviewWidget>();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateStylePreviewWidgetConstructor_Statics; \
	TEDSSTYLING_API static class UScriptStruct* StaticStruct(); \
	typedef FSimpleWidgetConstructor Super;


template<> TEDSSTYLING_API UScriptStruct* StaticStruct<struct FSlateStylePreviewWidgetConstructor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsStyling_Private_Widgets_SlateBrushWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
