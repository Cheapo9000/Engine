// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterMaterialSet.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterMaterialSet_generated_h
#error "MetaHumanCharacterMaterialSet.generated.h already included, missing '#pragma once' in MetaHumanCharacterMaterialSet.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterMaterialSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterFaceMaterialSet ********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterFaceMaterialSet_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMaterialSet_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterFaceMaterialSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterFaceMaterialSet;
// ********** End ScriptStruct FMetaHumanCharacterFaceMaterialSet **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterMaterialSet_h

// ********** Begin Enum EMetaHumanCharacterSkinMaterialSlot ***************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERSKINMATERIALSLOT(op) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD0) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD1) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD2) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD3) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD4) \
	op(EMetaHumanCharacterSkinMaterialSlot::LOD5to7) \
	op(EMetaHumanCharacterSkinMaterialSlot::Count) 

enum class EMetaHumanCharacterSkinMaterialSlot : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterSkinMaterialSlot> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterSkinMaterialSlot>();
// ********** End Enum EMetaHumanCharacterSkinMaterialSlot *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
