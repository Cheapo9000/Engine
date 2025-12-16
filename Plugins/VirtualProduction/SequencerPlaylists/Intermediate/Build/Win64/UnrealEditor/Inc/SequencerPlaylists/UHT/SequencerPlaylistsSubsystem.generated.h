// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerPlaylistsSubsystem.h"

#ifdef SEQUENCERPLAYLISTS_SequencerPlaylistsSubsystem_generated_h
#error "SequencerPlaylistsSubsystem.generated.h already included, missing '#pragma once' in SequencerPlaylistsSubsystem.h"
#endif
#define SEQUENCERPLAYLISTS_SequencerPlaylistsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSequencerPlaylistEditorHandle ************************************
struct Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics;
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerPlaylistEditorHandle_Statics; \
	SEQUENCERPLAYLISTS_API static class UScriptStruct* StaticStruct();


struct FSequencerPlaylistEditorHandle;
// ********** End ScriptStruct FSequencerPlaylistEditorHandle **************************************

// ********** Begin Class USequencerPlaylistsSubsystem *********************************************
struct Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics;
SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistsSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerPlaylistsSubsystem(); \
	friend struct ::Z_Construct_UClass_USequencerPlaylistsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERPLAYLISTS_API UClass* ::Z_Construct_UClass_USequencerPlaylistsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerPlaylistsSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerPlaylists"), Z_Construct_UClass_USequencerPlaylistsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USequencerPlaylistsSubsystem)


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerPlaylistsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerPlaylistsSubsystem(USequencerPlaylistsSubsystem&&) = delete; \
	USequencerPlaylistsSubsystem(const USequencerPlaylistsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerPlaylistsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerPlaylistsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USequencerPlaylistsSubsystem) \
	NO_API virtual ~USequencerPlaylistsSubsystem();


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_47_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerPlaylistsSubsystem;

// ********** End Class USequencerPlaylistsSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
