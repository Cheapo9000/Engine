// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterAssemblySettings.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterAssemblySettings_generated_h
#error "MetaHumanCharacterAssemblySettings.generated.h already included, missing '#pragma once' in MetaHumanCharacterAssemblySettings.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterAssemblySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterAssemblySettings *******************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterAssemblySettings_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterAssemblySettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterAssemblySettings_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterAssemblySettings;
// ********** End ScriptStruct FMetaHumanCharacterAssemblySettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterAssemblySettings_h

// ********** Begin Enum EMetaHumanDefaultPipelineType *********************************************
#define FOREACH_ENUM_EMETAHUMANDEFAULTPIPELINETYPE(op) \
	op(EMetaHumanDefaultPipelineType::Cinematic) \
	op(EMetaHumanDefaultPipelineType::Optimized) \
	op(EMetaHumanDefaultPipelineType::UEFN) \
	op(EMetaHumanDefaultPipelineType::DCC) 

enum class EMetaHumanDefaultPipelineType : uint8;
template<> struct TIsUEnumClass<EMetaHumanDefaultPipelineType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanDefaultPipelineType>();
// ********** End Enum EMetaHumanDefaultPipelineType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
