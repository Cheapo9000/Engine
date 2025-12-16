// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCapture.h"

#ifdef AUDIOCAPTURE_AudioCapture_generated_h
#error "AudioCapture.generated.h already included, missing '#pragma once' in AudioCapture.h"
#endif
#define AUDIOCAPTURE_AudioCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioCapture;
struct FAudioCaptureDeviceInfo;

// ********** Begin ScriptStruct FAudioCaptureDeviceInfo *******************************************
struct Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics;
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics; \
	AUDIOCAPTURE_API static class UScriptStruct* StaticStruct();


struct FAudioCaptureDeviceInfo;
// ********** End ScriptStruct FAudioCaptureDeviceInfo *********************************************

// ********** Begin Class UAudioCapture ************************************************************
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCapturingAudio); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio); \
	DECLARE_FUNCTION(execGetAudioCaptureDeviceInfo);


struct Z_Construct_UClass_UAudioCapture_Statics;
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCapture_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCapture(); \
	friend struct ::Z_Construct_UClass_UAudioCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOCAPTURE_API UClass* ::Z_Construct_UClass_UAudioCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioCapture, UAudioGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), Z_Construct_UClass_UAudioCapture_NoRegister) \
	DECLARE_SERIALIZER(UAudioCapture)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioCapture(UAudioCapture&&) = delete; \
	UAudioCapture(const UAudioCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOCAPTURE_API, UAudioCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioCapture)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioCapture;

// ********** End Class UAudioCapture **************************************************************

// ********** Begin Class UAudioCaptureFunctionLibrary *********************************************
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateAudioCapture);


struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics;
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOCAPTURE_API UClass* ::Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAudioCaptureFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOCAPTURE_API UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary&&) = delete; \
	UAudioCaptureFunctionLibrary(const UAudioCaptureFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOCAPTURE_API, UAudioCaptureFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureFunctionLibrary) \
	AUDIOCAPTURE_API virtual ~UAudioCaptureFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_82_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioCaptureFunctionLibrary;

// ********** End Class UAudioCaptureFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
