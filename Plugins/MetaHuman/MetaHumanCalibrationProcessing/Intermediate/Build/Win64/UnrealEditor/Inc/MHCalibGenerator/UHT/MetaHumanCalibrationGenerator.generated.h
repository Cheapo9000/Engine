// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCalibrationGenerator.h"

#ifdef METAHUMANCALIBRATIONGENERATOR_MetaHumanCalibrationGenerator_generated_h
#error "MetaHumanCalibrationGenerator.generated.h already included, missing '#pragma once' in MetaHumanCalibrationGenerator.h"
#endif
#define METAHUMANCALIBRATIONGENERATOR_MetaHumanCalibrationGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFootageCaptureData;
class UMetaHumanCalibrationGeneratorConfig;
class UMetaHumanCalibrationGeneratorOptions;

// ********** Begin Class UMetaHumanCalibrationGenerator *******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastRMSError); \
	DECLARE_FUNCTION(execProcess); \
	DECLARE_FUNCTION(execConfigureCameras); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UMetaHumanCalibrationGenerator_Statics;
METAHUMANCALIBRATIONGENERATOR_API UClass* Z_Construct_UClass_UMetaHumanCalibrationGenerator_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCalibrationGenerator(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCalibrationGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCALIBRATIONGENERATOR_API UClass* ::Z_Construct_UClass_UMetaHumanCalibrationGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCalibrationGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCalibrationGenerator"), Z_Construct_UClass_UMetaHumanCalibrationGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCalibrationGenerator)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCalibrationGenerator(UMetaHumanCalibrationGenerator&&) = delete; \
	UMetaHumanCalibrationGenerator(const UMetaHumanCalibrationGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCalibrationGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCalibrationGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCalibrationGenerator) \
	NO_API virtual ~UMetaHumanCalibrationGenerator();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_15_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCalibrationGenerator;

// ********** End Class UMetaHumanCalibrationGenerator *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCalibrationProcessing_Source_MetaHumanCalibrationGenerator_Private_MetaHumanCalibrationGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
