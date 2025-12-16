// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaIOCoreDefinitions.h"

#ifdef MEDIAIOCORE_MediaIOCoreDefinitions_generated_h
#error "MediaIOCoreDefinitions.generated.h already included, missing '#pragma once' in MediaIOCoreDefinitions.h"
#endif
#define MEDIAIOCORE_MediaIOCoreDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaIOAutoDetectableTimecodeFormat_Backup ***********************
struct Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOAutoDetectableTimecodeFormat_Backup;
// ********** End ScriptStruct FMediaIOAutoDetectableTimecodeFormat_Backup *************************

// ********** Begin ScriptStruct FMediaIODevice ****************************************************
struct Z_Construct_UScriptStruct_FMediaIODevice_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIODevice_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIODevice;
// ********** End ScriptStruct FMediaIODevice ******************************************************

// ********** Begin ScriptStruct FMediaIOConnection ************************************************
struct Z_Construct_UScriptStruct_FMediaIOConnection_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOConnection_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOConnection;
// ********** End ScriptStruct FMediaIOConnection **************************************************

// ********** Begin ScriptStruct FMediaIOMode ******************************************************
struct Z_Construct_UScriptStruct_FMediaIOMode_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_251_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOMode_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOMode;
// ********** End ScriptStruct FMediaIOMode ********************************************************

// ********** Begin ScriptStruct FMediaIOConfiguration *********************************************
struct Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_290_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOConfiguration;
// ********** End ScriptStruct FMediaIOConfiguration ***********************************************

// ********** Begin ScriptStruct FMediaIOInputConfiguration ****************************************
struct Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOInputConfiguration;
// ********** End ScriptStruct FMediaIOInputConfiguration ******************************************

// ********** Begin ScriptStruct FMediaIOOutputConfiguration ***************************************
struct Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOOutputConfiguration;
// ********** End ScriptStruct FMediaIOOutputConfiguration *****************************************

// ********** Begin ScriptStruct FMediaIOVideoTimecodeConfiguration ********************************
struct Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_393_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaIOVideoTimecodeConfiguration;
// ********** End ScriptStruct FMediaIOVideoTimecodeConfiguration **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h

// ********** Begin Enum EMediaIOTransportType *****************************************************
#define FOREACH_ENUM_EMEDIAIOTRANSPORTTYPE(op) \
	op(EMediaIOTransportType::SingleLink) \
	op(EMediaIOTransportType::DualLink) \
	op(EMediaIOTransportType::QuadLink) \
	op(EMediaIOTransportType::HDMI) 

enum class EMediaIOTransportType;
template<> struct TIsUEnumClass<EMediaIOTransportType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOTransportType>();
// ********** End Enum EMediaIOTransportType *******************************************************

// ********** Begin Enum EMediaIOQuadLinkTransportType *********************************************
#define FOREACH_ENUM_EMEDIAIOQUADLINKTRANSPORTTYPE(op) \
	op(EMediaIOQuadLinkTransportType::SquareDivision) \
	op(EMediaIOQuadLinkTransportType::TwoSampleInterleave) 

enum class EMediaIOQuadLinkTransportType;
template<> struct TIsUEnumClass<EMediaIOQuadLinkTransportType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOQuadLinkTransportType>();
// ********** End Enum EMediaIOQuadLinkTransportType ***********************************************

// ********** Begin Enum EMediaIOStandardType ******************************************************
#define FOREACH_ENUM_EMEDIAIOSTANDARDTYPE(op) \
	op(EMediaIOStandardType::Progressive) \
	op(EMediaIOStandardType::Interlaced) \
	op(EMediaIOStandardType::ProgressiveSegmentedFrame) 

enum class EMediaIOStandardType;
template<> struct TIsUEnumClass<EMediaIOStandardType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOStandardType>();
// ********** End Enum EMediaIOStandardType ********************************************************

// ********** Begin Enum EMediaIOTimecodeFormat ****************************************************
#define FOREACH_ENUM_EMEDIAIOTIMECODEFORMAT(op) \
	op(EMediaIOTimecodeFormat::None) \
	op(EMediaIOTimecodeFormat::LTC) \
	op(EMediaIOTimecodeFormat::VITC) 

enum class EMediaIOTimecodeFormat;
template<> struct TIsUEnumClass<EMediaIOTimecodeFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOTimecodeFormat>();
// ********** End Enum EMediaIOTimecodeFormat ******************************************************

// ********** Begin Enum EMediaIOAutoDetectableTimecodeFormat **************************************
#define FOREACH_ENUM_EMEDIAIOAUTODETECTABLETIMECODEFORMAT(op) \
	op(EMediaIOAutoDetectableTimecodeFormat::None) \
	op(EMediaIOAutoDetectableTimecodeFormat::LTC) \
	op(EMediaIOAutoDetectableTimecodeFormat::VITC) \
	op(EMediaIOAutoDetectableTimecodeFormat::Auto) 

enum class EMediaIOAutoDetectableTimecodeFormat : uint8;
template<> struct TIsUEnumClass<EMediaIOAutoDetectableTimecodeFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOAutoDetectableTimecodeFormat>();
// ********** End Enum EMediaIOAutoDetectableTimecodeFormat ****************************************

// ********** Begin Enum EMediaIOInterlaceFieldOrder ***********************************************
#define FOREACH_ENUM_EMEDIAIOINTERLACEFIELDORDER(op) \
	op(EMediaIOInterlaceFieldOrder::TopFieldFirst) \
	op(EMediaIOInterlaceFieldOrder::BottomFieldFirst) 

enum class EMediaIOInterlaceFieldOrder : uint8;
template<> struct TIsUEnumClass<EMediaIOInterlaceFieldOrder> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOInterlaceFieldOrder>();
// ********** End Enum EMediaIOInterlaceFieldOrder *************************************************

// ********** Begin Enum EMediaIOSampleEvaluationType **********************************************
#define FOREACH_ENUM_EMEDIAIOSAMPLEEVALUATIONTYPE(op) \
	op(EMediaIOSampleEvaluationType::Latest) \
	op(EMediaIOSampleEvaluationType::PlatformTime) \
	op(EMediaIOSampleEvaluationType::Timecode) 

enum class EMediaIOSampleEvaluationType : uint8;
template<> struct TIsUEnumClass<EMediaIOSampleEvaluationType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOSampleEvaluationType>();
// ********** End Enum EMediaIOSampleEvaluationType ************************************************

// ********** Begin Enum EMediaIOInputType *********************************************************
#define FOREACH_ENUM_EMEDIAIOINPUTTYPE(op) \
	op(EMediaIOInputType::Fill) \
	op(EMediaIOInputType::FillAndKey) 

enum class EMediaIOInputType;
template<> struct TIsUEnumClass<EMediaIOInputType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOInputType>();
// ********** End Enum EMediaIOInputType ***********************************************************

// ********** Begin Enum EMediaIOOutputType ********************************************************
#define FOREACH_ENUM_EMEDIAIOOUTPUTTYPE(op) \
	op(EMediaIOOutputType::Fill) \
	op(EMediaIOOutputType::FillAndKey) 

enum class EMediaIOOutputType;
template<> struct TIsUEnumClass<EMediaIOOutputType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOOutputType>();
// ********** End Enum EMediaIOOutputType **********************************************************

// ********** Begin Enum EMediaIOReferenceType *****************************************************
#define FOREACH_ENUM_EMEDIAIOREFERENCETYPE(op) \
	op(EMediaIOReferenceType::FreeRun) \
	op(EMediaIOReferenceType::External) \
	op(EMediaIOReferenceType::Input) 

enum class EMediaIOReferenceType;
template<> struct TIsUEnumClass<EMediaIOReferenceType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOReferenceType>();
// ********** End Enum EMediaIOReferenceType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
