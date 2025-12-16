// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundScapePalette.h"

#ifdef SOUNDSCAPE_SoundScapePalette_generated_h
#error "SoundScapePalette.generated.h already included, missing '#pragma once' in SoundScapePalette.h"
#endif
#define SOUNDSCAPE_SoundScapePalette_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundscapePaletteColor *******************************************
struct Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapePaletteColor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapePaletteColor;
// ********** End ScriptStruct FSoundscapePaletteColor *********************************************

// ********** Begin Class USoundscapePalette *******************************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundscapePalette, NO_API)


struct Z_Construct_UClass_USoundscapePalette_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapePalette_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapePalette(); \
	friend struct ::Z_Construct_UClass_USoundscapePalette_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapePalette_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapePalette, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapePalette_NoRegister) \
	DECLARE_SERIALIZER(USoundscapePalette) \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapePalette(USoundscapePalette&&) = delete; \
	USoundscapePalette(const USoundscapePalette&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapePalette); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapePalette); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundscapePalette) \
	NO_API virtual ~USoundscapePalette();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapePalette;

// ********** End Class USoundscapePalette *********************************************************

// ********** Begin Class UActiveSoundscapePalette *************************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_UActiveSoundscapePalette_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapePalette_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSoundscapePalette(); \
	friend struct ::Z_Construct_UClass_UActiveSoundscapePalette_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_UActiveSoundscapePalette_NoRegister(); \
public: \
	DECLARE_CLASS2(UActiveSoundscapePalette, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_UActiveSoundscapePalette_NoRegister) \
	DECLARE_SERIALIZER(UActiveSoundscapePalette)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapePalette(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActiveSoundscapePalette(UActiveSoundscapePalette&&) = delete; \
	UActiveSoundscapePalette(const UActiveSoundscapePalette&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapePalette); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapePalette); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapePalette) \
	NO_API virtual ~UActiveSoundscapePalette();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActiveSoundscapePalette;

// ********** End Class UActiveSoundscapePalette ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScapePalette_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
