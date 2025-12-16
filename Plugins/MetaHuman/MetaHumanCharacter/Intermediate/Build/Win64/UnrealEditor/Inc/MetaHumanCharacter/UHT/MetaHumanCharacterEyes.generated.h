// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEyes.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterEyes_generated_h
#error "MetaHumanCharacterEyes.generated.h already included, missing '#pragma once' in MetaHumanCharacterEyes.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterEyes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterEyeIrisProperties ******************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyeIrisProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyeIrisProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyeIrisProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyeIrisProperties ********************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyePupilProperties *****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyePupilProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyePupilProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyePupilProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyePupilProperties *******************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyeScleraProperties ****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyeScleraProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyeScleraProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyeScleraProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyeScleraProperties ******************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyeCorneaProperties ****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyeCorneaProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyeCorneaProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyeCorneaProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyeCorneaProperties ******************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyeProperties **********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyeProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_222_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyeProperties_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyeProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyeProperties ************************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyesSettings ***********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyesSettings_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyesSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyesSettings;
// ********** End ScriptStruct FMetaHumanCharacterEyesSettings *************************************

// ********** Begin ScriptStruct FMetaHumanCharacterEyelashesProperties ****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEyelashesProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEyelashesProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEyelashesProperties;
// ********** End ScriptStruct FMetaHumanCharacterEyelashesProperties ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterEyes_h

// ********** Begin Enum EMetaHumanCharacterEyesBlendMethod ****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTEREYESBLENDMETHOD(op) \
	op(EMetaHumanCharacterEyesBlendMethod::Radial) \
	op(EMetaHumanCharacterEyesBlendMethod::Structural) 

enum class EMetaHumanCharacterEyesBlendMethod : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEyesBlendMethod> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEyesBlendMethod>();
// ********** End Enum EMetaHumanCharacterEyesBlendMethod ******************************************

// ********** Begin Enum EMetaHumanCharacterEyesIrisPattern ****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTEREYESIRISPATTERN(op) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris001) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris002) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris003) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris004) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris005) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris006) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris007) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris008) \
	op(EMetaHumanCharacterEyesIrisPattern::Iris009) \
	op(EMetaHumanCharacterEyesIrisPattern::Count) 

enum class EMetaHumanCharacterEyesIrisPattern : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEyesIrisPattern> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEyesIrisPattern>();
// ********** End Enum EMetaHumanCharacterEyesIrisPattern ******************************************

// ********** Begin Enum EMetaHumanCharacterEyelashesType ******************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTEREYELASHESTYPE(op) \
	op(EMetaHumanCharacterEyelashesType::None) \
	op(EMetaHumanCharacterEyelashesType::Sparse) \
	op(EMetaHumanCharacterEyelashesType::ShortFine) \
	op(EMetaHumanCharacterEyelashesType::Thin) \
	op(EMetaHumanCharacterEyelashesType::SlightCurl) \
	op(EMetaHumanCharacterEyelashesType::LongCurl) \
	op(EMetaHumanCharacterEyelashesType::ThickCurl) \
	op(EMetaHumanCharacterEyelashesType::Count) 

enum class EMetaHumanCharacterEyelashesType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEyelashesType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEyelashesType>();
// ********** End Enum EMetaHumanCharacterEyelashesType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
