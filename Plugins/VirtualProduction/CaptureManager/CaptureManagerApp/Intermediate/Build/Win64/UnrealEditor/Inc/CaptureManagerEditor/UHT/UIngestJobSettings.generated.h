// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IngestManagement/UIngestJobSettings.h"

#ifdef CAPTUREMANAGEREDITOR_UIngestJobSettings_generated_h
#error "UIngestJobSettings.generated.h already included, missing '#pragma once' in UIngestJobSettings.h"
#endif
#define CAPTUREMANAGEREDITOR_UIngestJobSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIngestJobSettings *******************************************************
struct Z_Construct_UClass_UIngestJobSettings_Statics;
CAPTUREMANAGEREDITOR_API UClass* Z_Construct_UClass_UIngestJobSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIngestJobSettings(); \
	friend struct ::Z_Construct_UClass_UIngestJobSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UIngestJobSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIngestJobSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureManagerEditor"), Z_Construct_UClass_UIngestJobSettings_NoRegister) \
	DECLARE_SERIALIZER(UIngestJobSettings)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIngestJobSettings(UIngestJobSettings&&) = delete; \
	UIngestJobSettings(const UIngestJobSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIngestJobSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIngestJobSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIngestJobSettings) \
	NO_API virtual ~UIngestJobSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIngestJobSettings;

// ********** End Class UIngestJobSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_IngestManagement_UIngestJobSettings_h

// ********** Begin Enum EOutputImageFormat ********************************************************
#define FOREACH_ENUM_EOUTPUTIMAGEFORMAT(op) \
	op(EOutputImageFormat::JPEG) \
	op(EOutputImageFormat::PNG) 

enum class EOutputImageFormat : uint8;
template<> struct TIsUEnumClass<EOutputImageFormat> { enum { Value = true }; };
template<> CAPTUREMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutputImageFormat>();
// ********** End Enum EOutputImageFormat **********************************************************

// ********** Begin Enum EImagePixelFormat *********************************************************
#define FOREACH_ENUM_EIMAGEPIXELFORMAT(op) \
	op(EImagePixelFormat::U8_BGRA) \
	op(EImagePixelFormat::U8_Mono) 

enum class EImagePixelFormat : uint8;
template<> struct TIsUEnumClass<EImagePixelFormat> { enum { Value = true }; };
template<> CAPTUREMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EImagePixelFormat>();
// ********** End Enum EImagePixelFormat ***********************************************************

// ********** Begin Enum EImageRotation ************************************************************
#define FOREACH_ENUM_EIMAGEROTATION(op) \
	op(EImageRotation::None) \
	op(EImageRotation::CW_90) \
	op(EImageRotation::CW_180) \
	op(EImageRotation::CW_270) 

enum class EImageRotation : uint8;
template<> struct TIsUEnumClass<EImageRotation> { enum { Value = true }; };
template<> CAPTUREMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EImageRotation>();
// ********** End Enum EImageRotation **************************************************************

// ********** Begin Enum EAudioFormat **************************************************************
#define FOREACH_ENUM_EAUDIOFORMAT(op) \
	op(EAudioFormat::WAV) 

enum class EAudioFormat : uint8;
template<> struct TIsUEnumClass<EAudioFormat> { enum { Value = true }; };
template<> CAPTUREMANAGEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioFormat>();
// ********** End Enum EAudioFormat ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
