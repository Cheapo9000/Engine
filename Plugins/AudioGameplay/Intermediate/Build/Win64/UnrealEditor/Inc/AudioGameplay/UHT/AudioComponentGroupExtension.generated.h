// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioComponentGroupExtension.h"

#ifdef AUDIOGAMEPLAY_AudioComponentGroupExtension_generated_h
#error "AudioComponentGroupExtension.generated.h already included, missing '#pragma once' in AudioComponentGroupExtension.h"
#endif
#define AUDIOGAMEPLAY_AudioComponentGroupExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAudioComponentGroupExtension ****************************************
struct Z_Construct_UClass_UAudioComponentGroupExtension_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioComponentGroupExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioComponentGroupExtension(UAudioComponentGroupExtension&&) = delete; \
	UAudioComponentGroupExtension(const UAudioComponentGroupExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioComponentGroupExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponentGroupExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponentGroupExtension) \
	virtual ~UAudioComponentGroupExtension() = default;


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioComponentGroupExtension(); \
	friend struct ::Z_Construct_UClass_UAudioComponentGroupExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioComponentGroupExtension, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioComponentGroupExtension_NoRegister) \
	DECLARE_SERIALIZER(UAudioComponentGroupExtension)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioComponentGroupExtension() {} \
public: \
	typedef UAudioComponentGroupExtension UClassType; \
	typedef IAudioComponentGroupExtension ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_39_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioComponentGroupExtension;

// ********** End Interface UAudioComponentGroupExtension ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroupExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
