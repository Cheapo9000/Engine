// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterIdentity.h"

#ifdef METAHUMANCORETECHLIB_MetaHumanCharacterIdentity_generated_h
#error "MetaHumanCharacterIdentity.generated.h already included, missing '#pragma once' in MetaHumanCharacterIdentity.h"
#endif
#define METAHUMANCORETECHLIB_MetaHumanCharacterIdentity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFitToTargetOptions ***********************************************
struct Z_Construct_UScriptStruct_FFitToTargetOptions_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanCharacterIdentity_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFitToTargetOptions_Statics; \
	METAHUMANCORETECHLIB_API static class UScriptStruct* StaticStruct();


struct FFitToTargetOptions;
// ********** End ScriptStruct FFitToTargetOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCoreTechLib_Source_MetaHumanCoreTechLib_Public_MetaHumanCharacterIdentity_h

// ********** Begin Enum EAlignmentOptions *********************************************************
#define FOREACH_ENUM_EALIGNMENTOPTIONS(op) \
	op(EAlignmentOptions::None) \
	op(EAlignmentOptions::Translation) \
	op(EAlignmentOptions::RotationTranslation) \
	op(EAlignmentOptions::ScalingTranslation) \
	op(EAlignmentOptions::ScalingRotationTranslation) 

enum class EAlignmentOptions : uint8;
template<> struct TIsUEnumClass<EAlignmentOptions> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlignmentOptions>();
// ********** End Enum EAlignmentOptions ***********************************************************

// ********** Begin Enum EBlendOptions *************************************************************
#define FOREACH_ENUM_EBLENDOPTIONS(op) \
	op(EBlendOptions::Proportions) \
	op(EBlendOptions::Features) \
	op(EBlendOptions::Both) 

enum class EBlendOptions : uint8;
template<> struct TIsUEnumClass<EBlendOptions> { enum { Value = true }; };
template<> METAHUMANCORETECHLIB_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendOptions>();
// ********** End Enum EBlendOptions ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
