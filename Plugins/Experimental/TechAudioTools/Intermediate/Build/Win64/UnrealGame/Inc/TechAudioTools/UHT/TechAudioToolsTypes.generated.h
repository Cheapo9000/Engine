// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TechAudioToolsTypes.h"

#ifdef TECHAUDIOTOOLS_TechAudioToolsTypes_generated_h
#error "TechAudioToolsTypes.generated.h already included, missing '#pragma once' in TechAudioToolsTypes.h"
#endif
#define TECHAUDIOTOOLS_TechAudioToolsTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsTypes_h

// ********** Begin Enum ETechAudioToolsMappingEndpoint ********************************************
#define FOREACH_ENUM_ETECHAUDIOTOOLSMAPPINGENDPOINT(op) \
	op(ETechAudioToolsMappingEndpoint::Source) \
	op(ETechAudioToolsMappingEndpoint::Display) 

enum class ETechAudioToolsMappingEndpoint : uint8;
template<> struct TIsUEnumClass<ETechAudioToolsMappingEndpoint> { enum { Value = true }; };
template<> TECHAUDIOTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETechAudioToolsMappingEndpoint>();
// ********** End Enum ETechAudioToolsMappingEndpoint **********************************************

// ********** Begin Enum ETechAudioToolsFloatUnit **************************************************
#define FOREACH_ENUM_ETECHAUDIOTOOLSFLOATUNIT(op) \
	op(ETechAudioToolsFloatUnit::None) \
	op(ETechAudioToolsFloatUnit::Multiplier) \
	op(ETechAudioToolsFloatUnit::Decibels) \
	op(ETechAudioToolsFloatUnit::Hertz) \
	op(ETechAudioToolsFloatUnit::Semitones) \
	op(ETechAudioToolsFloatUnit::TimeSeconds) \
	op(ETechAudioToolsFloatUnit::TimeMilliseconds) \
	op(ETechAudioToolsFloatUnit::Degrees) \
	op(ETechAudioToolsFloatUnit::Pan) \
	op(ETechAudioToolsFloatUnit::BandwidthOct) \
	op(ETechAudioToolsFloatUnit::Tempo) 

enum class ETechAudioToolsFloatUnit : uint8;
template<> struct TIsUEnumClass<ETechAudioToolsFloatUnit> { enum { Value = true }; };
template<> TECHAUDIOTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETechAudioToolsFloatUnit>();
// ********** End Enum ETechAudioToolsFloatUnit ****************************************************

// ********** Begin Enum ETechAudioToolsFloatMappingType *******************************************
#define FOREACH_ENUM_ETECHAUDIOTOOLSFLOATMAPPINGTYPE(op) \
	op(ETechAudioToolsFloatMappingType::Default) \
	op(ETechAudioToolsFloatMappingType::MapRange) \
	op(ETechAudioToolsFloatMappingType::Volume) \
	op(ETechAudioToolsFloatMappingType::Pitch) 

enum class ETechAudioToolsFloatMappingType : uint8;
template<> struct TIsUEnumClass<ETechAudioToolsFloatMappingType> { enum { Value = true }; };
template<> TECHAUDIOTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETechAudioToolsFloatMappingType>();
// ********** End Enum ETechAudioToolsFloatMappingType *********************************************

// ********** Begin Enum ETechAudioToolsVolumeUnit *************************************************
#define FOREACH_ENUM_ETECHAUDIOTOOLSVOLUMEUNIT(op) \
	op(ETechAudioToolsVolumeUnit::Decibels) \
	op(ETechAudioToolsVolumeUnit::LinearGain) 

enum class ETechAudioToolsVolumeUnit : uint8;
template<> struct TIsUEnumClass<ETechAudioToolsVolumeUnit> { enum { Value = true }; };
template<> TECHAUDIOTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETechAudioToolsVolumeUnit>();
// ********** End Enum ETechAudioToolsVolumeUnit ***************************************************

// ********** Begin Enum ETechAudioToolsPitchUnit **************************************************
#define FOREACH_ENUM_ETECHAUDIOTOOLSPITCHUNIT(op) \
	op(ETechAudioToolsPitchUnit::Semitones) \
	op(ETechAudioToolsPitchUnit::FrequencyMultiplier) 

enum class ETechAudioToolsPitchUnit : uint8;
template<> struct TIsUEnumClass<ETechAudioToolsPitchUnit> { enum { Value = true }; };
template<> TECHAUDIOTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETechAudioToolsPitchUnit>();
// ********** End Enum ETechAudioToolsPitchUnit ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
