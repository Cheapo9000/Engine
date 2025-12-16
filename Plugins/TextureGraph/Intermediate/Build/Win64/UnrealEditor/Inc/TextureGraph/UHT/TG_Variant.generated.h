// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Variant.h"

#ifdef TEXTUREGRAPH_TG_Variant_generated_h
#error "TG_Variant.generated.h already included, missing '#pragma once' in TG_Variant.h"
#endif
#define TEXTUREGRAPH_TG_Variant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTG_Variant *******************************************************
struct Z_Construct_UScriptStruct_FTG_Variant_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Variant_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_Variant_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_Variant;
// ********** End ScriptStruct FTG_Variant *********************************************************

// ********** Begin ScriptStruct FTG_VariantArray **************************************************
struct Z_Construct_UScriptStruct_FTG_VariantArray_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Variant_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_VariantArray_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_VariantArray;
// ********** End ScriptStruct FTG_VariantArray ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Variant_h

// ********** Begin Enum ETG_VariantType ***********************************************************
#define FOREACH_ENUM_ETG_VARIANTTYPE(op) \
	op(ETG_VariantType::Invalid) \
	op(ETG_VariantType::Scalar) \
	op(ETG_VariantType::Color) \
	op(ETG_VariantType::Vector) \
	op(ETG_VariantType::Texture) 

enum class ETG_VariantType : int8;
template<> struct TIsUEnumClass<ETG_VariantType> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ETG_VariantType>();
// ********** End Enum ETG_VariantType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
