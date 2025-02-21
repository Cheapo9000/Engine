// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RenderTargetRenderers/DMRenderTargetTextRenderer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETextFlowDirection : uint8;
enum class ETextShapingMethod : uint8;
enum class ETextTransformPolicy : uint8;
enum class ETextWrappingPolicy : uint8;
struct FLinearColor;
struct FSlateBrush;
template struct TInstancedStruct<FSlateBrush>;
struct FSlateFontInfo;
#ifdef DYNAMICMATERIAL_DMRenderTargetTextRenderer_generated_h
#error "DMRenderTargetTextRenderer.generated.h already included, missing '#pragma once' in DMRenderTargetTextRenderer.h"
#endif
#define DYNAMICMATERIAL_DMRenderTargetTextRenderer_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMTextLine_Statics; \
	DYNAMICMATERIAL_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIAL_API UScriptStruct* StaticStruct<struct FDMTextLine>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOverrideRenderTargetSize); \
	DECLARE_FUNCTION(execIsOverridingRenderTargetSize); \
	DECLARE_FUNCTION(execSetPaddingBottom); \
	DECLARE_FUNCTION(execGetPaddingBottom); \
	DECLARE_FUNCTION(execSetPaddingTop); \
	DECLARE_FUNCTION(execGetPaddingTop); \
	DECLARE_FUNCTION(execSetPaddingRight); \
	DECLARE_FUNCTION(execGetPaddingRight); \
	DECLARE_FUNCTION(execSetPaddingLeft); \
	DECLARE_FUNCTION(execGetPaddingLeft); \
	DECLARE_FUNCTION(execSetLineHeight); \
	DECLARE_FUNCTION(execGetLineHeight); \
	DECLARE_FUNCTION(execSetStrikeBrush); \
	DECLARE_FUNCTION(execGetStrikeBrush); \
	DECLARE_FUNCTION(execSetShapingMethod); \
	DECLARE_FUNCTION(execGetShapingMethod); \
	DECLARE_FUNCTION(execSetFlowDirection); \
	DECLARE_FUNCTION(execGetFlowDirection); \
	DECLARE_FUNCTION(execSetTransformPolicy); \
	DECLARE_FUNCTION(execGetTransformPolicy); \
	DECLARE_FUNCTION(execSetJustify); \
	DECLARE_FUNCTION(execGetJustify); \
	DECLARE_FUNCTION(execSetWrappingPolicy); \
	DECLARE_FUNCTION(execGetWrappingPolicy); \
	DECLARE_FUNCTION(execSetWrapTextAt); \
	DECLARE_FUNCTION(execGetWrapTextAt); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execGetAutoWrapText); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColor); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execSetHasShadow); \
	DECLARE_FUNCTION(execGetHasShadow); \
	DECLARE_FUNCTION(execSetHighlightColor); \
	DECLARE_FUNCTION(execGetHighlightColor); \
	DECLARE_FUNCTION(execSetHasHighlight); \
	DECLARE_FUNCTION(execGetHasHighlight); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execGetBackgroundColor); \
	DECLARE_FUNCTION(execSetTextColor); \
	DECLARE_FUNCTION(execGetTextColor); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetFontInfo); \
	DECLARE_FUNCTION(execGetFontInfo);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_ACCESSORS \
static void GetFontInfo_WrapperImpl(const void* Object, void* OutValue); \
static void SetFontInfo_WrapperImpl(void* Object, const void* InValue); \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetTextColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextColor_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasHighlight_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasHighlight_WrapperImpl(void* Object, const void* InValue); \
static void GetHighlightColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetHighlightColor_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasShadow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasShadow_WrapperImpl(void* Object, const void* InValue); \
static void GetShadowColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetShadowColor_WrapperImpl(void* Object, const void* InValue); \
static void GetShadowOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetShadowOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetbAutoWrapText_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAutoWrapText_WrapperImpl(void* Object, const void* InValue); \
static void GetWrapTextAt_WrapperImpl(const void* Object, void* OutValue); \
static void SetWrapTextAt_WrapperImpl(void* Object, const void* InValue); \
static void GetWrappingPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetWrappingPolicy_WrapperImpl(void* Object, const void* InValue); \
static void GetJustify_WrapperImpl(const void* Object, void* OutValue); \
static void SetJustify_WrapperImpl(void* Object, const void* InValue); \
static void GetTransformPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetTransformPolicy_WrapperImpl(void* Object, const void* InValue); \
static void GetFlowDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetFlowDirection_WrapperImpl(void* Object, const void* InValue); \
static void GetShapingMethod_WrapperImpl(const void* Object, void* OutValue); \
static void SetShapingMethod_WrapperImpl(void* Object, const void* InValue); \
static void GetStrikeBrush_WrapperImpl(const void* Object, void* OutValue); \
static void SetStrikeBrush_WrapperImpl(void* Object, const void* InValue); \
static void GetLineHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingLeft_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingLeft_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingRight_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingRight_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingTop_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingTop_WrapperImpl(void* Object, const void* InValue); \
static void GetPaddingBottom_WrapperImpl(const void* Object, void* OutValue); \
static void SetPaddingBottom_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideRenderTargetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideRenderTargetSize_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMRenderTargetTextRenderer(); \
	friend struct Z_Construct_UClass_UDMRenderTargetTextRenderer_Statics; \
public: \
	DECLARE_CLASS(UDMRenderTargetTextRenderer, UDMRenderTargetWidgetRendererBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMRenderTargetTextRenderer)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMRenderTargetTextRenderer(UDMRenderTargetTextRenderer&&); \
	UDMRenderTargetTextRenderer(const UDMRenderTargetTextRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMRenderTargetTextRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMRenderTargetTextRenderer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMRenderTargetTextRenderer) \
	DYNAMICMATERIAL_API virtual ~UDMRenderTargetTextRenderer();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMRenderTargetTextRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_RenderTargetRenderers_DMRenderTargetTextRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
