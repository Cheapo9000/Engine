// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ProjectPackagingSettings.h"

#ifdef DEVELOPERTOOLSETTINGS_ProjectPackagingSettings_generated_h
#error "ProjectPackagingSettings.generated.h already included, missing '#pragma once' in ProjectPackagingSettings.h"
#endif
#define DEVELOPERTOOLSETTINGS_ProjectPackagingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPakOrderFileSpec *************************************************
struct Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics;
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPakOrderFileSpec_Statics; \
	DEVELOPERTOOLSETTINGS_API static class UScriptStruct* StaticStruct();


struct FPakOrderFileSpec;
// ********** End ScriptStruct FPakOrderFileSpec ***************************************************

// ********** Begin ScriptStruct FProjectBuildSettings *********************************************
struct Z_Construct_UScriptStruct_FProjectBuildSettings_Statics;
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProjectBuildSettings_Statics; \
	DEVELOPERTOOLSETTINGS_API static class UScriptStruct* StaticStruct();


struct FProjectBuildSettings;
// ********** End ScriptStruct FProjectBuildSettings ***********************************************

// ********** Begin Class UProjectPackagingSettings ************************************************
struct Z_Construct_UClass_UProjectPackagingSettings_Statics;
DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UProjectPackagingSettings_NoRegister();

#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUProjectPackagingSettings(); \
	friend struct ::Z_Construct_UClass_UProjectPackagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEVELOPERTOOLSETTINGS_API UClass* ::Z_Construct_UClass_UProjectPackagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectPackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), Z_Construct_UClass_UProjectPackagingSettings_NoRegister) \
	DECLARE_SERIALIZER(UProjectPackagingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEVELOPERTOOLSETTINGS_API UProjectPackagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectPackagingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERTOOLSETTINGS_API, UProjectPackagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPackagingSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectPackagingSettings(UProjectPackagingSettings&&) = delete; \
	UProjectPackagingSettings(const UProjectPackagingSettings&) = delete; \
	DEVELOPERTOOLSETTINGS_API virtual ~UProjectPackagingSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_178_PROLOG
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_182_INCLASS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectPackagingSettings;

// ********** End Class UProjectPackagingSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_ProjectPackagingSettings_h

// ********** Begin Enum EProjectPackagingBuildConfigurations **************************************
#define FOREACH_ENUM_EPROJECTPACKAGINGBUILDCONFIGURATIONS(op) \
	op(EProjectPackagingBuildConfigurations::PPBC_Debug) \
	op(EProjectPackagingBuildConfigurations::PPBC_DebugGame) \
	op(EProjectPackagingBuildConfigurations::PPBC_Development) \
	op(EProjectPackagingBuildConfigurations::PPBC_Test) \
	op(EProjectPackagingBuildConfigurations::PPBC_Shipping) 

enum class EProjectPackagingBuildConfigurations : uint8;
template<> struct TIsUEnumClass<EProjectPackagingBuildConfigurations> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectPackagingBuildConfigurations>();
// ********** End Enum EProjectPackagingBuildConfigurations ****************************************

// ********** Begin Enum EProjectPackagingInternationalizationPresets ******************************
#define FOREACH_ENUM_EPROJECTPACKAGINGINTERNATIONALIZATIONPRESETS(op) \
	op(EProjectPackagingInternationalizationPresets::English) \
	op(EProjectPackagingInternationalizationPresets::EFIGS) \
	op(EProjectPackagingInternationalizationPresets::EFIGSCJK) \
	op(EProjectPackagingInternationalizationPresets::CJK) \
	op(EProjectPackagingInternationalizationPresets::All) 

enum class EProjectPackagingInternationalizationPresets : uint8;
template<> struct TIsUEnumClass<EProjectPackagingInternationalizationPresets> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectPackagingInternationalizationPresets>();
// ********** End Enum EProjectPackagingInternationalizationPresets ********************************

// ********** Begin Enum EProjectPackagingBuild ****************************************************
#define FOREACH_ENUM_EPROJECTPACKAGINGBUILD(op) \
	op(EProjectPackagingBuild::Always) \
	op(EProjectPackagingBuild::Never) \
	op(EProjectPackagingBuild::IfProjectHasCode) \
	op(EProjectPackagingBuild::IfEditorWasBuiltLocally) 

enum class EProjectPackagingBuild;
template<> struct TIsUEnumClass<EProjectPackagingBuild> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectPackagingBuild>();
// ********** End Enum EProjectPackagingBuild ******************************************************

// ********** Begin Enum EProjectPackagingBlueprintNativizationMethod ******************************
#define FOREACH_ENUM_EPROJECTPACKAGINGBLUEPRINTNATIVIZATIONMETHOD(op) \
	op(EProjectPackagingBlueprintNativizationMethod::Disabled) \
	op(EProjectPackagingBlueprintNativizationMethod::Inclusive) \
	op(EProjectPackagingBlueprintNativizationMethod::Exclusive) 

enum class EProjectPackagingBlueprintNativizationMethod : uint8;
template<> struct TIsUEnumClass<EProjectPackagingBlueprintNativizationMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectPackagingBlueprintNativizationMethod>();
// ********** End Enum EProjectPackagingBlueprintNativizationMethod ********************************

// ********** Begin Enum EAssetRegistryWritebackMethod *********************************************
#define FOREACH_ENUM_EASSETREGISTRYWRITEBACKMETHOD(op) \
	op(EAssetRegistryWritebackMethod::Disabled) \
	op(EAssetRegistryWritebackMethod::OriginalFile) \
	op(EAssetRegistryWritebackMethod::AdjacentFile) 

enum class EAssetRegistryWritebackMethod : uint8;
template<> struct TIsUEnumClass<EAssetRegistryWritebackMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetRegistryWritebackMethod>();
// ********** End Enum EAssetRegistryWritebackMethod ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
