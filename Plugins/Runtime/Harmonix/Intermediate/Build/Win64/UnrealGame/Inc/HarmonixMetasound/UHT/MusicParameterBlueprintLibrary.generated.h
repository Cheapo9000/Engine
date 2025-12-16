// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MusicParameterBlueprintLibrary.h"

#ifdef HARMONIXMETASOUND_MusicParameterBlueprintLibrary_generated_h
#error "MusicParameterBlueprintLibrary.generated.h already included, missing '#pragma once' in MusicParameterBlueprintLibrary.h"
#endif
#define HARMONIXMETASOUND_MusicParameterBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetasoundParameterPack;
enum class ESetParamResult : uint8;
struct FMusicLoopConfiguration;
struct FMusicSeekRequest;
struct FMusicTimestamp;

// ********** Begin Class UMusicParameterBlueprintLibrary ******************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasMusicSeekRequest); \
	DECLARE_FUNCTION(execGetMusicSeekRequest); \
	DECLARE_FUNCTION(execSetMusicSeekRequest); \
	DECLARE_FUNCTION(execHasMusicLoopConfiguration); \
	DECLARE_FUNCTION(execGetMusicLoopConfiguration); \
	DECLARE_FUNCTION(execSetMusicLoopConfiguration); \
	DECLARE_FUNCTION(execHasMusicTimestamp); \
	DECLARE_FUNCTION(execGetMusicTimestamp); \
	DECLARE_FUNCTION(execSetMusicTimestamp);


struct Z_Construct_UClass_UMusicParameterBlueprintLibrary_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMusicParameterBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicParameterBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMusicParameterBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMusicParameterBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicParameterBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMusicParameterBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMusicParameterBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMETASOUND_API UMusicParameterBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicParameterBlueprintLibrary(UMusicParameterBlueprintLibrary&&) = delete; \
	UMusicParameterBlueprintLibrary(const UMusicParameterBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UMusicParameterBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicParameterBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicParameterBlueprintLibrary) \
	HARMONIXMETASOUND_API virtual ~UMusicParameterBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicParameterBlueprintLibrary;

// ********** End Class UMusicParameterBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicParameterBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
