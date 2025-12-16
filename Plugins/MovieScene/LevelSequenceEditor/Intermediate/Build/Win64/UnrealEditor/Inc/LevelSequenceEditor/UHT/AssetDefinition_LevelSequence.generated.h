// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools/AssetDefinition_LevelSequence.h"

#ifdef LEVELSEQUENCEEDITOR_AssetDefinition_LevelSequence_generated_h
#error "AssetDefinition_LevelSequence.generated.h already included, missing '#pragma once' in AssetDefinition_LevelSequence.h"
#endif
#define LEVELSEQUENCEEDITOR_AssetDefinition_LevelSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetDefinition_LevelSequence *******************************************
struct Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LevelSequence_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_LevelSequence(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_LevelSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_LevelSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_LevelSequence, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_UAssetDefinition_LevelSequence_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_LevelSequence)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCEEDITOR_API UAssetDefinition_LevelSequence(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_LevelSequence(UAssetDefinition_LevelSequence&&) = delete; \
	UAssetDefinition_LevelSequence(const UAssetDefinition_LevelSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, UAssetDefinition_LevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_LevelSequence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_LevelSequence) \
	LEVELSEQUENCEEDITOR_API virtual ~UAssetDefinition_LevelSequence();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_LevelSequence;

// ********** End Class UAssetDefinition_LevelSequence *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_AssetTools_AssetDefinition_LevelSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
