// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubtitleWidget.h"

#ifdef SUBTITLESANDCLOSEDCAPTIONS_SubtitleWidget_generated_h
#error "SubtitleWidget.generated.h already included, missing '#pragma once' in SubtitleWidget.h"
#endif
#define SUBTITLESANDCLOSEDCAPTIONS_SubtitleWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubtitleWidget **********************************************************
struct Z_Construct_UClass_USubtitleWidget_Statics;
SUBTITLESANDCLOSEDCAPTIONS_API UClass* Z_Construct_UClass_USubtitleWidget_NoRegister();

#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubtitleWidget(); \
	friend struct ::Z_Construct_UClass_USubtitleWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBTITLESANDCLOSEDCAPTIONS_API UClass* ::Z_Construct_UClass_USubtitleWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USubtitleWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SubtitlesAndClosedCaptions"), Z_Construct_UClass_USubtitleWidget_NoRegister) \
	DECLARE_SERIALIZER(USubtitleWidget)


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBTITLESANDCLOSEDCAPTIONS_API USubtitleWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubtitleWidget(USubtitleWidget&&) = delete; \
	USubtitleWidget(const USubtitleWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBTITLESANDCLOSEDCAPTIONS_API, USubtitleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubtitleWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubtitleWidget) \
	SUBTITLESANDCLOSEDCAPTIONS_API virtual ~USubtitleWidget();


#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubtitleWidget;

// ********** End Class USubtitleWidget ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SubtitlesAndClosedCaptions_Source_SubtitlesAndClosedCaptions_Public_SubtitleWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
