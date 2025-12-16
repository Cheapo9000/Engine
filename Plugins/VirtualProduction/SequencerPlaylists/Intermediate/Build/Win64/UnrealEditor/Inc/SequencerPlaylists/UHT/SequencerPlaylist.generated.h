// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerPlaylist.h"

#ifdef SEQUENCERPLAYLISTS_SequencerPlaylist_generated_h
#error "SequencerPlaylist.generated.h already included, missing '#pragma once' in SequencerPlaylist.h"
#endif
#define SEQUENCERPLAYLISTS_SequencerPlaylist_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerPlaylist *******************************************************
struct Z_Construct_UClass_USequencerPlaylist_Statics;
SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylist_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerPlaylist(); \
	friend struct ::Z_Construct_UClass_USequencerPlaylist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERPLAYLISTS_API UClass* ::Z_Construct_UClass_USequencerPlaylist_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerPlaylist, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerPlaylists"), Z_Construct_UClass_USequencerPlaylist_NoRegister) \
	DECLARE_SERIALIZER(USequencerPlaylist)


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerPlaylist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerPlaylist(USequencerPlaylist&&) = delete; \
	USequencerPlaylist(const USequencerPlaylist&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerPlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerPlaylist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerPlaylist) \
	NO_API virtual ~USequencerPlaylist();


#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerPlaylist;

// ********** End Class USequencerPlaylist *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylist_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
