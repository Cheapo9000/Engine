// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceShotMetaDataLibrary.h"

#ifdef LEVELSEQUENCE_LevelSequenceShotMetaDataLibrary_generated_h
#error "LevelSequenceShotMetaDataLibrary.generated.h already included, missing '#pragma once' in LevelSequenceShotMetaDataLibrary.h"
#endif
#define LEVELSEQUENCE_LevelSequenceShotMetaDataLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FAssetData;

// ********** Begin Class ULevelSequenceShotMetaDataLibrary ****************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasFavoriteRatingByAssetData); \
	DECLARE_FUNCTION(execHasIsSubSequenceByAssetData); \
	DECLARE_FUNCTION(execHasIsRecordedByAssetData); \
	DECLARE_FUNCTION(execHasIsFlaggedByAssetData); \
	DECLARE_FUNCTION(execHasIsNoGoodByAssetData); \
	DECLARE_FUNCTION(execGetFavoriteRatingByAssetData); \
	DECLARE_FUNCTION(execGetIsSubSequenceByAssetData); \
	DECLARE_FUNCTION(execGetIsRecordedByAssetData); \
	DECLARE_FUNCTION(execGetIsFlaggedByAssetData); \
	DECLARE_FUNCTION(execGetIsNoGoodByAssetData); \
	DECLARE_FUNCTION(execGetFavoriteRatingAssetTag); \
	DECLARE_FUNCTION(execGetIsSubSequenceAssetTag); \
	DECLARE_FUNCTION(execGetIsRecordedAssetTag); \
	DECLARE_FUNCTION(execGetIsFlaggedAssetTag); \
	DECLARE_FUNCTION(execGetIsNoGoodAssetTag); \
	DECLARE_FUNCTION(execClearFavoriteRating); \
	DECLARE_FUNCTION(execClearIsSubSequence); \
	DECLARE_FUNCTION(execClearIsRecorded); \
	DECLARE_FUNCTION(execClearIsFlagged); \
	DECLARE_FUNCTION(execClearIsNoGood); \
	DECLARE_FUNCTION(execSetFavoriteRating); \
	DECLARE_FUNCTION(execSetIsSubSequence); \
	DECLARE_FUNCTION(execSetIsRecorded); \
	DECLARE_FUNCTION(execSetIsFlagged); \
	DECLARE_FUNCTION(execSetIsNoGood); \
	DECLARE_FUNCTION(execHasFavoriteRating); \
	DECLARE_FUNCTION(execHasIsSubSequence); \
	DECLARE_FUNCTION(execHasIsRecorded); \
	DECLARE_FUNCTION(execHasIsFlagged); \
	DECLARE_FUNCTION(execHasIsNoGood); \
	DECLARE_FUNCTION(execGetFavoriteRating); \
	DECLARE_FUNCTION(execGetIsSubSequence); \
	DECLARE_FUNCTION(execGetIsRecorded); \
	DECLARE_FUNCTION(execGetIsFlagged); \
	DECLARE_FUNCTION(execGetIsNoGood);


struct Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceShotMetaDataLibrary(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceShotMetaDataLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceShotMetaDataLibrary)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequenceShotMetaDataLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceShotMetaDataLibrary(ULevelSequenceShotMetaDataLibrary&&) = delete; \
	ULevelSequenceShotMetaDataLibrary(const ULevelSequenceShotMetaDataLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceShotMetaDataLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceShotMetaDataLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceShotMetaDataLibrary) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceShotMetaDataLibrary();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_18_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceShotMetaDataLibrary;

// ********** End Class ULevelSequenceShotMetaDataLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceShotMetaDataLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
