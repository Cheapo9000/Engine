// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAssetUserData.h"

#ifdef AUDIOGAMEPLAY_AudioAssetUserData_generated_h
#error "AudioAssetUserData.generated.h already included, missing '#pragma once' in AudioAssetUserData.h"
#endif
#define AUDIOGAMEPLAY_AudioAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class UAudioAssetUserData ******************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFilteredTags); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetAllTags);


struct Z_Construct_UClass_UAudioAssetUserData_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioAssetUserData_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAssetUserData(); \
	friend struct ::Z_Construct_UClass_UAudioAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UAudioAssetUserData)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioAssetUserData(UAudioAssetUserData&&) = delete; \
	UAudioAssetUserData(const UAudioAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAssetUserData) \
	AUDIOGAMEPLAY_API virtual ~UAudioAssetUserData();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_14_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioAssetUserData;

// ********** End Class UAudioAssetUserData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
