// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularFeature/AvaMediaSyncProviderFeatureTypes.h"

#ifdef AVALANCHEMEDIA_AvaMediaSyncProviderFeatureTypes_generated_h
#error "AvaMediaSyncProviderFeatureTypes.generated.h already included, missing '#pragma once' in AvaMediaSyncProviderFeatureTypes.h"
#endif
#define AVALANCHEMEDIA_AvaMediaSyncProviderFeatureTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaMediaSyncConnectionInfo ***************************************
struct Z_Construct_UScriptStruct_FAvaMediaSyncConnectionInfo_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMediaSyncConnectionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAvaMediaSyncConnectionInfo;
// ********** End ScriptStruct FAvaMediaSyncConnectionInfo *****************************************

// ********** Begin ScriptStruct FAvaMediaSyncResponse *********************************************
struct Z_Construct_UScriptStruct_FAvaMediaSyncResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMediaSyncResponse_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaMediaSyncResponse;
// ********** End ScriptStruct FAvaMediaSyncResponse ***********************************************

// ********** Begin ScriptStruct FAvaMediaSyncCompareResponse **************************************
struct Z_Construct_UScriptStruct_FAvaMediaSyncCompareResponse_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMediaSyncCompareResponse_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaMediaSyncResponse Super;


struct FAvaMediaSyncCompareResponse;
// ********** End ScriptStruct FAvaMediaSyncCompareResponse ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h

// ********** Begin Enum EAvaMediaSyncResponseResult ***********************************************
#define FOREACH_ENUM_EAVAMEDIASYNCRESPONSERESULT(op) \
	op(EAvaMediaSyncResponseResult::Error) \
	op(EAvaMediaSyncResponseResult::Success) \
	op(EAvaMediaSyncResponseResult::Unknown) 

enum class EAvaMediaSyncResponseResult : uint8;
template<> struct TIsUEnumClass<EAvaMediaSyncResponseResult> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMediaSyncResponseResult>();
// ********** End Enum EAvaMediaSyncResponseResult *************************************************

// ********** Begin Enum EAvaMediaSyncEngineType ***************************************************
#define FOREACH_ENUM_EAVAMEDIASYNCENGINETYPE(op) \
	op(EAvaMediaSyncEngineType::Server) \
	op(EAvaMediaSyncEngineType::Commandlet) \
	op(EAvaMediaSyncEngineType::Editor) \
	op(EAvaMediaSyncEngineType::Game) \
	op(EAvaMediaSyncEngineType::Other) \
	op(EAvaMediaSyncEngineType::Unknown) 

enum class EAvaMediaSyncEngineType : uint8;
template<> struct TIsUEnumClass<EAvaMediaSyncEngineType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaMediaSyncEngineType>();
// ********** End Enum EAvaMediaSyncEngineType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
