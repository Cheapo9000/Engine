// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingMediaTexture.h"

#ifdef PIXELSTREAMINGPLAYER_PixelStreamingMediaTexture_generated_h
#error "PixelStreamingMediaTexture.generated.h already included, missing '#pragma once' in PixelStreamingMediaTexture.h"
#endif
#define PIXELSTREAMINGPLAYER_PixelStreamingMediaTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreamingMediaTexture **********************************************
struct Z_Construct_UClass_UPixelStreamingMediaTexture_Statics;
PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingMediaTexture_NoRegister();

#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingMediaTexture(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingMediaTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMINGPLAYER_API UClass* ::Z_Construct_UClass_UPixelStreamingMediaTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingMediaTexture, UTexture2DDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), Z_Construct_UClass_UPixelStreamingMediaTexture_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingMediaTexture)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingMediaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingMediaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingMediaTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingMediaTexture(UPixelStreamingMediaTexture&&) = delete; \
	UPixelStreamingMediaTexture(const UPixelStreamingMediaTexture&) = delete; \
	NO_API virtual ~UPixelStreamingMediaTexture();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingMediaTexture;

// ********** End Class UPixelStreamingMediaTexture ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingMediaTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
