// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayTracksEditorModule.h"

#ifdef REPLAYTRACKSEDITOR_ReplayTracksEditorModule_generated_h
#error "ReplayTracksEditorModule.generated.h already included, missing '#pragma once' in ReplayTracksEditorModule.h"
#endif
#define REPLAYTRACKSEDITOR_ReplayTracksEditorModule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplayTracksCameraModifier **********************************************
struct Z_Construct_UClass_UReplayTracksCameraModifier_Statics;
REPLAYTRACKSEDITOR_API UClass* Z_Construct_UClass_UReplayTracksCameraModifier_NoRegister();

#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplayTracksCameraModifier(); \
	friend struct ::Z_Construct_UClass_UReplayTracksCameraModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYTRACKSEDITOR_API UClass* ::Z_Construct_UClass_UReplayTracksCameraModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplayTracksCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplayTracksEditor"), Z_Construct_UClass_UReplayTracksCameraModifier_NoRegister) \
	DECLARE_SERIALIZER(UReplayTracksCameraModifier)


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplayTracksCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplayTracksCameraModifier(UReplayTracksCameraModifier&&) = delete; \
	UReplayTracksCameraModifier(const UReplayTracksCameraModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplayTracksCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayTracksCameraModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayTracksCameraModifier) \
	NO_API virtual ~UReplayTracksCameraModifier();


#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplayTracksCameraModifier;

// ********** End Class UReplayTracksCameraModifier ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
