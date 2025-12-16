// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MusicTimestamp.h"

#ifdef HARMONIXMETASOUND_MusicTimestamp_generated_h
#error "MusicTimestamp.generated.h already included, missing '#pragma once' in MusicTimestamp.h"
#endif
#define HARMONIXMETASOUND_MusicTimestamp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaSoundOutput;
struct FMusicTimestamp;

// ********** Begin Class UMusicTimestampBlueprintLibrary ******************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMusicTimestamp); \
	DECLARE_FUNCTION(execIsMusicTimestamp);


struct Z_Construct_UClass_UMusicTimestampBlueprintLibrary_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMusicTimestampBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicTimestampBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMusicTimestampBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMusicTimestampBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicTimestampBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMusicTimestampBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMusicTimestampBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMusicTimestampBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicTimestampBlueprintLibrary(UMusicTimestampBlueprintLibrary&&) = delete; \
	UMusicTimestampBlueprintLibrary(const UMusicTimestampBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMusicTimestampBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicTimestampBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicTimestampBlueprintLibrary) \
	NO_API virtual ~UMusicTimestampBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicTimestampBlueprintLibrary;

// ********** End Class UMusicTimestampBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicTimestamp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
