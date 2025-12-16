// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MediaPlayerRecording.h"

#ifdef MEDIACOMPOSITINGEDITOR_MediaPlayerRecording_generated_h
#error "MediaPlayerRecording.generated.h already included, missing '#pragma once' in MediaPlayerRecording.h"
#endif
#define MEDIACOMPOSITINGEDITOR_MediaPlayerRecording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaPlayerRecordingSettings *************************************
struct Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics;
#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics; \
	MEDIACOMPOSITINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FMediaPlayerRecordingSettings;
// ********** End ScriptStruct FMediaPlayerRecordingSettings ***************************************

// ********** Begin Class UMediaPlayerRecording ****************************************************
struct Z_Construct_UClass_UMediaPlayerRecording_Statics;
MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaPlayerRecording_NoRegister();

#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayerRecording(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerRecording_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIACOMPOSITINGEDITOR_API UClass* ::Z_Construct_UClass_UMediaPlayerRecording_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerRecording, USequenceRecordingBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaCompositingEditor"), Z_Construct_UClass_UMediaPlayerRecording_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerRecording)


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIACOMPOSITINGEDITOR_API UMediaPlayerRecording(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerRecording) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIACOMPOSITINGEDITOR_API, UMediaPlayerRecording); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerRecording); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerRecording(UMediaPlayerRecording&&) = delete; \
	UMediaPlayerRecording(const UMediaPlayerRecording&) = delete; \
	MEDIACOMPOSITINGEDITOR_API virtual ~UMediaPlayerRecording();


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_85_PROLOG
#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_88_INCLASS \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerRecording;

// ********** End Class UMediaPlayerRecording ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h

// ********** Begin Enum EMediaPlayerRecordingNumerationStyle **************************************
#define FOREACH_ENUM_EMEDIAPLAYERRECORDINGNUMERATIONSTYLE(op) \
	op(EMediaPlayerRecordingNumerationStyle::AppendFrameNumber) \
	op(EMediaPlayerRecordingNumerationStyle::AppendSampleTime) 

enum class EMediaPlayerRecordingNumerationStyle : uint8;
template<> struct TIsUEnumClass<EMediaPlayerRecordingNumerationStyle> { enum { Value = true }; };
template<> MEDIACOMPOSITINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaPlayerRecordingNumerationStyle>();
// ********** End Enum EMediaPlayerRecordingNumerationStyle ****************************************

// ********** Begin Enum EMediaPlayerRecordingImageFormat ******************************************
#define FOREACH_ENUM_EMEDIAPLAYERRECORDINGIMAGEFORMAT(op) \
	op(EMediaPlayerRecordingImageFormat::PNG) \
	op(EMediaPlayerRecordingImageFormat::JPEG) \
	op(EMediaPlayerRecordingImageFormat::BMP) \
	op(EMediaPlayerRecordingImageFormat::EXR) 

enum class EMediaPlayerRecordingImageFormat : uint8;
template<> struct TIsUEnumClass<EMediaPlayerRecordingImageFormat> { enum { Value = true }; };
template<> MEDIACOMPOSITINGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaPlayerRecordingImageFormat>();
// ********** End Enum EMediaPlayerRecordingImageFormat ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
