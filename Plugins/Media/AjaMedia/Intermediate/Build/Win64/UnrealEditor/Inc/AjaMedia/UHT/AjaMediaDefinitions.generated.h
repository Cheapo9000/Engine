// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaDefinitions.h"

#ifdef AJAMEDIA_AjaMediaDefinitions_generated_h
#error "AjaMediaDefinitions.generated.h already included, missing '#pragma once' in AjaMediaDefinitions.h"
#endif
#define AJAMEDIA_AjaMediaDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAjaMediaHDROptions ***********************************************
struct Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics;
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAjaMediaHDROptions;
// ********** End ScriptStruct FAjaMediaHDROptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h

// ********** Begin Enum EAjaHDRMetadataEOTF *******************************************************
#define FOREACH_ENUM_EAJAHDRMETADATAEOTF(op) \
	op(EAjaHDRMetadataEOTF::SDR) \
	op(EAjaHDRMetadataEOTF::HLG) \
	op(EAjaHDRMetadataEOTF::PQ) 

enum class EAjaHDRMetadataEOTF : uint8;
template<> struct TIsUEnumClass<EAjaHDRMetadataEOTF> { enum { Value = true }; };
template<> AJAMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaHDRMetadataEOTF>();
// ********** End Enum EAjaHDRMetadataEOTF *********************************************************

// ********** Begin Enum EAjaHDRMetadataGamut ******************************************************
#define FOREACH_ENUM_EAJAHDRMETADATAGAMUT(op) \
	op(EAjaHDRMetadataGamut::Rec709) \
	op(EAjaHDRMetadataGamut::Rec2020) 

enum class EAjaHDRMetadataGamut : uint8;
template<> struct TIsUEnumClass<EAjaHDRMetadataGamut> { enum { Value = true }; };
template<> AJAMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAjaHDRMetadataGamut>();
// ********** End Enum EAjaHDRMetadataGamut ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
