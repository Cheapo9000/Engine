// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMetaHumanRobustFeatureMatcher.h"

#ifdef METAHUMANCALIBRATIONDIAGNOSTICS_UMetaHumanRobustFeatureMatcher_generated_h
#error "UMetaHumanRobustFeatureMatcher.generated.h already included, missing '#pragma once' in UMetaHumanRobustFeatureMatcher.h"
#endif
#define METAHUMANCALIBRATIONDIAGNOSTICS_UMetaHumanRobustFeatureMatcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFootageCaptureData;
class UMetaHumanCalibrationDiagnosticsOptions;
struct FDetectedFeatures;

// ********** Begin ScriptStruct FCameraPoints *****************************************************
struct Z_Construct_UScriptStruct_FCameraPoints_Statics;
#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraPoints_Statics; \
	METAHUMANCALIBRATIONDIAGNOSTICS_API static class UScriptStruct* StaticStruct();


struct FCameraPoints;
// ********** End ScriptStruct FCameraPoints *******************************************************

// ********** Begin ScriptStruct FDetectedFeatures *************************************************
struct Z_Construct_UScriptStruct_FDetectedFeatures_Statics;
#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDetectedFeatures_Statics; \
	METAHUMANCALIBRATIONDIAGNOSTICS_API static class UScriptStruct* StaticStruct();


struct FDetectedFeatures;
// ********** End ScriptStruct FDetectedFeatures ***************************************************

// ********** Begin Class UMetaHumanRobustFeatureMatcher *******************************************
#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetImagePaths); \
	DECLARE_FUNCTION(execGetFeatures); \
	DECLARE_FUNCTION(execDetectFeatures); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UMetaHumanRobustFeatureMatcher_Statics;
METAHUMANCALIBRATIONDIAGNOSTICS_API UClass* Z_Construct_UClass_UMetaHumanRobustFeatureMatcher_NoRegister();

#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanRobustFeatureMatcher(); \
	friend struct ::Z_Construct_UClass_UMetaHumanRobustFeatureMatcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCALIBRATIONDIAGNOSTICS_API UClass* ::Z_Construct_UClass_UMetaHumanRobustFeatureMatcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanRobustFeatureMatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCalibrationDiagnostics"), Z_Construct_UClass_UMetaHumanRobustFeatureMatcher_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanRobustFeatureMatcher)


#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanRobustFeatureMatcher(UMetaHumanRobustFeatureMatcher&&) = delete; \
	UMetaHumanRobustFeatureMatcher(const UMetaHumanRobustFeatureMatcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanRobustFeatureMatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanRobustFeatureMatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanRobustFeatureMatcher) \
	NO_API virtual ~UMetaHumanRobustFeatureMatcher();


#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanRobustFeatureMatcher;

// ********** End Class UMetaHumanRobustFeatureMatcher *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MetaHuman_MetaHumanCalibrationDiagnostics_Source_MetaHumanCalibrationDiagnostics_Private_UMetaHumanRobustFeatureMatcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
