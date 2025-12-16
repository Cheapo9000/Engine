// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterPalette.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCharacterPalette_generated_h
#error "MetaHumanCharacterPalette.generated.h already included, missing '#pragma once' in MetaHumanCharacterPalette.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCharacterPalette_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanWardrobeItem;
struct FMetaHumanPaletteItemKey;

// ********** Begin ScriptStruct FMetaHumanPipelineBuiltData ***************************************
struct Z_Construct_UScriptStruct_FMetaHumanPipelineBuiltData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanPipelineBuiltData_Statics; \
	METAHUMANCHARACTERPALETTE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanPipelineBuiltData;
// ********** End ScriptStruct FMetaHumanPipelineBuiltData *****************************************

// ********** Begin ScriptStruct FMetaHumanPaletteBuiltData ****************************************
struct Z_Construct_UScriptStruct_FMetaHumanPaletteBuiltData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanPaletteBuiltData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanPaletteBuiltData;
// ********** End ScriptStruct FMetaHumanPaletteBuiltData ******************************************

// ********** Begin ScriptStruct FMetaHumanPaletteBuildCacheEntry **********************************
struct Z_Construct_UScriptStruct_FMetaHumanPaletteBuildCacheEntry_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanPaletteBuildCacheEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanPaletteBuildCacheEntry;
// ********** End ScriptStruct FMetaHumanPaletteBuildCacheEntry ************************************

// ********** Begin Class UMetaHumanCharacterPalette ***********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execTryAddItemFromWardrobeItem);
#else // WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMetaHumanCharacterPalette_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCharacterPalette_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterPalette(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterPalette_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterPalette_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterPalette, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCharacterPalette_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterPalette)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterPalette(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterPalette(UMetaHumanCharacterPalette&&) = delete; \
	UMetaHumanCharacterPalette(const UMetaHumanCharacterPalette&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterPalette); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterPalette); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterPalette) \
	NO_API virtual ~UMetaHumanCharacterPalette();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_111_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterPalette;

// ********** End Class UMetaHumanCharacterPalette *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPalette_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
