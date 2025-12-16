// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Players/MediaStreamProxyPlayer.h"

#ifdef MEDIASTREAM_MediaStreamProxyPlayer_generated_h
#error "MediaStreamProxyPlayer.generated.h already included, missing '#pragma once' in MediaStreamProxyPlayer.h"
#endif
#define MEDIASTREAM_MediaStreamProxyPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaStream;

// ********** Begin Class UMediaStreamProxyPlayer **************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetReadOnly); \
	DECLARE_FUNCTION(execGetProxyStreamSoft);


struct Z_Construct_UClass_UMediaStreamProxyPlayer_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamProxyPlayer_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamProxyPlayer(); \
	friend struct ::Z_Construct_UClass_UMediaStreamProxyPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamProxyPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamProxyPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamProxyPlayer_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamProxyPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaStreamProxyPlayer*>(this); }


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaStreamProxyPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamProxyPlayer(UMediaStreamProxyPlayer&&) = delete; \
	UMediaStreamProxyPlayer(const UMediaStreamProxyPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaStreamProxyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamProxyPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaStreamProxyPlayer)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamProxyPlayer;

// ********** End Class UMediaStreamProxyPlayer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Private_Players_MediaStreamProxyPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
