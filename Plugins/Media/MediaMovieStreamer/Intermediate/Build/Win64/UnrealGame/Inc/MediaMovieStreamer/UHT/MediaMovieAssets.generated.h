// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaMovieAssets.h"

#ifdef MEDIAMOVIESTREAMER_MediaMovieAssets_generated_h
#error "MediaMovieAssets.generated.h already included, missing '#pragma once' in MediaMovieAssets.h"
#endif
#define MEDIAMOVIESTREAMER_MediaMovieAssets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaMovieAssets ********************************************************
#define FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMediaEnd);


struct Z_Construct_UClass_UMediaMovieAssets_Statics;
MEDIAMOVIESTREAMER_API UClass* Z_Construct_UClass_UMediaMovieAssets_NoRegister();

#define FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaMovieAssets(); \
	friend struct ::Z_Construct_UClass_UMediaMovieAssets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAMOVIESTREAMER_API UClass* ::Z_Construct_UClass_UMediaMovieAssets_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaMovieAssets, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MediaMovieStreamer"), Z_Construct_UClass_UMediaMovieAssets_NoRegister) \
	DECLARE_SERIALIZER(UMediaMovieAssets)


#define FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaMovieAssets(UMediaMovieAssets&&) = delete; \
	UMediaMovieAssets(const UMediaMovieAssets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaMovieAssets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaMovieAssets); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaMovieAssets)


#define FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_19_PROLOG
#define FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaMovieAssets;

// ********** End Class UMediaMovieAssets **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
