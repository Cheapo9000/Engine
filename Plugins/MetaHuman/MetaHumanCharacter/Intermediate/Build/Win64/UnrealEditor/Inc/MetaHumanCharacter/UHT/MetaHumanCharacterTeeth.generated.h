// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterTeeth.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterTeeth_generated_h
#error "MetaHumanCharacterTeeth.generated.h already included, missing '#pragma once' in MetaHumanCharacterTeeth.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterTeeth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterTeethProperties ********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterTeethProperties_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterTeeth_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterTeethProperties_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterTeethProperties;
// ********** End ScriptStruct FMetaHumanCharacterTeethProperties **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterTeeth_h

// ********** Begin Enum EMetaHumanCharacterTeethType **********************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERTEETHTYPE(op) \
	op(EMetaHumanCharacterTeethType::None) \
	op(EMetaHumanCharacterTeethType::Variant_01) \
	op(EMetaHumanCharacterTeethType::Variant_02) \
	op(EMetaHumanCharacterTeethType::Variant_03) \
	op(EMetaHumanCharacterTeethType::Variant_04) \
	op(EMetaHumanCharacterTeethType::Variant_05) \
	op(EMetaHumanCharacterTeethType::Variant_06) \
	op(EMetaHumanCharacterTeethType::Variant_07) \
	op(EMetaHumanCharacterTeethType::Variant_08) \
	op(EMetaHumanCharacterTeethType::Count) 

enum class EMetaHumanCharacterTeethType : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterTeethType> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterTeethType>();
// ********** End Enum EMetaHumanCharacterTeethType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
