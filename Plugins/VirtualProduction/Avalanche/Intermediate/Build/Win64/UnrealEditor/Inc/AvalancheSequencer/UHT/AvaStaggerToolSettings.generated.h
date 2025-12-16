// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaggerTool/AvaStaggerToolSettings.h"

#ifdef AVALANCHESEQUENCER_AvaStaggerToolSettings_generated_h
#error "AvaStaggerToolSettings.generated.h already included, missing '#pragma once' in AvaStaggerToolSettings.h"
#endif
#define AVALANCHESEQUENCER_AvaStaggerToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaSequencerStaggerOptions ***************************************
struct Z_Construct_UScriptStruct_FAvaSequencerStaggerOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaSequencerStaggerOptions_Statics; \
	AVALANCHESEQUENCER_API static class UScriptStruct* StaticStruct();


struct FAvaSequencerStaggerOptions;
// ********** End ScriptStruct FAvaSequencerStaggerOptions *****************************************

// ********** Begin Class UAvaSequencerStaggerSettings *********************************************
struct Z_Construct_UClass_UAvaSequencerStaggerSettings_Statics;
AVALANCHESEQUENCER_API UClass* Z_Construct_UClass_UAvaSequencerStaggerSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequencerStaggerSettings(); \
	friend struct ::Z_Construct_UClass_UAvaSequencerStaggerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESEQUENCER_API UClass* ::Z_Construct_UClass_UAvaSequencerStaggerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSequencerStaggerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSequencer"), Z_Construct_UClass_UAvaSequencerStaggerSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaSequencerStaggerSettings)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_120_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSequencerStaggerSettings(UAvaSequencerStaggerSettings&&) = delete; \
	UAvaSequencerStaggerSettings(const UAvaSequencerStaggerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSequencerStaggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencerStaggerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSequencerStaggerSettings) \
	NO_API virtual ~UAvaSequencerStaggerSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_117_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSequencerStaggerSettings;

// ********** End Class UAvaSequencerStaggerSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequencer_Private_StaggerTool_AvaStaggerToolSettings_h

// ********** Begin Enum EAvaSequencerStaggerStartPosition *****************************************
#define FOREACH_ENUM_EAVASEQUENCERSTAGGERSTARTPOSITION(op) \
	op(EAvaSequencerStaggerStartPosition::FirstSelected) \
	op(EAvaSequencerStaggerStartPosition::FirstInTimeline) \
	op(EAvaSequencerStaggerStartPosition::Playhead) \
	op(EAvaSequencerStaggerStartPosition::PlaybackRange) \
	op(EAvaSequencerStaggerStartPosition::SelectionRange) \
	op(EAvaSequencerStaggerStartPosition::Default) 

enum class EAvaSequencerStaggerStartPosition : uint8;
template<> struct TIsUEnumClass<EAvaSequencerStaggerStartPosition> { enum { Value = true }; };
template<> AVALANCHESEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequencerStaggerStartPosition>();
// ********** End Enum EAvaSequencerStaggerStartPosition *******************************************

// ********** Begin Enum EAvaSequencerStaggerDistribution ******************************************
#define FOREACH_ENUM_EAVASEQUENCERSTAGGERDISTRIBUTION(op) \
	op(EAvaSequencerStaggerDistribution::Increment) \
	op(EAvaSequencerStaggerDistribution::Range) \
	op(EAvaSequencerStaggerDistribution::Random) \
	op(EAvaSequencerStaggerDistribution::Default) 

enum class EAvaSequencerStaggerDistribution : uint8;
template<> struct TIsUEnumClass<EAvaSequencerStaggerDistribution> { enum { Value = true }; };
template<> AVALANCHESEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequencerStaggerDistribution>();
// ********** End Enum EAvaSequencerStaggerDistribution ********************************************

// ********** Begin Enum EAvaSequencerStaggerRange *************************************************
#define FOREACH_ENUM_EAVASEQUENCERSTAGGERRANGE(op) \
	op(EAvaSequencerStaggerRange::Playback) \
	op(EAvaSequencerStaggerRange::Selection) \
	op(EAvaSequencerStaggerRange::Custom) \
	op(EAvaSequencerStaggerRange::Default) 

enum class EAvaSequencerStaggerRange : uint8;
template<> struct TIsUEnumClass<EAvaSequencerStaggerRange> { enum { Value = true }; };
template<> AVALANCHESEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSequencerStaggerRange>();
// ********** End Enum EAvaSequencerStaggerRange ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
