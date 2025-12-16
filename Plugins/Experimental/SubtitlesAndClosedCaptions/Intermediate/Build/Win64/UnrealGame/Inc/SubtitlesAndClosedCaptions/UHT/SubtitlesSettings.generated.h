// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitlesSettings.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_SubtitlesSettings_generated_h
#error "SubtitlesSettings.generated.h already included, missing '#pragma once' in SubtitlesSettings.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_SubtitlesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubtitlesSettings *******************************************************
struct Z_Construct_UClass_USubtitlesSettings_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_USubtitlesSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitlesSettings(); \
	friend struct ::Z_Construct_UClass_USubtitlesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_USubtitlesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitlesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_USubtitlesSettings_NoRegister) \
	DECLARE_SERIALIZER(USubtitlesSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitlesSettings(USubtitlesSettings&&) = delete; \
	USubtitlesSettings(const USubtitlesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubtitlesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubtitlesSettings) \
	NO_API virtual ~USubtitlesSettings();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitlesSettings;

// ********** End Class USubtitlesSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
