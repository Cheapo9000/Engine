// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaBundle.h"

#ifdef MEDIAFRAMEWORKUTILITIES_MediaBundle_generated_h
#error "MediaBundle.generated.h already included, missing '#pragma once' in MediaBundle.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_MediaBundle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UTextureRenderTarget2D;
struct FOpenCVCameraViewInfo;

// ********** Begin Class UMediaBundle *************************************************************
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnMediaOpenFailed); \
	DECLARE_FUNCTION(execOnMediaOpenOpened); \
	DECLARE_FUNCTION(execOnMediaClosed); \
	DECLARE_FUNCTION(execGetUndistortedCameraViewInfo); \
	DECLARE_FUNCTION(execGetMediaSource); \
	DECLARE_FUNCTION(execGetLensDisplacementTexture); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetMaterial);


struct Z_Construct_UClass_UMediaBundle_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMediaBundle(); \
	friend struct ::Z_Construct_UClass_UMediaBundle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UMediaBundle_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaBundle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UMediaBundle_NoRegister) \
	DECLARE_SERIALIZER(UMediaBundle)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBundle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBundle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBundle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBundle); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaBundle(UMediaBundle&&) = delete; \
	UMediaBundle(const UMediaBundle&) = delete; \
	NO_API virtual ~UMediaBundle();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_39_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaBundle;

// ********** End Class UMediaBundle ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
