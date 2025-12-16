// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Signature.h"

#ifdef TEXTUREGRAPH_TG_Signature_generated_h
#error "TG_Signature.generated.h already included, missing '#pragma once' in TG_Signature.h"
#endif
#define TEXTUREGRAPH_TG_Signature_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTG_ArgumentType **************************************************
struct Z_Construct_UScriptStruct_FTG_ArgumentType_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Signature_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_ArgumentType_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_ArgumentType;
// ********** End ScriptStruct FTG_ArgumentType ****************************************************

// ********** Begin ScriptStruct FTG_Argument ******************************************************
struct Z_Construct_UScriptStruct_FTG_Argument_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Signature_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_Argument_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_Argument;
// ********** End ScriptStruct FTG_Argument ********************************************************

// ********** Begin ScriptStruct FTG_Signature *****************************************************
struct Z_Construct_UScriptStruct_FTG_Signature_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Signature_h_227_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_Signature_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_Signature;
// ********** End ScriptStruct FTG_Signature *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Signature_h

// ********** Begin Enum ETG_Access ****************************************************************
#define FOREACH_ENUM_ETG_ACCESS(op) \
	op(ETG_Access::In) \
	op(ETG_Access::Out) \
	op(ETG_Access::InParam) \
	op(ETG_Access::OutParam) \
	op(ETG_Access::InSetting) \
	op(ETG_Access::OutSetting) \
	op(ETG_Access::InParamSetting) \
	op(ETG_Access::OutParamSetting) \
	op(ETG_Access::Private) \
	op(ETG_Access::OutputBitMask) \
	op(ETG_Access::ParamBitMask) \
	op(ETG_Access::SettingBitMask) \
	op(ETG_Access::PrivateBitMask) \
	op(ETG_Access::AccessBitMask) \
	op(ETG_Access::PersistentSelfVarFlag) \
	op(ETG_Access::NotConnectableFlag) \
	op(ETG_Access::EnumFlag) 

enum class ETG_Access : uint8;
template<> struct TIsUEnumClass<ETG_Access> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ETG_Access>();
// ********** End Enum ETG_Access ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
