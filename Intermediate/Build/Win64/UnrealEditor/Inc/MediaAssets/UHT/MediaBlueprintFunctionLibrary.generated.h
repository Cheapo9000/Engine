// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/MediaBlueprintFunctionLibrary.h"

#ifdef MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h
#error "MediaBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MediaBlueprintFunctionLibrary.h"
#endif
#define MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaCaptureDevice;

// ********** Begin ScriptStruct FMediaCaptureDevice ***********************************************
struct Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics;
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics; \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


struct FMediaCaptureDevice;
// ********** End ScriptStruct FMediaCaptureDevice *************************************************

// ********** Begin Class UMediaBlueprintFunctionLibrary *******************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnumerateWebcamCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateVideoCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateAudioCaptureDevices);


struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMediaBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaBlueprintFunctionLibrary(UMediaBlueprintFunctionLibrary&&) = delete; \
	UMediaBlueprintFunctionLibrary(const UMediaBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBlueprintFunctionLibrary) \
	MEDIAASSETS_API virtual ~UMediaBlueprintFunctionLibrary();


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_122_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaBlueprintFunctionLibrary;

// ********** End Class UMediaBlueprintFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h

// ********** Begin Enum EMediaAudioCaptureDeviceFilter ********************************************
#define FOREACH_ENUM_EMEDIAAUDIOCAPTUREDEVICEFILTER(op) \
	op(EMediaAudioCaptureDeviceFilter::None) \
	op(EMediaAudioCaptureDeviceFilter::Card) \
	op(EMediaAudioCaptureDeviceFilter::Microphone) \
	op(EMediaAudioCaptureDeviceFilter::Software) \
	op(EMediaAudioCaptureDeviceFilter::Unknown) 

enum class EMediaAudioCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaAudioCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaAudioCaptureDeviceFilter>();
// ********** End Enum EMediaAudioCaptureDeviceFilter **********************************************

// ********** Begin Enum EMediaVideoCaptureDeviceFilter ********************************************
#define FOREACH_ENUM_EMEDIAVIDEOCAPTUREDEVICEFILTER(op) \
	op(EMediaVideoCaptureDeviceFilter::None) \
	op(EMediaVideoCaptureDeviceFilter::Card) \
	op(EMediaVideoCaptureDeviceFilter::Software) \
	op(EMediaVideoCaptureDeviceFilter::Unknown) \
	op(EMediaVideoCaptureDeviceFilter::Webcam) 

enum class EMediaVideoCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaVideoCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaVideoCaptureDeviceFilter>();
// ********** End Enum EMediaVideoCaptureDeviceFilter **********************************************

// ********** Begin Enum EMediaWebcamCaptureDeviceFilter *******************************************
#define FOREACH_ENUM_EMEDIAWEBCAMCAPTUREDEVICEFILTER(op) \
	op(EMediaWebcamCaptureDeviceFilter::None) \
	op(EMediaWebcamCaptureDeviceFilter::DepthSensor) \
	op(EMediaWebcamCaptureDeviceFilter::Front) \
	op(EMediaWebcamCaptureDeviceFilter::Rear) \
	op(EMediaWebcamCaptureDeviceFilter::Unknown) 

enum class EMediaWebcamCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaWebcamCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaWebcamCaptureDeviceFilter>();
// ********** End Enum EMediaWebcamCaptureDeviceFilter *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
