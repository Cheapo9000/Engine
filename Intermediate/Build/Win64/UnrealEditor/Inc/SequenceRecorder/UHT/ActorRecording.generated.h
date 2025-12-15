// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorRecording.h"

#ifdef SEQUENCERECORDER_ActorRecording_generated_h
#error "ActorRecording.generated.h already included, missing '#pragma once' in ActorRecording.h"
#endif
#define SEQUENCERECORDER_ActorRecording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorRecording **********************************************************
struct Z_Construct_UClass_UActorRecording_Statics;
SEQUENCERECORDER_API UClass* Z_Construct_UClass_UActorRecording_NoRegister();

#define FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUActorRecording(); \
	friend struct ::Z_Construct_UClass_UActorRecording_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERECORDER_API UClass* ::Z_Construct_UClass_UActorRecording_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorRecording, USequenceRecordingBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), Z_Construct_UClass_UActorRecording_NoRegister) \
	DECLARE_SERIALIZER(UActorRecording)


#define FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API UActorRecording(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorRecording) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, UActorRecording); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorRecording); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorRecording(UActorRecording&&) = delete; \
	UActorRecording(const UActorRecording&) = delete; \
	SEQUENCERECORDER_API virtual ~UActorRecording();


#define FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_22_PROLOG
#define FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_INCLASS \
	FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorRecording;

// ********** End Class UActorRecording ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Public_ActorRecording_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
