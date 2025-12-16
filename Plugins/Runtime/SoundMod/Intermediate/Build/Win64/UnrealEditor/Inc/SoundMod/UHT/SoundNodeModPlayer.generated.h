// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundNodeModPlayer.h"

#ifdef SOUNDMOD_SoundNodeModPlayer_generated_h
#error "SoundNodeModPlayer.generated.h already included, missing '#pragma once' in SoundNodeModPlayer.h"
#endif
#define SOUNDMOD_SoundNodeModPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeModPlayer ******************************************************
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeModPlayer, SOUNDMOD_API)


struct Z_Construct_UClass_USoundNodeModPlayer_Statics;
SOUNDMOD_API UClass* Z_Construct_UClass_USoundNodeModPlayer_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeModPlayer(); \
	friend struct ::Z_Construct_UClass_USoundNodeModPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDMOD_API UClass* ::Z_Construct_UClass_USoundNodeModPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeModPlayer, USoundNodeAssetReferencer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundMod"), Z_Construct_UClass_USoundNodeModPlayer_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeModPlayer) \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDMOD_API USoundNodeModPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeModPlayer(USoundNodeModPlayer&&) = delete; \
	USoundNodeModPlayer(const USoundNodeModPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDMOD_API, USoundNodeModPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModPlayer) \
	SOUNDMOD_API virtual ~USoundNodeModPlayer();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeModPlayer;

// ********** End Class USoundNodeModPlayer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
