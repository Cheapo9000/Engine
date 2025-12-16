// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCaptureBlueprintLibrary.h"

#ifdef AUDIOCAPTURE_AudioCaptureBlueprintLibrary_generated_h
#error "AudioCaptureBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioCaptureBlueprintLibrary.h"
#endif
#define AUDIOCAPTURE_AudioCaptureBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioInputDeviceInfo;

// ********** Begin ScriptStruct FAudioInputDeviceInfo *********************************************
struct Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics;
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics; \
	AUDIOCAPTURE_API static class UScriptStruct* StaticStruct();


struct FAudioInputDeviceInfo;
// ********** End ScriptStruct FAudioInputDeviceInfo ***********************************************

// ********** Begin Delegate FOnAudioInputDevicesObtained ******************************************
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_64_DELEGATE \
AUDIOCAPTURE_API void FOnAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnAudioInputDevicesObtained, TArray<FAudioInputDeviceInfo> const& AvailableDevices);


// ********** End Delegate FOnAudioInputDevicesObtained ********************************************

// ********** Begin Class UAudioCaptureBlueprintLibrary ********************************************
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execConv_AudioInputDeviceInfoToString);


struct Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics;
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOCAPTURE_API UClass* ::Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioCaptureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAudioCaptureBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOCAPTURE_API UAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioCaptureBlueprintLibrary(UAudioCaptureBlueprintLibrary&&) = delete; \
	UAudioCaptureBlueprintLibrary(const UAudioCaptureBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOCAPTURE_API, UAudioCaptureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureBlueprintLibrary) \
	AUDIOCAPTURE_API virtual ~UAudioCaptureBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioCaptureBlueprintLibrary;

// ********** End Class UAudioCaptureBlueprintLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
