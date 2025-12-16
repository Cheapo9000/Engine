// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidDeviceProfileMatchingRules.h"

#ifdef ANDROIDDEVICEPROFILESELECTOR_AndroidDeviceProfileMatchingRules_generated_h
#error "AndroidDeviceProfileMatchingRules.generated.h already included, missing '#pragma once' in AndroidDeviceProfileMatchingRules.h"
#endif
#define ANDROIDDEVICEPROFILESELECTOR_AndroidDeviceProfileMatchingRules_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProfileMatchItem *************************************************
struct Z_Construct_UScriptStruct_FProfileMatchItem_Statics;
#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileMatchItem_Statics; \
	ANDROIDDEVICEPROFILESELECTOR_API static class UScriptStruct* StaticStruct();


struct FProfileMatchItem;
// ********** End ScriptStruct FProfileMatchItem ***************************************************

// ********** Begin ScriptStruct FProfileMatch *****************************************************
struct Z_Construct_UScriptStruct_FProfileMatch_Statics;
#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileMatch_Statics; \
	ANDROIDDEVICEPROFILESELECTOR_API static class UScriptStruct* StaticStruct();


struct FProfileMatch;
// ********** End ScriptStruct FProfileMatch *******************************************************

// ********** Begin Class UAndroidDeviceProfileMatchingRules ***************************************
struct Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics;
ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister();

#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidDeviceProfileMatchingRules(); \
	friend struct ::Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDDEVICEPROFILESELECTOR_API UClass* ::Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidDeviceProfileMatchingRules, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidDeviceProfileSelector"), Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister) \
	DECLARE_SERIALIZER(UAndroidDeviceProfileMatchingRules) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidDeviceProfileMatchingRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidDeviceProfileMatchingRules) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidDeviceProfileMatchingRules); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidDeviceProfileMatchingRules); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidDeviceProfileMatchingRules(UAndroidDeviceProfileMatchingRules&&) = delete; \
	UAndroidDeviceProfileMatchingRules(const UAndroidDeviceProfileMatchingRules&) = delete; \
	NO_API virtual ~UAndroidDeviceProfileMatchingRules();


#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_80_INCLASS \
	FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidDeviceProfileMatchingRules;

// ********** End Class UAndroidDeviceProfileMatchingRules *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h

// ********** Begin Enum ESourceType ***************************************************************
#define FOREACH_ENUM_ESOURCETYPE(op) \
	op(SRC_PreviousRegexMatch) \
	op(SRC_GpuFamily) \
	op(SRC_GlVersion) \
	op(SRC_AndroidVersion) \
	op(SRC_DeviceMake) \
	op(SRC_DeviceModel) \
	op(SRC_DeviceBuildNumber) \
	op(SRC_VulkanVersion) \
	op(SRC_UsingHoudini) \
	op(SRC_VulkanAvailable) \
	op(SRC_CommandLine) \
	op(SRC_Hardware) \
	op(SRC_Chipset) \
	op(SRC_ConfigRuleVar) \
	op(SRC_HMDSystemName) \
	op(SRC_SM5Available) \
	op(SRC_VKQuality) 

enum ESourceType : int;
template<> ANDROIDDEVICEPROFILESELECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESourceType>();
// ********** End Enum ESourceType *****************************************************************

// ********** Begin Enum ECompareType **************************************************************
#define FOREACH_ENUM_ECOMPARETYPE(op) \
	op(CMP_Equal) \
	op(CMP_Less) \
	op(CMP_LessEqual) \
	op(CMP_Greater) \
	op(CMP_GreaterEqual) \
	op(CMP_NotEqual) \
	op(CMP_Regex) \
	op(CMP_EqualIgnore) \
	op(CMP_LessIgnore) \
	op(CMP_LessEqualIgnore) \
	op(CMP_GreaterIgnore) \
	op(CMP_GreaterEqualIgnore) \
	op(CMP_NotEqualIgnore) \
	op(CMP_Hash) 

enum ECompareType : int;
template<> ANDROIDDEVICEPROFILESELECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompareType>();
// ********** End Enum ECompareType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
