// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequenceLevelSequenceLink.h"

#ifdef LEVELSEQUENCE_AnimSequenceLevelSequenceLink_generated_h
#error "AnimSequenceLevelSequenceLink.generated.h already included, missing '#pragma once' in AnimSequenceLevelSequenceLink.h"
#endif
#define LEVELSEQUENCE_AnimSequenceLevelSequenceLink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceLevelSequenceLink *******************************************
struct Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceLevelSequenceLink(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceLevelSequenceLink, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceLevelSequenceLink)


#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API UAnimSequenceLevelSequenceLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceLevelSequenceLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, UAnimSequenceLevelSequenceLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceLevelSequenceLink); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceLevelSequenceLink(UAnimSequenceLevelSequenceLink&&) = delete; \
	UAnimSequenceLevelSequenceLink(const UAnimSequenceLevelSequenceLink&) = delete; \
	LEVELSEQUENCE_API virtual ~UAnimSequenceLevelSequenceLink();


#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_10_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceLevelSequenceLink;

// ********** End Class UAnimSequenceLevelSequenceLink *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
