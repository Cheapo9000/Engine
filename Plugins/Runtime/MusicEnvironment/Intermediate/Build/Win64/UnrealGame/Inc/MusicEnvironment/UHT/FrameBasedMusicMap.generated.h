// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameBasedMusicMap.h"

#ifdef MUSICENVIRONMENT_FrameBasedMusicMap_generated_h
#error "FrameBasedMusicMap.generated.h already included, missing '#pragma once' in FrameBasedMusicMap.h"
#endif
#define MUSICENVIRONMENT_FrameBasedMusicMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFrameBasedTempoPoint *********************************************
struct Z_Construct_UScriptStruct_FFrameBasedTempoPoint_Statics;
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFrameBasedTempoPoint_Statics; \
	MUSICENVIRONMENT_API static class UScriptStruct* StaticStruct();


struct FFrameBasedTempoPoint;
// ********** End ScriptStruct FFrameBasedTempoPoint ***********************************************

// ********** Begin ScriptStruct FFrameBasedTimeSignature ******************************************
struct Z_Construct_UScriptStruct_FFrameBasedTimeSignature_Statics;
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_182_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFrameBasedTimeSignature_Statics; \
	MUSICENVIRONMENT_API static class UScriptStruct* StaticStruct();


struct FFrameBasedTimeSignature;
// ********** End ScriptStruct FFrameBasedTimeSignature ********************************************

// ********** Begin ScriptStruct FFrameBasedTimeSignaturePoint *************************************
struct Z_Construct_UScriptStruct_FFrameBasedTimeSignaturePoint_Statics;
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_210_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFrameBasedTimeSignaturePoint_Statics; \
	MUSICENVIRONMENT_API static class UScriptStruct* StaticStruct();


struct FFrameBasedTimeSignaturePoint;
// ********** End ScriptStruct FFrameBasedTimeSignaturePoint ***************************************

// ********** Begin ScriptStruct FTempoTimeSignatureMarker *****************************************
struct Z_Construct_UScriptStruct_FTempoTimeSignatureMarker_Statics;
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_314_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTempoTimeSignatureMarker_Statics; \
	MUSICENVIRONMENT_API static class UScriptStruct* StaticStruct();


struct FTempoTimeSignatureMarker;
// ********** End ScriptStruct FTempoTimeSignatureMarker *******************************************

// ********** Begin Class UFrameBasedMusicMap ******************************************************
struct Z_Construct_UClass_UFrameBasedMusicMap_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UFrameBasedMusicMap_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrameBasedMusicMap(); \
	friend struct ::Z_Construct_UClass_UFrameBasedMusicMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UFrameBasedMusicMap_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrameBasedMusicMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UFrameBasedMusicMap_NoRegister) \
	DECLARE_SERIALIZER(UFrameBasedMusicMap)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_329_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrameBasedMusicMap(UFrameBasedMusicMap&&) = delete; \
	UFrameBasedMusicMap(const UFrameBasedMusicMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UFrameBasedMusicMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrameBasedMusicMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFrameBasedMusicMap) \
	MUSICENVIRONMENT_API virtual ~UFrameBasedMusicMap();


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_326_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h_329_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrameBasedMusicMap;

// ********** End Class UFrameBasedMusicMap ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_FrameBasedMusicMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
