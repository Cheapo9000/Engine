// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerPlaylistItem_Sequence.h"

#ifdef SEQUENCERPLAYLISTS_SequencerPlaylistItem_Sequence_generated_h
#error "SequencerPlaylistItem_Sequence.generated.h already included, missing '#pragma once' in SequencerPlaylistItem_Sequence.h"
#endif
#define SEQUENCERPLAYLISTS_SequencerPlaylistItem_Sequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;

// ********** Begin Class USequencerPlaylistItem_Sequence ******************************************
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSequence);


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_ACCESSORS \
static void SetSequence_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics;
SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerPlaylistItem_Sequence(); \
	friend struct ::Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERPLAYLISTS_API UClass* ::Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerPlaylistItem_Sequence, USequencerPlaylistItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerPlaylists"), Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister) \
	DECLARE_SERIALIZER(USequencerPlaylistItem_Sequence)


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerPlaylistItem_Sequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerPlaylistItem_Sequence(USequencerPlaylistItem_Sequence&&) = delete; \
	USequencerPlaylistItem_Sequence(const USequencerPlaylistItem_Sequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerPlaylistItem_Sequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerPlaylistItem_Sequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerPlaylistItem_Sequence) \
	NO_API virtual ~USequencerPlaylistItem_Sequence();


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerPlaylistItem_Sequence;

// ********** End Class USequencerPlaylistItem_Sequence ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
