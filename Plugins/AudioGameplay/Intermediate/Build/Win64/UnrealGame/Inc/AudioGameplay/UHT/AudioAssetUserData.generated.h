// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAssetUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAY_AudioAssetUserData_generated_h
#error "AudioAssetUserData.generated.h already included, missing '#pragma once' in AudioAssetUserData.h"
#endif
#define AUDIOGAMEPLAY_AudioAssetUserData_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAssetUserData(); \
	friend struct Z_Construct_UClass_UAudioAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UAudioAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioAssetUserData)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioAssetUserData(UAudioAssetUserData&&); \
	UAudioAssetUserData(const UAudioAssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAssetUserData) \
	NO_API virtual ~UAudioAssetUserData();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_12_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioAssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioAssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
