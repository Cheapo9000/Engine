// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlaylist.h"

#ifdef MEDIAASSETS_MediaPlaylist_generated_h
#error "MediaPlaylist.generated.h already included, missing '#pragma once' in MediaPlaylist.h"
#endif
#define MEDIAASSETS_MediaPlaylist_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaSource;

// ********** Begin Class UMediaPlaylist ***********************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReplace); \
	DECLARE_FUNCTION(execRemoveAt); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execAddUrl); \
	DECLARE_FUNCTION(execAddFile); \
	DECLARE_FUNCTION(execAdd);


struct Z_Construct_UClass_UMediaPlaylist_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlaylist(); \
	friend struct ::Z_Construct_UClass_UMediaPlaylist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaPlaylist_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlaylist, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaPlaylist_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlaylist)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaPlaylist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlaylist(UMediaPlaylist&&) = delete; \
	UMediaPlaylist(const UMediaPlaylist&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaPlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlaylist); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlaylist) \
	MEDIAASSETS_API virtual ~UMediaPlaylist();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_23_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlaylist;

// ********** End Class UMediaPlaylist *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
