// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOSRuntimeSettings.h"

#ifdef IOSRUNTIMESETTINGS_IOSRuntimeSettings_generated_h
#error "IOSRuntimeSettings.generated.h already included, missing '#pragma once' in IOSRuntimeSettings.h"
#endif
#define IOSRUNTIMESETTINGS_IOSRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIOSBuildResourceFilePath *****************************************
struct Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics;
#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_Statics; \
	IOSRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


struct FIOSBuildResourceFilePath;
// ********** End ScriptStruct FIOSBuildResourceFilePath *******************************************

// ********** Begin ScriptStruct FIOSBuildResourceDirectory ****************************************
struct Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics;
#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_Statics; \
	IOSRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


struct FIOSBuildResourceDirectory;
// ********** End ScriptStruct FIOSBuildResourceDirectory ******************************************

// ********** Begin Class UIOSRuntimeSettings ******************************************************
struct Z_Construct_UClass_UIOSRuntimeSettings_Statics;
IOSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UIOSRuntimeSettings_NoRegister();

#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUIOSRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UIOSRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IOSRUNTIMESETTINGS_API UClass* ::Z_Construct_UClass_UIOSRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIOSRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/IOSRuntimeSettings"), Z_Construct_UClass_UIOSRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UIOSRuntimeSettings)


#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOSRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOSRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOSRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOSRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIOSRuntimeSettings(UIOSRuntimeSettings&&) = delete; \
	UIOSRuntimeSettings(const UIOSRuntimeSettings&) = delete; \
	NO_API virtual ~UIOSRuntimeSettings();


#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_176_PROLOG
#define FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS \
	FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIOSRuntimeSettings;

// ********** End Class UIOSRuntimeSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h

// ********** Begin Enum EPowerUsageFrameRateLock **************************************************
#define FOREACH_ENUM_EPOWERUSAGEFRAMERATELOCK(op) \
	op(EPowerUsageFrameRateLock::PUFRL_None) \
	op(EPowerUsageFrameRateLock::PUFRL_20) \
	op(EPowerUsageFrameRateLock::PUFRL_30) \
	op(EPowerUsageFrameRateLock::PUFRL_60) 

enum class EPowerUsageFrameRateLock : uint8;
template<> struct TIsUEnumClass<EPowerUsageFrameRateLock> { enum { Value = true }; };
template<> IOSRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPowerUsageFrameRateLock>();
// ********** End Enum EPowerUsageFrameRateLock ****************************************************

// ********** Begin Enum EIOSVersion ***************************************************************
#define FOREACH_ENUM_EIOSVERSION(op) \
	op(EIOSVersion::IOS_Minimum) \
	op(EIOSVersion::IOS_15) \
	op(EIOSVersion::IOS_16) \
	op(EIOSVersion::IOS_17) 

enum class EIOSVersion : uint8;
template<> struct TIsUEnumClass<EIOSVersion> { enum { Value = true }; };
template<> IOSRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EIOSVersion>();
// ********** End Enum EIOSVersion *****************************************************************

// ********** Begin Enum EIOSMetalShaderStandard ***************************************************
#define FOREACH_ENUM_EIOSMETALSHADERSTANDARD(op) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_Minimum) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_2_4) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_3_0) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_3_1) 

enum class EIOSMetalShaderStandard : uint8;
template<> struct TIsUEnumClass<EIOSMetalShaderStandard> { enum { Value = true }; };
template<> IOSRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EIOSMetalShaderStandard>();
// ********** End Enum EIOSMetalShaderStandard *****************************************************

// ********** Begin Enum EIOSLandscapeOrientation **************************************************
#define FOREACH_ENUM_EIOSLANDSCAPEORIENTATION(op) \
	op(EIOSLandscapeOrientation::LandscapeLeft) \
	op(EIOSLandscapeOrientation::LandscapeRight) 

enum class EIOSLandscapeOrientation : uint8;
template<> struct TIsUEnumClass<EIOSLandscapeOrientation> { enum { Value = true }; };
template<> IOSRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EIOSLandscapeOrientation>();
// ********** End Enum EIOSLandscapeOrientation ****************************************************

// ********** Begin Enum EIOSCloudKitSyncStrategy **************************************************
#define FOREACH_ENUM_EIOSCLOUDKITSYNCSTRATEGY(op) \
	op(EIOSCloudKitSyncStrategy::None) \
	op(EIOSCloudKitSyncStrategy::OnlyAtGameStart) \
	op(EIOSCloudKitSyncStrategy::Always) 

enum class EIOSCloudKitSyncStrategy : uint8;
template<> struct TIsUEnumClass<EIOSCloudKitSyncStrategy> { enum { Value = true }; };
template<> IOSRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EIOSCloudKitSyncStrategy>();
// ********** End Enum EIOSCloudKitSyncStrategy ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
