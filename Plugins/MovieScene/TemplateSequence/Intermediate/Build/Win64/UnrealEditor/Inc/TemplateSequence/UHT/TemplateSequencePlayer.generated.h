// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSequencePlayer.h"

#ifdef TEMPLATESEQUENCE_TemplateSequencePlayer_generated_h
#error "TemplateSequencePlayer.generated.h already included, missing '#pragma once' in TemplateSequencePlayer.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATemplateSequenceActor;
class UObject;
class UTemplateSequence;
class UTemplateSequencePlayer;
struct FMovieSceneSequencePlaybackSettings;

// ********** Begin Class UTemplateSequencePlayer **************************************************
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateTemplateSequencePlayer);


struct Z_Construct_UClass_UTemplateSequencePlayer_Statics;
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSequencePlayer(); \
	friend struct ::Z_Construct_UClass_UTemplateSequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCE_API UClass* ::Z_Construct_UClass_UTemplateSequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequence"), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSequencePlayer)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSequencePlayer(UTemplateSequencePlayer&&) = delete; \
	UTemplateSequencePlayer(const UTemplateSequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLATESEQUENCE_API, UTemplateSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequencePlayer) \
	TEMPLATESEQUENCE_API virtual ~UTemplateSequencePlayer();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSequencePlayer;

// ********** End Class UTemplateSequencePlayer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
