// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitlesBlueprintFunctionLibrary.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_SubtitlesBlueprintFunctionLibrary_generated_h
#error "SubtitlesBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SubtitlesBlueprintFunctionLibrary.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_SubtitlesBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class USubtitleAssetUserData;
class USubtitleWidget;
enum class ESubtitleTiming : uint8;
struct FSubtitleAssetData;

// ********** Begin Class USubtitlesBlueprintFunctionLibrary ***************************************
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReplaceSubtitleWidget); \
	DECLARE_FUNCTION(execStopAllSubtitles); \
	DECLARE_FUNCTION(execStopSubtitle); \
	DECLARE_FUNCTION(execIsSubtitleActive); \
	DECLARE_FUNCTION(execQueueSubtitle); \
	DECLARE_FUNCTION(execStopSubtitlesInAsset); \
	DECLARE_FUNCTION(execQueueSubtitlesFromAsset);


struct Z_Construct_UClass_USubtitlesBlueprintFunctionLibrary_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_USubtitlesBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitlesBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USubtitlesBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_USubtitlesBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitlesBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_USubtitlesBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USubtitlesBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBTITLESANDCLOSEDCAPTIONS_API USubtitlesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitlesBlueprintFunctionLibrary(USubtitlesBlueprintFunctionLibrary&&) = delete; \
	USubtitlesBlueprintFunctionLibrary(const USubtitlesBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONS_API, USubtitlesBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitlesBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitlesBlueprintFunctionLibrary) \
	SUBTITLESANDCLOSEDCAPTIONS_API virtual ~USubtitlesBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitlesBlueprintFunctionLibrary;

// ********** End Class USubtitlesBlueprintFunctionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitlesBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
