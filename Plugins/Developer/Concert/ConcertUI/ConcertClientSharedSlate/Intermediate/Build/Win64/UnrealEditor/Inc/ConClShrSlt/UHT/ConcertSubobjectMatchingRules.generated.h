// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Settings/ConcertSubobjectMatchingRules.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTCLIENTSHAREDSLATE_ConcertSubobjectMatchingRules_generated_h
#error "ConcertSubobjectMatchingRules.generated.h already included, missing '#pragma once' in ConcertSubobjectMatchingRules.h"
#endif
#define CONCERTCLIENTSHAREDSLATE_ConcertSubobjectMatchingRules_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertClientSharedSlate_Source_ConcertClientSharedSlate_Public_Replication_Settings_ConcertSubobjectMatchingRules_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSubobjectMatchingRules_Statics; \
	CONCERTCLIENTSHAREDSLATE_API static class UScriptStruct* StaticStruct();


template<> CONCERTCLIENTSHAREDSLATE_API UScriptStruct* StaticStruct<struct FConcertSubobjectMatchingRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertClientSharedSlate_Source_ConcertClientSharedSlate_Public_Replication_Settings_ConcertSubobjectMatchingRules_h


#define FOREACH_ENUM_ECONCERTINCLUDEALLSUBOBJECTSTYPE(op) \
	op(EConcertIncludeAllSubobjectsType::None) \
	op(EConcertIncludeAllSubobjectsType::AllComponents) \
	op(EConcertIncludeAllSubobjectsType::AllSubobjects) 

enum class EConcertIncludeAllSubobjectsType : uint8;
template<> struct TIsUEnumClass<EConcertIncludeAllSubobjectsType> { enum { Value = true }; };
template<> CONCERTCLIENTSHAREDSLATE_API UEnum* StaticEnum<EConcertIncludeAllSubobjectsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
