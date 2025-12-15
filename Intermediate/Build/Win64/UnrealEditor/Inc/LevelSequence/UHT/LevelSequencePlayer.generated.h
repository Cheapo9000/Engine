// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequencePlayer.h"

#ifdef LEVELSEQUENCE_LevelSequencePlayer_generated_h
#error "LevelSequencePlayer.generated.h already included, missing '#pragma once' in LevelSequencePlayer.h"
#endif
#define LEVELSEQUENCE_LevelSequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class UCameraComponent;
class ULevelSequence;
class ULevelSequencePlayer;
class UObject;
struct FMovieSceneSequencePlaybackSettings;

// ********** Begin Delegate FOnLevelSequencePlayerCameraCutEvent **********************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_27_DELEGATE \
LEVELSEQUENCE_API void FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLevelSequencePlayerCameraCutEvent, UCameraComponent* CameraComponent);


// ********** End Delegate FOnLevelSequencePlayerCameraCutEvent ************************************

// ********** Begin ScriptStruct FLevelSequencePlayerSnapshot **************************************
struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics;
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FLevelSequencePlayerSnapshot;
// ********** End ScriptStruct FLevelSequencePlayerSnapshot ****************************************

// ********** Begin Class ULevelSequencePlayer *****************************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveCameraComponent); \
	DECLARE_FUNCTION(execCreateLevelSequencePlayer);


struct Z_Construct_UClass_ULevelSequencePlayer_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequencePlayer(); \
	friend struct ::Z_Construct_UClass_ULevelSequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequencePlayer)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequencePlayer(ULevelSequencePlayer&&) = delete; \
	ULevelSequencePlayer(const ULevelSequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlayer) \
	LEVELSEQUENCE_API virtual ~ULevelSequencePlayer();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_74_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_82_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequencePlayer;

// ********** End Class ULevelSequencePlayer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
