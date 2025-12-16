// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequenceShared.h"

#ifdef AVALANCHESEQUENCE_AvaSequenceShared_generated_h
#error "AvaSequenceShared.generated.h already included, missing '#pragma once' in AvaSequenceShared.h"
#endif
#define AVALANCHESEQUENCE_AvaSequenceShared_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaSequenceTime **************************************************
struct Z_Construct_UScriptStruct_FAvaSequenceTime_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaSequenceTime_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


struct FAvaSequenceTime;
// ********** End ScriptStruct FAvaSequenceTime ****************************************************

// ********** Begin ScriptStruct FAvaSequencePlayAdvancedSettings **********************************
struct Z_Construct_UScriptStruct_FAvaSequencePlayAdvancedSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaSequencePlayAdvancedSettings_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


struct FAvaSequencePlayAdvancedSettings;
// ********** End ScriptStruct FAvaSequencePlayAdvancedSettings ************************************

// ********** Begin ScriptStruct FAvaSequencePlayParams ********************************************
struct Z_Construct_UScriptStruct_FAvaSequencePlayParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaSequencePlayParams_Statics; \
	AVALANCHESEQUENCE_API static class UScriptStruct* StaticStruct();


struct FAvaSequencePlayParams;
// ********** End ScriptStruct FAvaSequencePlayParams **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceShared_h

// ********** Begin Enum EAvaSequenceActionType ****************************************************
#define FOREACH_ENUM_EAVASEQUENCEACTIONTYPE(op) \
	op(EAvaSequenceActionType::None) \
	op(EAvaSequenceActionType::Play) \
	op(EAvaSequenceActionType::Continue) \
	op(EAvaSequenceActionType::Pause) \
	op(EAvaSequenceActionType::Stop) 

enum class EAvaSequenceActionType : uint8;
template<> struct TIsUEnumClass<EAvaSequenceActionType> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequenceActionType>();
// ********** End Enum EAvaSequenceActionType ******************************************************

// ********** Begin Enum EAvaSequencePlayMode ******************************************************
#define FOREACH_ENUM_EAVASEQUENCEPLAYMODE(op) \
	op(EAvaSequencePlayMode::Forward) \
	op(EAvaSequencePlayMode::Reverse) 

enum class EAvaSequencePlayMode : uint8;
template<> struct TIsUEnumClass<EAvaSequencePlayMode> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequencePlayMode>();
// ********** End Enum EAvaSequencePlayMode ********************************************************

// ********** Begin Enum EAvaSequenceTimeType ******************************************************
#define FOREACH_ENUM_EAVASEQUENCETIMETYPE(op) \
	op(EAvaSequenceTimeType::None) \
	op(EAvaSequenceTimeType::Frame) \
	op(EAvaSequenceTimeType::Seconds) \
	op(EAvaSequenceTimeType::Mark) 

enum class EAvaSequenceTimeType : uint8;
template<> struct TIsUEnumClass<EAvaSequenceTimeType> { enum { Value = true }; };
template<> AVALANCHESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequenceTimeType>();
// ********** End Enum EAvaSequenceTimeType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
