// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueDistanceCrossfade.h"

#ifdef SOUNDCUETEMPLATES_SoundCueDistanceCrossfade_generated_h
#error "SoundCueDistanceCrossfade.generated.h already included, missing '#pragma once' in SoundCueDistanceCrossfade.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueDistanceCrossfade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundCueCrossfadeInfo ********************************************
struct Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics;
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics; \
	SOUNDCUETEMPLATES_API static class UScriptStruct* StaticStruct();


struct FSoundCueCrossfadeInfo;
// ********** End ScriptStruct FSoundCueCrossfadeInfo **********************************************

// ********** Begin Class USoundCueDistanceCrossfade ***********************************************
struct Z_Construct_UClass_USoundCueDistanceCrossfade_Statics;
SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueDistanceCrossfade_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueDistanceCrossfade(); \
	friend struct ::Z_Construct_UClass_USoundCueDistanceCrossfade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDCUETEMPLATES_API UClass* ::Z_Construct_UClass_USoundCueDistanceCrossfade_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueDistanceCrossfade, USoundCueTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), Z_Construct_UClass_USoundCueDistanceCrossfade_NoRegister) \
	DECLARE_SERIALIZER(USoundCueDistanceCrossfade)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDCUETEMPLATES_API USoundCueDistanceCrossfade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueDistanceCrossfade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDCUETEMPLATES_API, USoundCueDistanceCrossfade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueDistanceCrossfade); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueDistanceCrossfade(USoundCueDistanceCrossfade&&) = delete; \
	USoundCueDistanceCrossfade(const USoundCueDistanceCrossfade&) = delete; \
	SOUNDCUETEMPLATES_API virtual ~USoundCueDistanceCrossfade();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueDistanceCrossfade;

// ********** End Class USoundCueDistanceCrossfade *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
