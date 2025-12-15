// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/DialogueWave.h"

#ifdef ENGINE_DialogueWave_generated_h
#error "DialogueWave.generated.h already included, missing '#pragma once' in DialogueWave.h"
#endif
#define ENGINE_DialogueWave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDialogueContextMapping *******************************************
struct Z_Construct_UScriptStruct_FDialogueContextMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDialogueContextMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDialogueContextMapping;
// ********** End ScriptStruct FDialogueContextMapping *********************************************

// ********** Begin Class UDialogueWave ************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDialogueWave, ENGINE_API)


struct Z_Construct_UClass_UDialogueWave_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWave(); \
	friend struct ::Z_Construct_UClass_UDialogueWave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDialogueWave_NoRegister(); \
public: \
	DECLARE_CLASS2(UDialogueWave, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDialogueWave_NoRegister) \
	DECLARE_SERIALIZER(UDialogueWave) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDialogueWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDialogueWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWave); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDialogueWave(UDialogueWave&&) = delete; \
	UDialogueWave(const UDialogueWave&) = delete; \
	ENGINE_API virtual ~UDialogueWave();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_82_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDialogueWave;

// ********** End Class UDialogueWave **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
