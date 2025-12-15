// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceAnimSequenceLink.h"

#ifdef LEVELSEQUENCE_LevelSequenceAnimSequenceLink_generated_h
#error "LevelSequenceAnimSequenceLink.generated.h already included, missing '#pragma once' in LevelSequenceAnimSequenceLink.h"
#endif
#define LEVELSEQUENCE_LevelSequenceAnimSequenceLink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelSequenceAnimSequenceLinkItem ********************************
struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics;
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FLevelSequenceAnimSequenceLinkItem;
// ********** End ScriptStruct FLevelSequenceAnimSequenceLinkItem **********************************

// ********** Begin Class ULevelSequenceAnimSequenceLink *******************************************
struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_115_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceAnimSequenceLink(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceAnimSequenceLink, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceAnimSequenceLink)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequenceAnimSequenceLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceAnimSequenceLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceAnimSequenceLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceAnimSequenceLink); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceAnimSequenceLink(ULevelSequenceAnimSequenceLink&&) = delete; \
	ULevelSequenceAnimSequenceLink(const ULevelSequenceAnimSequenceLink&) = delete; \
	LEVELSEQUENCE_API virtual ~ULevelSequenceAnimSequenceLink();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_112_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_115_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceAnimSequenceLink;

// ********** End Class ULevelSequenceAnimSequenceLink *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
