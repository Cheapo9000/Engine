// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/MetaHumanCalibrationGeneratorSettings.h"

#ifdef METAHUMANCALIBRATIONGENERATOR_MetaHumanCalibrationGeneratorSettings_generated_h
#error "MetaHumanCalibrationGeneratorSettings.generated.h already included, missing '#pragma once' in MetaHumanCalibrationGeneratorSettings.h"
#endif
#define METAHUMANCALIBRATIONGENERATOR_MetaHumanCalibrationGeneratorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanCalibrationGeneratorSettings ***********************************
struct Z_Construct_UClass_UMetaHumanCalibrationGeneratorSettings_Statics;
METAHUMANCALIBRATIONGENERATOR_API UClass* Z_Construct_UClass_UMetaHumanCalibrationGeneratorSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCalibrationGeneratorSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCalibrationGeneratorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCALIBRATIONGENERATOR_API UClass* ::Z_Construct_UClass_UMetaHumanCalibrationGeneratorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCalibrationGeneratorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanCalibrationGenerator"), Z_Construct_UClass_UMetaHumanCalibrationGeneratorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCalibrationGeneratorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCALIBRATIONGENERATOR_API UMetaHumanCalibrationGeneratorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCalibrationGeneratorSettings(UMetaHumanCalibrationGeneratorSettings&&) = delete; \
	UMetaHumanCalibrationGeneratorSettings(const UMetaHumanCalibrationGeneratorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCALIBRATIONGENERATOR_API, UMetaHumanCalibrationGeneratorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCalibrationGeneratorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCalibrationGeneratorSettings) \
	METAHUMANCALIBRATIONGENERATOR_API virtual ~UMetaHumanCalibrationGeneratorSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_13_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCalibrationGeneratorSettings;

// ********** End Class UMetaHumanCalibrationGeneratorSettings *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_Settings_MetaHumanCalibrationGeneratorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
