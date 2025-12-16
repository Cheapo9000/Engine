// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterMakeup.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterMakeup_generated_h
#error "MetaHumanCharacterMakeup.generated.h already included, missing '#pragma once' in MetaHumanCharacterMakeup.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterMakeup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterFoundationMakeupProperties *********************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterFoundationMakeupProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterFoundationMakeupProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterFoundationMakeupProperties;
// ********** End ScriptStruct FMetaHumanCharacterFoundationMakeupProperties ***********************

// ********** Begin ScriptStruct FMetaHumanCharacterEyeMakeupProperties ****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyeMakeupProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyeMakeupProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyeMakeupProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyeMakeupProperties ******************************

// ********** Begin ScriptStruct FMetaHumanCharacterBlushMakeupProperties **************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterBlushMakeupProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterBlushMakeupProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterBlushMakeupProperties;
// ********** End ScriptStruct FMetaHumanCharacterBlushMakeupProperties ****************************

// ********** Begin ScriptStruct FMetaHumanCharacterLipsMakeupProperties ***************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterLipsMakeupProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterLipsMakeupProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterLipsMakeupProperties;
// ********** End ScriptStruct FMetaHumanCharacterLipsMakeupProperties *****************************

// ********** Begin ScriptStruct FMetaHumanCharacterMakeupSettings *********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterMakeupSettings_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterMakeupSettings_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterMakeupSettings;
// ********** End ScriptStruct FMetaHumanCharacterMakeupSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMakeup_h

// ********** Begin Enum EMetaHumanCharacterEyeMakeupType ******************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTEREYEMAKEUPTYPE(op) \
	op(EMetaHumanCharacterEyeMakeupType::None) \
	op(EMetaHumanCharacterEyeMakeupType::ThinLiner) \
	op(EMetaHumanCharacterEyeMakeupType::SoftSmokey) \
	op(EMetaHumanCharacterEyeMakeupType::FullThinLiner) \
	op(EMetaHumanCharacterEyeMakeupType::CatEye) \
	op(EMetaHumanCharacterEyeMakeupType::PandaSmudge) \
	op(EMetaHumanCharacterEyeMakeupType::DramaticSmudge) \
	op(EMetaHumanCharacterEyeMakeupType::DoubleMod) \
	op(EMetaHumanCharacterEyeMakeupType::ClassicBar) \
	op(EMetaHumanCharacterEyeMakeupType::Count) 

enum class EMetaHumanCharacterEyeMakeupType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEyeMakeupType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEyeMakeupType>();
// ********** End Enum EMetaHumanCharacterEyeMakeupType ********************************************

// ********** Begin Enum EMetaHumanCharacterBlushMakeupType ****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERBLUSHMAKEUPTYPE(op) \
	op(EMetaHumanCharacterBlushMakeupType::None) \
	op(EMetaHumanCharacterBlushMakeupType::Angled) \
	op(EMetaHumanCharacterBlushMakeupType::Apple) \
	op(EMetaHumanCharacterBlushMakeupType::LowSweep) \
	op(EMetaHumanCharacterBlushMakeupType::HighCurve) \
	op(EMetaHumanCharacterBlushMakeupType::Count) 

enum class EMetaHumanCharacterBlushMakeupType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterBlushMakeupType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterBlushMakeupType>();
// ********** End Enum EMetaHumanCharacterBlushMakeupType ******************************************

// ********** Begin Enum EMetaHumanCharacterLipsMakeupType *****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERLIPSMAKEUPTYPE(op) \
	op(EMetaHumanCharacterLipsMakeupType::None) \
	op(EMetaHumanCharacterLipsMakeupType::Natural) \
	op(EMetaHumanCharacterLipsMakeupType::Hollywood) \
	op(EMetaHumanCharacterLipsMakeupType::Cupid) \
	op(EMetaHumanCharacterLipsMakeupType::Count) 

enum class EMetaHumanCharacterLipsMakeupType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterLipsMakeupType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterLipsMakeupType>();
// ********** End Enum EMetaHumanCharacterLipsMakeupType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
