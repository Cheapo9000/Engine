// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundScape.h"

#ifdef SOUNDSCAPE_SoundScape_generated_h
#error "SoundScape.generated.h already included, missing '#pragma once' in SoundScape.h"
#endif
#define SOUNDSCAPE_SoundScape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActiveSoundscapeColor;
class UActiveSoundscapePalette;
class UObject;
class USoundscapeColor;
class USoundscapePalette;

// ********** Begin Class USoundscapeBPFunctionLibrary *********************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnSoundscapePalette); \
	DECLARE_FUNCTION(execSpawnSoundscapeColor);


struct Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeBPFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeBPFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeBPFunctionLibrary(USoundscapeBPFunctionLibrary&&) = delete; \
	USoundscapeBPFunctionLibrary(const USoundscapeBPFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeBPFunctionLibrary) \
	NO_API virtual ~USoundscapeBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeBPFunctionLibrary;

// ********** End Class USoundscapeBPFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
