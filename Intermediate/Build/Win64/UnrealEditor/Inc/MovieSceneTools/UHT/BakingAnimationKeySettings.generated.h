// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakingAnimationKeySettings.h"

#ifdef MOVIESCENETOOLS_BakingAnimationKeySettings_generated_h
#error "BakingAnimationKeySettings.generated.h already included, missing '#pragma once' in BakingAnimationKeySettings.h"
#endif
#define MOVIESCENETOOLS_BakingAnimationKeySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBakingAnimationKeySettings ***************************************
struct Z_Construct_UScriptStruct_FBakingAnimationKeySettings_Statics;
#define FID_Engine_Source_Editor_MovieSceneTools_Public_BakingAnimationKeySettings_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBakingAnimationKeySettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


struct FBakingAnimationKeySettings;
// ********** End ScriptStruct FBakingAnimationKeySettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_BakingAnimationKeySettings_h

// ********** Begin Enum EBakingKeySettings ********************************************************
#define FOREACH_ENUM_EBAKINGKEYSETTINGS(op) \
	op(EBakingKeySettings::KeysOnly) \
	op(EBakingKeySettings::AllFrames) 

enum class EBakingKeySettings : uint8;
template<> struct TIsUEnumClass<EBakingKeySettings> { enum { Value = true }; };
template<> MOVIESCENETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBakingKeySettings>();
// ********** End Enum EBakingKeySettings **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
