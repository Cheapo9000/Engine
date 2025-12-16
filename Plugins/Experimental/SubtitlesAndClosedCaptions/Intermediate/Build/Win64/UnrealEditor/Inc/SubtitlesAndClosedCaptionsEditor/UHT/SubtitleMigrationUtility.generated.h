// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitleMigrationUtility.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONSEDITOR_SubtitleMigrationUtility_generated_h
#error "SubtitleMigrationUtility.generated.h already included, missing '#pragma once' in SubtitleMigrationUtility.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONSEDITOR_SubtitleMigrationUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubtitleMigrationUtility ************************************************
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertLegacySubtitles); \
	DECLARE_FUNCTION(execRemoveLegacySubtitles); \
	DECLARE_FUNCTION(execAddBlankSubtitle);


struct Z_Construct_UClass_USubtitleMigrationUtility_Statics;
SUBTITLESANDCLOSEDCAPTIONSEDITOR_API UClass* Z_Construct_UClass_USubtitleMigrationUtility_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitleMigrationUtility(); \
	friend struct ::Z_Construct_UClass_USubtitleMigrationUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONSEDITOR_API UClass* ::Z_Construct_UClass_USubtitleMigrationUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitleMigrationUtility, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptionsEditor"), Z_Construct_UClass_USubtitleMigrationUtility_NoRegister) \
	DECLARE_SERIALIZER(USubtitleMigrationUtility)


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitleMigrationUtility(USubtitleMigrationUtility&&) = delete; \
	USubtitleMigrationUtility(const USubtitleMigrationUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitleMigrationUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleMigrationUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitleMigrationUtility) \
	NO_API virtual ~USubtitleMigrationUtility();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitleMigrationUtility;

// ********** End Class USubtitleMigrationUtility **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Public_SubtitleMigrationUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
