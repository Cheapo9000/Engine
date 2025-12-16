// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStream.h"

#ifdef MEDIASTREAM_MediaStream_generated_h
#error "MediaStream.generated.h already included, missing '#pragma once' in MediaStream.h"
#endif
#define MEDIASTREAM_MediaStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMediaStreamPlayer;
class UMediaStream;
struct FMediaStreamSource;

// ********** Begin Delegate FOnSourceChanged ******************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_74_DELEGATE \
static MEDIASTREAM_API void FOnSourceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSourceChanged, UMediaStream* InMediaStream);


// ********** End Delegate FOnSourceChanged ********************************************************

// ********** Begin Delegate FOnPlayerChanged ******************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_80_DELEGATE \
static MEDIASTREAM_API void FOnPlayerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerChanged, UMediaStream* InMediaStream);


// ********** End Delegate FOnPlayerChanged ********************************************************

// ********** Begin Class UMediaStream *************************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnsurePlayer); \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execSetSource); \
	DECLARE_FUNCTION(execResolveSource); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execHasValidSource);


struct Z_Construct_UClass_UMediaStream_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStream_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStream(); \
	friend struct ::Z_Construct_UClass_UMediaStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStream_NoRegister) \
	DECLARE_SERIALIZER(UMediaStream) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaStream*>(this); }


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIASTREAM_API UMediaStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStream(UMediaStream&&) = delete; \
	UMediaStream(const UMediaStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaStream)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStream;

// ********** End Class UMediaStream ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
