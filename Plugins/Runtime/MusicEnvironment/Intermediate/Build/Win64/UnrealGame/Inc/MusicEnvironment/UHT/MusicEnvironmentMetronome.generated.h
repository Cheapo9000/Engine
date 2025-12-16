// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicEnvironmentMetronome.h"

#ifdef MUSICENVIRONMENT_MusicEnvironmentMetronome_generated_h
#error "MusicEnvironmentMetronome.generated.h already included, missing '#pragma once' in MusicEnvironmentMetronome.h"
#endif
#define MUSICENVIRONMENT_MusicEnvironmentMetronome_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMusicEnvironmentMetronome *******************************************
struct Z_Construct_UClass_UMusicEnvironmentMetronome_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicEnvironmentMetronome_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicEnvironmentMetronome(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicEnvironmentMetronome(UMusicEnvironmentMetronome&&) = delete; \
	UMusicEnvironmentMetronome(const UMusicEnvironmentMetronome&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicEnvironmentMetronome); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicEnvironmentMetronome); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicEnvironmentMetronome) \
	virtual ~UMusicEnvironmentMetronome() = default;


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMusicEnvironmentMetronome(); \
	friend struct ::Z_Construct_UClass_UMusicEnvironmentMetronome_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicEnvironmentMetronome_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicEnvironmentMetronome, UMusicEnvironmentClockSource, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicEnvironmentMetronome_NoRegister) \
	DECLARE_SERIALIZER(UMusicEnvironmentMetronome)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMusicEnvironmentMetronome() {} \
public: \
	typedef UMusicEnvironmentMetronome UClassType; \
	typedef IMusicEnvironmentMetronome ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicEnvironmentMetronome;

// ********** End Interface UMusicEnvironmentMetronome *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicEnvironmentMetronome_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
