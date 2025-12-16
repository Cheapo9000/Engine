// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCollection.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCollection_generated_h
#error "MetaHumanCollection.generated.h already included, missing '#pragma once' in MetaHumanCollection.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCollectionBuiltData *************************************
struct Z_Construct_UScriptStruct_FMetaHumanCollectionBuiltData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCollectionBuiltData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanCollectionBuiltData;
// ********** End ScriptStruct FMetaHumanCollectionBuiltData ***************************************

// ********** Begin Class UMetaHumanCollection *****************************************************
struct Z_Construct_UClass_UMetaHumanCollection_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCollection_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCollection(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCollection, UMetaHumanCharacterPalette, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCollection_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCollection)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCollection(UMetaHumanCollection&&) = delete; \
	UMetaHumanCollection(const UMetaHumanCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCollection) \
	NO_API virtual ~UMetaHumanCollection();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_73_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCollection;

// ********** End Class UMetaHumanCollection *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCollection_h

// ********** Begin Enum EMetaHumanCharacterUnpackPathMode *****************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EMETAHUMANCHARACTERUNPACKPATHMODE(op) \
	op(EMetaHumanCharacterUnpackPathMode::SubfolderNamedForPalette) \
	op(EMetaHumanCharacterUnpackPathMode::Relative) \
	op(EMetaHumanCharacterUnpackPathMode::Absolute) 

enum class EMetaHumanCharacterUnpackPathMode : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterUnpackPathMode> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterUnpackPathMode>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EMetaHumanCharacterUnpackPathMode *******************************************

// ********** Begin Enum EMetaHumanCharacterAssetsUnpackResult *************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EMETAHUMANCHARACTERASSETSUNPACKRESULT(op) \
	op(EMetaHumanCharacterAssetsUnpackResult::Succeeded) \
	op(EMetaHumanCharacterAssetsUnpackResult::Failed) 

enum class EMetaHumanCharacterAssetsUnpackResult : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterAssetsUnpackResult> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterAssetsUnpackResult>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EMetaHumanCharacterAssetsUnpackResult ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
