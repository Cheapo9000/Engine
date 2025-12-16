// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitlesSubsystem.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_SubtitlesSubsystem_generated_h
#error "SubtitlesSubsystem.generated.h already included, missing '#pragma once' in SubtitlesSubsystem.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_SubtitlesSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubtitleTiming : uint8;
struct FSubtitleAssetData;

// ********** Begin Class USubtitlesSubsystem ******************************************************
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveActiveSubtitle); \
	DECLARE_FUNCTION(execMakeDelayedSubtitleActive);


struct Z_Construct_UClass_USubtitlesSubsystem_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_USubtitlesSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitlesSubsystem(); \
	friend struct ::Z_Construct_UClass_USubtitlesSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_USubtitlesSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitlesSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_USubtitlesSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USubtitlesSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitlesSubsystem(USubtitlesSubsystem&&) = delete; \
	USubtitlesSubsystem(const USubtitlesSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONS_API, USubtitlesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitlesSubsystem) \
	SUBTITLESANDCLOSEDCAPTIONS_API virtual ~USubtitlesSubsystem();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitlesSubsystem;

// ********** End Class USubtitlesSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
