// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequenceShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCE_AvaSequenceShared_generated_h
#error "AvaSequenceShared.generated.h already included, missing '#pragma once' in AvaSequenceShared.h"
#endif
#define AVALANCHESEQUENCE_AvaSequenceShared_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaSequenceTime_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESEQUENCE_API UScriptStruct* StaticStruct<struct FAvaSequenceTime>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaSequencePlayAdvancedSettings_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESEQUENCE_API UScriptStruct* StaticStruct<struct FAvaSequencePlayAdvancedSettings>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaSequencePlayParams_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


template<> AVALANCHESEQUENCE_API UScriptStruct* StaticStruct<struct FAvaSequencePlayParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h


#define FOREACH_ENUM_EAVASEQUENCEPLAYMODE(op) \
	op(EAvaSequencePlayMode::Forward) \
	op(EAvaSequencePlayMode::Reverse) 

enum class EAvaSequencePlayMode : uint8;
template<> struct TIsUEnumClass<EAvaSequencePlayMode> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_API UEnum* StaticEnum<EAvaSequencePlayMode>();

#define FOREACH_ENUM_EAVASEQUENCETIMETYPE(op) \
	op(EAvaSequenceTimeType::None) \
	op(EAvaSequenceTimeType::Frame) \
	op(EAvaSequenceTimeType::Seconds) \
	op(EAvaSequenceTimeType::Mark) 

enum class EAvaSequenceTimeType : uint8;
template<> struct TIsUEnumClass<EAvaSequenceTimeType> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_API UEnum* StaticEnum<EAvaSequenceTimeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
