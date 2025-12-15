// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaTexture.h"

#ifdef MEDIAASSETS_MediaTexture_generated_h
#error "MediaTexture.generated.h already included, missing '#pragma once' in MediaTexture.h"
#endif
#define MEDIAASSETS_MediaTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;

// ********** Begin Class UMediaTexture ************************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_RPC_WRAPPERS \
	DECLARE_FUNCTION(execUpdateResource); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetTextureNumMips); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetAspectRatio);


struct Z_Construct_UClass_UMediaTexture_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMediaTexture(); \
	friend struct ::Z_Construct_UClass_UMediaTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaTexture_NoRegister) \
	DECLARE_SERIALIZER(UMediaTexture)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaTexture(UMediaTexture&&) = delete; \
	UMediaTexture(const UMediaTexture&) = delete; \
	MEDIAASSETS_API virtual ~UMediaTexture();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_39_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_INCLASS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaTexture;

// ********** End Class UMediaTexture **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h

// ********** Begin Enum MediaTextureOrientation ***************************************************
#define FOREACH_ENUM_MEDIATEXTUREORIENTATION(op) \
	op(MTORI_Original) \
	op(MTORI_CW90) \
	op(MTORI_CW180) \
	op(MTORI_CW270) 

enum MediaTextureOrientation : int;
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<MediaTextureOrientation>();
// ********** End Enum MediaTextureOrientation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
