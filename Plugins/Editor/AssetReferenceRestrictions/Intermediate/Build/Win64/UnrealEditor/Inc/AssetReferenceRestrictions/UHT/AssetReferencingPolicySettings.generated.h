// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetReferencingPolicySettings.h"

#ifdef ASSETREFERENCERESTRICTIONS_AssetReferencingPolicySettings_generated_h
#error "AssetReferencingPolicySettings.generated.h already included, missing '#pragma once' in AssetReferencingPolicySettings.h"
#endif
#define ASSETREFERENCERESTRICTIONS_AssetReferencingPolicySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FARPDefaultPluginDomainRules **************************************
struct Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics;
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


struct FARPDefaultPluginDomainRules;
// ********** End ScriptStruct FARPDefaultPluginDomainRules ****************************************

// ********** Begin ScriptStruct FARPDomainDefinitionForMatchingPlugins ****************************
struct Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics;
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


struct FARPDomainDefinitionForMatchingPlugins;
// ********** End ScriptStruct FARPDomainDefinitionForMatchingPlugins ******************************

// ********** Begin ScriptStruct FARPDomainSettingsForPlugins **************************************
struct Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics;
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


struct FARPDomainSettingsForPlugins;
// ********** End ScriptStruct FARPDomainSettingsForPlugins ****************************************

// ********** Begin ScriptStruct FARPDefaultProjectDomainRules *************************************
struct Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics;
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


struct FARPDefaultProjectDomainRules;
// ********** End ScriptStruct FARPDefaultProjectDomainRules ***************************************

// ********** Begin ScriptStruct FARPDomainDefinitionByContentRoot *********************************
struct Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics;
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


struct FARPDomainDefinitionByContentRoot;
// ********** End ScriptStruct FARPDomainDefinitionByContentRoot ***********************************

// ********** Begin Class UAssetReferencingPolicySettings ******************************************
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetListOfDomains_NoPluginsOrEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngineOrGame); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_All);


struct Z_Construct_UClass_UAssetReferencingPolicySettings_Statics;
ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UAssetReferencingPolicySettings_NoRegister();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetReferencingPolicySettings(); \
	friend struct ::Z_Construct_UClass_UAssetReferencingPolicySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETREFERENCERESTRICTIONS_API UClass* ::Z_Construct_UClass_UAssetReferencingPolicySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetReferencingPolicySettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetReferenceRestrictions"), Z_Construct_UClass_UAssetReferencingPolicySettings_NoRegister) \
	DECLARE_SERIALIZER(UAssetReferencingPolicySettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetReferencingPolicySettings(UAssetReferencingPolicySettings&&) = delete; \
	UAssetReferencingPolicySettings(const UAssetReferencingPolicySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREFERENCERESTRICTIONS_API, UAssetReferencingPolicySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetReferencingPolicySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetReferencingPolicySettings) \
	ASSETREFERENCERESTRICTIONS_API virtual ~UAssetReferencingPolicySettings();


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_179_PROLOG
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetReferencingPolicySettings;

// ********** End Class UAssetReferencingPolicySettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h

// ********** Begin Enum EARPPluginMatchMode *******************************************************
#define FOREACH_ENUM_EARPPLUGINMATCHMODE(op) \
	op(EARPPluginMatchMode::MatchByCategory) \
	op(EARPPluginMatchMode::MatchByPathPrefix) 

enum class EARPPluginMatchMode : uint8;
template<> struct TIsUEnumClass<EARPPluginMatchMode> { enum { Value = true }; };
template<> ASSETREFERENCERESTRICTIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EARPPluginMatchMode>();
// ********** End Enum EARPPluginMatchMode *********************************************************

// ********** Begin Enum EARPDomainAllowedToReferenceMode ******************************************
#define FOREACH_ENUM_EARPDOMAINALLOWEDTOREFERENCEMODE(op) \
	op(EARPDomainAllowedToReferenceMode::AdditionalDomains) \
	op(EARPDomainAllowedToReferenceMode::AllDomains) 

enum class EARPDomainAllowedToReferenceMode : uint8;
template<> struct TIsUEnumClass<EARPDomainAllowedToReferenceMode> { enum { Value = true }; };
template<> ASSETREFERENCERESTRICTIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EARPDomainAllowedToReferenceMode>();
// ********** End Enum EARPDomainAllowedToReferenceMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
