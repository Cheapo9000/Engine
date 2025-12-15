// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookerSettings.h"

#ifdef DEVELOPERTOOLSETTINGS_CookerSettings_generated_h
#error "CookerSettings.generated.h already included, missing '#pragma once' in CookerSettings.h"
#endif
#define DEVELOPERTOOLSETTINGS_CookerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookerSettings **********************************************************
struct Z_Construct_UClass_UCookerSettings_Statics;
DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UCookerSettings_NoRegister();

#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUCookerSettings(); \
	friend struct ::Z_Construct_UClass_UCookerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEVELOPERTOOLSETTINGS_API UClass* ::Z_Construct_UClass_UCookerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), Z_Construct_UClass_UCookerSettings_NoRegister) \
	DECLARE_SERIALIZER(UCookerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEVELOPERTOOLSETTINGS_API UCookerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERTOOLSETTINGS_API, UCookerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookerSettings(UCookerSettings&&) = delete; \
	UCookerSettings(const UCookerSettings&) = delete; \
	DEVELOPERTOOLSETTINGS_API virtual ~UCookerSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_89_PROLOG
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_92_INCLASS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookerSettings;

// ********** End Class UCookerSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h

// ********** Begin Enum ECookProgressDisplayMode **************************************************
#define FOREACH_ENUM_ECOOKPROGRESSDISPLAYMODE(op) \
	op(ECookProgressDisplayMode::Nothing) \
	op(ECookProgressDisplayMode::RemainingPackages) \
	op(ECookProgressDisplayMode::PackageNames) \
	op(ECookProgressDisplayMode::NamesAndRemainingPackages) \
	op(ECookProgressDisplayMode::Instigators) \
	op(ECookProgressDisplayMode::InstigatorsAndCount) \
	op(ECookProgressDisplayMode::InstigatorsAndNames) \
	op(ECookProgressDisplayMode::InstigatorsAndNamesAndCount) \
	op(ECookProgressDisplayMode::Max) 

enum class ECookProgressDisplayMode : int32;
template<> struct TIsUEnumClass<ECookProgressDisplayMode> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECookProgressDisplayMode>();
// ********** End Enum ECookProgressDisplayMode ****************************************************

// ********** Begin Enum EBlueprintComponentDataCookingMethod **************************************
#define FOREACH_ENUM_EBLUEPRINTCOMPONENTDATACOOKINGMETHOD(op) \
	op(EBlueprintComponentDataCookingMethod::Disabled) \
	op(EBlueprintComponentDataCookingMethod::AllBlueprints) \
	op(EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly) 

enum class EBlueprintComponentDataCookingMethod;
template<> struct TIsUEnumClass<EBlueprintComponentDataCookingMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintComponentDataCookingMethod>();
// ********** End Enum EBlueprintComponentDataCookingMethod ****************************************

// ********** Begin Enum EBlueprintPropertyGuidsCookingMethod **************************************
#define FOREACH_ENUM_EBLUEPRINTPROPERTYGUIDSCOOKINGMETHOD(op) \
	op(EBlueprintPropertyGuidsCookingMethod::Disabled) \
	op(EBlueprintPropertyGuidsCookingMethod::AllBlueprints) \
	op(EBlueprintPropertyGuidsCookingMethod::EnabledBlueprintsOnly) 

enum class EBlueprintPropertyGuidsCookingMethod;
template<> struct TIsUEnumClass<EBlueprintPropertyGuidsCookingMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintPropertyGuidsCookingMethod>();
// ********** End Enum EBlueprintPropertyGuidsCookingMethod ****************************************

// ********** Begin Enum ETextureFormatASTCCompressor **********************************************
#define FOREACH_ENUM_ETEXTUREFORMATASTCCOMPRESSOR(op) \
	op(ETextureFormatASTCCompressor::IntelISPC) \
	op(ETextureFormatASTCCompressor::Arm) \
	op(ETextureFormatASTCCompressor::Max) 

enum class ETextureFormatASTCCompressor;
template<> struct TIsUEnumClass<ETextureFormatASTCCompressor> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureFormatASTCCompressor>();
// ********** End Enum ETextureFormatASTCCompressor ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
