// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ingest/IngestCapability_Options.h"

#ifdef LIVELINKCAPABILITIES_IngestCapability_Options_generated_h
#error "IngestCapability_Options.generated.h already included, missing '#pragma once' in IngestCapability_Options.h"
#endif
#define LIVELINKCAPABILITIES_IngestCapability_Options_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIngestCapability_VideoOptions ************************************
struct Z_Construct_UScriptStruct_FIngestCapability_VideoOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIngestCapability_VideoOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIngestCapability_VideoOptions;
// ********** End ScriptStruct FIngestCapability_VideoOptions **************************************

// ********** Begin ScriptStruct FIngestCapability_AudioOptions ************************************
struct Z_Construct_UScriptStruct_FIngestCapability_AudioOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIngestCapability_AudioOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIngestCapability_AudioOptions;
// ********** End ScriptStruct FIngestCapability_AudioOptions **************************************

// ********** Begin Class UIngestCapability_Options ************************************************
struct Z_Construct_UClass_UIngestCapability_Options_Statics;
LIVELINKCAPABILITIES_API UClass* Z_Construct_UClass_UIngestCapability_Options_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIngestCapability_Options(); \
	friend struct ::Z_Construct_UClass_UIngestCapability_Options_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAPABILITIES_API UClass* ::Z_Construct_UClass_UIngestCapability_Options_NoRegister(); \
public: \
	DECLARE_CLASS2(UIngestCapability_Options, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkCapabilities"), Z_Construct_UClass_UIngestCapability_Options_NoRegister) \
	DECLARE_SERIALIZER(UIngestCapability_Options)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIngestCapability_Options(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIngestCapability_Options(UIngestCapability_Options&&) = delete; \
	UIngestCapability_Options(const UIngestCapability_Options&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIngestCapability_Options); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIngestCapability_Options); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIngestCapability_Options) \
	NO_API virtual ~UIngestCapability_Options();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_68_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIngestCapability_Options;

// ********** End Class UIngestCapability_Options **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_Options_h

// ********** Begin Enum EIngestCapability_ImagePixelFormat ****************************************
#define FOREACH_ENUM_EINGESTCAPABILITY_IMAGEPIXELFORMAT(op) \
	op(EIngestCapability_ImagePixelFormat::Undefined) \
	op(EIngestCapability_ImagePixelFormat::U8_RGB) \
	op(EIngestCapability_ImagePixelFormat::U8_BGR) \
	op(EIngestCapability_ImagePixelFormat::U8_RGBA) \
	op(EIngestCapability_ImagePixelFormat::U8_BGRA) \
	op(EIngestCapability_ImagePixelFormat::U8_I444) \
	op(EIngestCapability_ImagePixelFormat::U8_I420) \
	op(EIngestCapability_ImagePixelFormat::U8_NV12) \
	op(EIngestCapability_ImagePixelFormat::U8_Mono) \
	op(EIngestCapability_ImagePixelFormat::U16_Mono) \
	op(EIngestCapability_ImagePixelFormat::F_Mono) \
	op(EIngestCapability_ImagePixelFormat::Default) 

enum class EIngestCapability_ImagePixelFormat;
template<> struct TIsUEnumClass<EIngestCapability_ImagePixelFormat> { enum { Value = true }; };
template<> LIVELINKCAPABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EIngestCapability_ImagePixelFormat>();
// ********** End Enum EIngestCapability_ImagePixelFormat ******************************************

// ********** Begin Enum EIngestCapability_ImageRotation *******************************************
#define FOREACH_ENUM_EINGESTCAPABILITY_IMAGEROTATION(op) \
	op(EIngestCapability_ImageRotation::None) \
	op(EIngestCapability_ImageRotation::CW_90) \
	op(EIngestCapability_ImageRotation::CW_180) \
	op(EIngestCapability_ImageRotation::CW_270) \
	op(EIngestCapability_ImageRotation::Default) 

enum class EIngestCapability_ImageRotation;
template<> struct TIsUEnumClass<EIngestCapability_ImageRotation> { enum { Value = true }; };
template<> LIVELINKCAPABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EIngestCapability_ImageRotation>();
// ********** End Enum EIngestCapability_ImageRotation *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
