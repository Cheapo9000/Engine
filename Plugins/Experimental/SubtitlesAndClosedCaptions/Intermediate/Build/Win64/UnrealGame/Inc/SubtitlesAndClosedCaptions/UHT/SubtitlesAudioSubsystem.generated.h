// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitlesAudioSubsystem.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_SubtitlesAudioSubsystem_generated_h
#error "SubtitlesAudioSubsystem.generated.h already included, missing '#pragma once' in SubtitlesAudioSubsystem.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_SubtitlesAudioSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubtitlesAudioSubsystem *************************************************
struct Z_Construct_UClass_USubtitlesAudioSubsystem_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_USubtitlesAudioSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitlesAudioSubsystem(); \
	friend struct ::Z_Construct_UClass_USubtitlesAudioSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_USubtitlesAudioSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitlesAudioSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_USubtitlesAudioSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USubtitlesAudioSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USubtitlesAudioSubsystem*>(this); }


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitlesAudioSubsystem(USubtitlesAudioSubsystem&&) = delete; \
	USubtitlesAudioSubsystem(const USubtitlesAudioSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONS_API, USubtitlesAudioSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesAudioSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitlesAudioSubsystem) \
	SUBTITLESANDCLOSEDCAPTIONS_API virtual ~USubtitlesAudioSubsystem();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitlesAudioSubsystem;

// ********** End Class USubtitlesAudioSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesAudioSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
