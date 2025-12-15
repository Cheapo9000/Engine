// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/CompositeFont.h"

#ifdef SLATECORE_CompositeFont_generated_h
#error "CompositeFont.generated.h already included, missing '#pragma once' in CompositeFont.h"
#endif
#define SLATECORE_CompositeFont_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFontData *********************************************************
struct Z_Construct_UScriptStruct_FFontData_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFontData_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FFontData;
// ********** End ScriptStruct FFontData ***********************************************************

// ********** Begin ScriptStruct FTypefaceEntry ****************************************************
struct Z_Construct_UScriptStruct_FTypefaceEntry_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_322_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypefaceEntry_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FTypefaceEntry;
// ********** End ScriptStruct FTypefaceEntry ******************************************************

// ********** Begin ScriptStruct FTypeface *********************************************************
struct Z_Construct_UScriptStruct_FTypeface_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_355_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypeface_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FTypeface;
// ********** End ScriptStruct FTypeface ***********************************************************

// ********** Begin ScriptStruct FCompositeFallbackFont ********************************************
struct Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_383_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FCompositeFallbackFont;
// ********** End ScriptStruct FCompositeFallbackFont **********************************************

// ********** Begin ScriptStruct FCompositeSubFont *************************************************
struct Z_Construct_UScriptStruct_FCompositeSubFont_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_404_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeSubFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FCompositeFallbackFont Super;


struct FCompositeSubFont;
// ********** End ScriptStruct FCompositeSubFont ***************************************************

// ********** Begin ScriptStruct FCompositeFont ****************************************************
struct Z_Construct_UScriptStruct_FCompositeFont_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FCompositeFont;
// ********** End ScriptStruct FCompositeFont ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h

// ********** Begin Enum EFontHinting **************************************************************
#define FOREACH_ENUM_EFONTHINTING(op) \
	op(EFontHinting::Default) \
	op(EFontHinting::Auto) \
	op(EFontHinting::AutoLight) \
	op(EFontHinting::Monochrome) \
	op(EFontHinting::None) 

enum class EFontHinting : uint8;
template<> struct TIsUEnumClass<EFontHinting> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontHinting>();
// ********** End Enum EFontHinting ****************************************************************

// ********** Begin Enum EFontLoadingPolicy ********************************************************
#define FOREACH_ENUM_EFONTLOADINGPOLICY(op) \
	op(EFontLoadingPolicy::LazyLoad) \
	op(EFontLoadingPolicy::Stream) \
	op(EFontLoadingPolicy::Inline) 

enum class EFontLoadingPolicy : uint8;
template<> struct TIsUEnumClass<EFontLoadingPolicy> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontLoadingPolicy>();
// ********** End Enum EFontLoadingPolicy **********************************************************

// ********** Begin Enum EFontLayoutMethod *********************************************************
#define FOREACH_ENUM_EFONTLAYOUTMETHOD(op) \
	op(EFontLayoutMethod::Metrics) \
	op(EFontLayoutMethod::BoundingBox) 

enum class EFontLayoutMethod : uint8;
template<> struct TIsUEnumClass<EFontLayoutMethod> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontLayoutMethod>();
// ********** End Enum EFontLayoutMethod ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
