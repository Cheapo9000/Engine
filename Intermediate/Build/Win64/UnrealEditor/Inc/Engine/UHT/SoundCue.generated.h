// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundCue.h"

#ifdef ENGINE_SoundCue_generated_h
#error "SoundCue.generated.h already included, missing '#pragma once' in SoundCue.h"
#endif
#define ENGINE_SoundCue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundNodeEditorData **********************************************
struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundNodeEditorData;
// ********** End ScriptStruct FSoundNodeEditorData ************************************************

// ********** Begin Class USoundCue ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USoundCue, ENGINE_API)


struct Z_Construct_UClass_USoundCue_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct ::Z_Construct_UClass_USoundCue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundCue_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundCue_NoRegister) \
	DECLARE_SERIALIZER(USoundCue) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCue(USoundCue&&) = delete; \
	USoundCue(const USoundCue&) = delete; \
	ENGINE_API virtual ~USoundCue();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCue;

// ********** End Class USoundCue ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
