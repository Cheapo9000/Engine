// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitleFactory.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONSEDITOR_SubtitleFactory_generated_h
#error "SubtitleFactory.generated.h already included, missing '#pragma once' in SubtitleFactory.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONSEDITOR_SubtitleFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubtitleFactory *********************************************************
struct Z_Construct_UClass_USubtitleFactory_Statics;
SUBTITLESANDCLOSEDCAPTIONSEDITOR_API UClass* Z_Construct_UClass_USubtitleFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSubtitleFactory(); \
	friend struct ::Z_Construct_UClass_USubtitleFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONSEDITOR_API UClass* ::Z_Construct_UClass_USubtitleFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitleFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptionsEditor"), Z_Construct_UClass_USubtitleFactory_NoRegister) \
	DECLARE_SERIALIZER(USubtitleFactory)


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBTITLESANDCLOSEDCAPTIONSEDITOR_API USubtitleFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitleFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONSEDITOR_API, USubtitleFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitleFactory(USubtitleFactory&&) = delete; \
	USubtitleFactory(const USubtitleFactory&) = delete; \
	SUBTITLESANDCLOSEDCAPTIONSEDITOR_API virtual ~USubtitleFactory();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitleFactory;

// ********** End Class USubtitleFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptionsEditor_Private_SubtitleFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
