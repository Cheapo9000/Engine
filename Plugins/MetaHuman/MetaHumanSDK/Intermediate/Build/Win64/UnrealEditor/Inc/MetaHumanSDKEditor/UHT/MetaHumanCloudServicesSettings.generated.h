// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloud/MetaHumanCloudServicesSettings.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanCloudServicesSettings_generated_h
#error "MetaHumanCloudServicesSettings.generated.h already included, missing '#pragma once' in MetaHumanCloudServicesSettings.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanCloudServicesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEosConstantsPlatform *********************************************
struct Z_Construct_UScriptStruct_FEosConstantsPlatform_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEosConstantsPlatform_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FEosConstantsPlatform;
// ********** End ScriptStruct FEosConstantsPlatform ***********************************************

// ********** Begin Class UMetaHumanCloudServicesSettings ******************************************
struct Z_Construct_UClass_UMetaHumanCloudServicesSettings_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanCloudServicesSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCloudServicesSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCloudServicesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCloudServicesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCloudServicesSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanCloudServicesSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCloudServicesSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MetaHumanSDK");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCloudServicesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCloudServicesSettings(UMetaHumanCloudServicesSettings&&) = delete; \
	UMetaHumanCloudServicesSettings(const UMetaHumanCloudServicesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCloudServicesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCloudServicesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCloudServicesSettings) \
	NO_API virtual ~UMetaHumanCloudServicesSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_42_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCloudServicesSettings;

// ********** End Class UMetaHumanCloudServicesSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_Cloud_MetaHumanCloudServicesSettings_h

// ********** Begin Enum EMetaHumanCloudServiceEnvironment *****************************************
#define FOREACH_ENUM_EMETAHUMANCLOUDSERVICEENVIRONMENT(op) \
	op(EMetaHumanCloudServiceEnvironment::Production) \
	op(EMetaHumanCloudServiceEnvironment::GameDev) 

enum class EMetaHumanCloudServiceEnvironment;
template<> struct TIsUEnumClass<EMetaHumanCloudServiceEnvironment> { enum { Value = true }; };
template<> METAHUMANSDKEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCloudServiceEnvironment>();
// ********** End Enum EMetaHumanCloudServiceEnvironment *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
