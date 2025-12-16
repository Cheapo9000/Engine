// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamSourceBlueprintLibrary.h"

#ifdef MEDIASTREAM_MediaStreamSourceBlueprintLibrary_generated_h
#error "MediaStreamSourceBlueprintLibrary.generated.h already included, missing '#pragma once' in MediaStreamSourceBlueprintLibrary.h"
#endif
#define MEDIASTREAM_MediaStreamSourceBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMediaStream;
class UObject;
struct FMediaStreamSource;
struct FSoftObjectPath;

// ********** Begin Class UMediaStreamSourceBlueprintLibrary ***************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeMediaSourceFromSubobjectClass); \
	DECLARE_FUNCTION(execMakeMediaSourceFromSubobject); \
	DECLARE_FUNCTION(execMakeMediaSourceFromFile); \
	DECLARE_FUNCTION(execMakeMediaSourceFromStreamName); \
	DECLARE_FUNCTION(execMakeMediaSourceFromAsset); \
	DECLARE_FUNCTION(execMakeMediaSourceFromSchemePath); \
	DECLARE_FUNCTION(execIsAssetSoftPathValid); \
	DECLARE_FUNCTION(execIsAssetPathValid); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsValidMediaSource);


struct Z_Construct_UClass_UMediaStreamSourceBlueprintLibrary_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamSourceBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamSourceBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMediaStreamSourceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamSourceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamSourceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamSourceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamSourceBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIASTREAM_API UMediaStreamSourceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamSourceBlueprintLibrary(UMediaStreamSourceBlueprintLibrary&&) = delete; \
	UMediaStreamSourceBlueprintLibrary(const UMediaStreamSourceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStreamSourceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamSourceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaStreamSourceBlueprintLibrary) \
	MEDIASTREAM_API virtual ~UMediaStreamSourceBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamSourceBlueprintLibrary;

// ********** End Class UMediaStreamSourceBlueprintLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamSourceBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
