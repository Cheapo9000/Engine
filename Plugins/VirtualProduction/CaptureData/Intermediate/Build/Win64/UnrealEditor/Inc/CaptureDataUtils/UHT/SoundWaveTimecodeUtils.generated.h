// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundWaveTimecodeUtils.h"

#ifdef CAPTUREDATAUTILS_SoundWaveTimecodeUtils_generated_h
#error "SoundWaveTimecodeUtils.generated.h already included, missing '#pragma once' in SoundWaveTimecodeUtils.h"
#endif
#define CAPTUREDATAUTILS_SoundWaveTimecodeUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FFrameRate;
struct FTimecode;

// ********** Begin Class USoundWaveTimecodeUtils **************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execSetTimecodeInfo);


struct Z_Construct_UClass_USoundWaveTimecodeUtils_Statics;
CAPTUREDATAUTILS_API UClass* Z_Construct_UClass_USoundWaveTimecodeUtils_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundWaveTimecodeUtils(); \
	friend struct ::Z_Construct_UClass_USoundWaveTimecodeUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATAUTILS_API UClass* ::Z_Construct_UClass_USoundWaveTimecodeUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundWaveTimecodeUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataUtils"), Z_Construct_UClass_USoundWaveTimecodeUtils_NoRegister) \
	DECLARE_SERIALIZER(USoundWaveTimecodeUtils)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREDATAUTILS_API USoundWaveTimecodeUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundWaveTimecodeUtils(USoundWaveTimecodeUtils&&) = delete; \
	USoundWaveTimecodeUtils(const USoundWaveTimecodeUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREDATAUTILS_API, USoundWaveTimecodeUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWaveTimecodeUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWaveTimecodeUtils) \
	CAPTUREDATAUTILS_API virtual ~USoundWaveTimecodeUtils();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundWaveTimecodeUtils;

// ********** End Class USoundWaveTimecodeUtils ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataUtils_Public_SoundWaveTimecodeUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
