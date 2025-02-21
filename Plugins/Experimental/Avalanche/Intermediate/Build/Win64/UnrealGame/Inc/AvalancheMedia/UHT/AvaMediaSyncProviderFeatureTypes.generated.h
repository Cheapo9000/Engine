// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularFeature/AvaMediaSyncProviderFeatureTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaMediaSyncProviderFeatureTypes_generated_h
#error "AvaMediaSyncProviderFeatureTypes.generated.h already included, missing '#pragma once' in AvaMediaSyncProviderFeatureTypes.h"
#endif
#define AVALANCHEMEDIA_AvaMediaSyncProviderFeatureTypes_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMediaSyncConnectionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaMediaSyncConnectionInfo>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMediaSyncResponse_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaMediaSyncResponse>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMediaSyncCompareResponse_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct(); \
	typedef FAvaMediaSyncResponse Super;


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaMediaSyncCompareResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_ModularFeature_AvaMediaSyncProviderFeatureTypes_h


#define FOREACH_ENUM_EAVAMEDIASYNCRESPONSERESULT(op) \
	op(EAvaMediaSyncResponseResult::Error) \
	op(EAvaMediaSyncResponseResult::Success) \
	op(EAvaMediaSyncResponseResult::Unknown) 

enum class EAvaMediaSyncResponseResult : uint8;
template<> struct TIsUEnumClass<EAvaMediaSyncResponseResult> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaMediaSyncResponseResult>();

#define FOREACH_ENUM_EAVAMEDIASYNCENGINETYPE(op) \
	op(EAvaMediaSyncEngineType::Server) \
	op(EAvaMediaSyncEngineType::Commandlet) \
	op(EAvaMediaSyncEngineType::Editor) \
	op(EAvaMediaSyncEngineType::Game) \
	op(EAvaMediaSyncEngineType::Other) \
	op(EAvaMediaSyncEngineType::Unknown) 

enum class EAvaMediaSyncEngineType : uint8;
template<> struct TIsUEnumClass<EAvaMediaSyncEngineType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaMediaSyncEngineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
