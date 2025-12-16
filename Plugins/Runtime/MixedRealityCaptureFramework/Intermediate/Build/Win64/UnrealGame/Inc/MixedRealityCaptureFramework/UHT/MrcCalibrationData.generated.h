// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MrcCalibrationData.h"

#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MrcCalibrationData_generated_h
#error "MrcCalibrationData.generated.h already included, missing '#pragma once' in MrcCalibrationData.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MrcCalibrationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMrcLensCalibrationData *******************************************
struct Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics; \
	MIXEDREALITYCAPTUREFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMrcLensCalibrationData;
// ********** End ScriptStruct FMrcLensCalibrationData *********************************************

// ********** Begin ScriptStruct FMrcAlignmentSaveData *********************************************
struct Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics; \
	MIXEDREALITYCAPTUREFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMrcAlignmentSaveData;
// ********** End ScriptStruct FMrcAlignmentSaveData ***********************************************

// ********** Begin ScriptStruct FMrcGarbageMatteSaveData ******************************************
struct Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics; \
	MIXEDREALITYCAPTUREFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMrcGarbageMatteSaveData;
// ********** End ScriptStruct FMrcGarbageMatteSaveData ********************************************

// ********** Begin ScriptStruct FMrcVideoProcessingParams *****************************************
struct Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics; \
	MIXEDREALITYCAPTUREFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMrcVideoProcessingParams;
// ********** End ScriptStruct FMrcVideoProcessingParams *******************************************

// ********** Begin ScriptStruct FMrcCompositingSaveData *******************************************
struct Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics;
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics; \
	MIXEDREALITYCAPTUREFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FMrcCompositingSaveData;
// ********** End ScriptStruct FMrcCompositingSaveData *********************************************

// ********** Begin Class UMrcCalibrationData ******************************************************
struct Z_Construct_UClass_UMrcCalibrationData_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationData_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUMrcCalibrationData(); \
	friend struct ::Z_Construct_UClass_UMrcCalibrationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UMrcCalibrationData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMrcCalibrationData, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UMrcCalibrationData_NoRegister) \
	DECLARE_SERIALIZER(UMrcCalibrationData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcCalibrationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcCalibrationData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcCalibrationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcCalibrationData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMrcCalibrationData(UMrcCalibrationData&&) = delete; \
	UMrcCalibrationData(const UMrcCalibrationData&) = delete; \
	NO_API virtual ~UMrcCalibrationData();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_84_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_87_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMrcCalibrationData;

// ********** End Class UMrcCalibrationData ********************************************************

// ********** Begin Class UMrcCalibrationSaveGame **************************************************
struct Z_Construct_UClass_UMrcCalibrationSaveGame_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationSaveGame_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUMrcCalibrationSaveGame(); \
	friend struct ::Z_Construct_UClass_UMrcCalibrationSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UMrcCalibrationSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UMrcCalibrationSaveGame, UMrcCalibrationData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UMrcCalibrationSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UMrcCalibrationSaveGame)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcCalibrationSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcCalibrationSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcCalibrationSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcCalibrationSaveGame); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMrcCalibrationSaveGame(UMrcCalibrationSaveGame&&) = delete; \
	UMrcCalibrationSaveGame(const UMrcCalibrationSaveGame&) = delete; \
	NO_API virtual ~UMrcCalibrationSaveGame();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_106_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_109_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMrcCalibrationSaveGame;

// ********** End Class UMrcCalibrationSaveGame ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
