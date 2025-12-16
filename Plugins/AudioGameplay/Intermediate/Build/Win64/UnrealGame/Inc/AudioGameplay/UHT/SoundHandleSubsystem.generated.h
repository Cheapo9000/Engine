// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundHandleSubsystem.h"

#ifdef AUDIOGAMEPLAY_SoundHandleSubsystem_generated_h
#error "SoundHandleSubsystem.generated.h already included, missing '#pragma once' in SoundHandleSubsystem.h"
#endif
#define AUDIOGAMEPLAY_SoundHandleSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundHandleSubsystem ****************************************************
struct Z_Construct_UClass_USoundHandleSubsystem_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_USoundHandleSubsystem_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundHandleSubsystem(); \
	friend struct ::Z_Construct_UClass_USoundHandleSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_USoundHandleSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundHandleSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_USoundHandleSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USoundHandleSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<USoundHandleSubsystem*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundHandleSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundHandleSubsystem(USoundHandleSubsystem&&) = delete; \
	USoundHandleSubsystem(const USoundHandleSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundHandleSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundHandleSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundHandleSubsystem)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundHandleSubsystem;

// ********** End Class USoundHandleSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_SoundHandleSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
