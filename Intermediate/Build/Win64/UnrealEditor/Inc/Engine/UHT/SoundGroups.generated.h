// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundGroups.h"

#ifdef ENGINE_SoundGroups_generated_h
#error "SoundGroups.generated.h already included, missing '#pragma once' in SoundGroups.h"
#endif
#define ENGINE_SoundGroups_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundGroup *******************************************************
struct Z_Construct_UScriptStruct_FSoundGroup_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundGroup;
// ********** End ScriptStruct FSoundGroup *********************************************************

// ********** Begin Class USoundGroups *************************************************************
struct Z_Construct_UClass_USoundGroups_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundGroups_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUSoundGroups(); \
	friend struct ::Z_Construct_UClass_USoundGroups_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundGroups_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundGroups, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundGroups_NoRegister) \
	DECLARE_SERIALIZER(USoundGroups)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundGroups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundGroups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundGroups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundGroups); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundGroups(USoundGroups&&) = delete; \
	USoundGroups(const USoundGroups&) = delete; \
	ENGINE_API virtual ~USoundGroups();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundGroups;

// ********** End Class USoundGroups ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundGroups_h

// ********** Begin Enum ESoundGroup ***************************************************************
#define FOREACH_ENUM_ESOUNDGROUP(op) \
	op(SOUNDGROUP_Default) \
	op(SOUNDGROUP_Effects) \
	op(SOUNDGROUP_UI) \
	op(SOUNDGROUP_Music) \
	op(SOUNDGROUP_Voice) \
	op(SOUNDGROUP_GameSoundGroup1) \
	op(SOUNDGROUP_GameSoundGroup2) \
	op(SOUNDGROUP_GameSoundGroup3) \
	op(SOUNDGROUP_GameSoundGroup4) \
	op(SOUNDGROUP_GameSoundGroup5) \
	op(SOUNDGROUP_GameSoundGroup6) \
	op(SOUNDGROUP_GameSoundGroup7) \
	op(SOUNDGROUP_GameSoundGroup8) \
	op(SOUNDGROUP_GameSoundGroup9) \
	op(SOUNDGROUP_GameSoundGroup10) \
	op(SOUNDGROUP_GameSoundGroup11) \
	op(SOUNDGROUP_GameSoundGroup12) \
	op(SOUNDGROUP_GameSoundGroup13) \
	op(SOUNDGROUP_GameSoundGroup14) \
	op(SOUNDGROUP_GameSoundGroup15) \
	op(SOUNDGROUP_GameSoundGroup16) \
	op(SOUNDGROUP_GameSoundGroup17) \
	op(SOUNDGROUP_GameSoundGroup18) \
	op(SOUNDGROUP_GameSoundGroup19) \
	op(SOUNDGROUP_GameSoundGroup20) 

enum ESoundGroup : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundGroup>();
// ********** End Enum ESoundGroup *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
