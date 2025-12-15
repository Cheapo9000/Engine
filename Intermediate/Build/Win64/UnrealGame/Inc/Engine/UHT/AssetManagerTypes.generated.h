// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AssetManagerTypes.h"

#ifdef ENGINE_AssetManagerTypes_generated_h
#error "AssetManagerTypes.generated.h already included, missing '#pragma once' in AssetManagerTypes.h"
#endif
#define ENGINE_AssetManagerTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPrimaryAssetRules ************************************************
struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPrimaryAssetRules;
// ********** End ScriptStruct FPrimaryAssetRules **************************************************

// ********** Begin ScriptStruct FPrimaryAssetTypeInfo *********************************************
struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPrimaryAssetTypeInfo;
// ********** End ScriptStruct FPrimaryAssetTypeInfo ***********************************************

// ********** Begin ScriptStruct FAssetManagerSearchRules ******************************************
struct Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_296_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAssetManagerSearchRules;
// ********** End ScriptStruct FAssetManagerSearchRules ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h

// ********** Begin Enum EPrimaryAssetCookRule *****************************************************
#define FOREACH_ENUM_EPRIMARYASSETCOOKRULE(op) \
	op(EPrimaryAssetCookRule::Unknown) \
	op(EPrimaryAssetCookRule::NeverCook) \
	op(EPrimaryAssetCookRule::ProductionNeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook) \
	op(EPrimaryAssetCookRule::AlwaysCook) 

enum class EPrimaryAssetCookRule : uint8;
template<> struct TIsUEnumClass<EPrimaryAssetCookRule> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrimaryAssetCookRule>();
// ********** End Enum EPrimaryAssetCookRule *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
