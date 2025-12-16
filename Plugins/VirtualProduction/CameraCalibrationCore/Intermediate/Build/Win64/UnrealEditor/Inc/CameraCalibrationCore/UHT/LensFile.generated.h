// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensFile.h"

#ifdef CAMERACALIBRATIONCORE_LensFile_generated_h
#error "LensFile.generated.h already included, missing '#pragma once' in LensFile.h"
#endif
#define CAMERACALIBRATIONCORE_LensFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULensDistortionModelHandlerBase;
enum class ELensDataCategory : uint8;
struct FDistortionInfo;
struct FDistortionPointInfo;
struct FFocalLengthInfo;
struct FFocalLengthPointInfo;
struct FImageCenterInfo;
struct FImageCenterPointInfo;
struct FNodalOffsetPointInfo;
struct FNodalPointOffset;
struct FSTMapInfo;
struct FSTMapPointInfo;

// ********** Begin Class ULensFile ****************************************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTotalPointNum); \
	DECLARE_FUNCTION(execHasSamples); \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execChangeZoomPoint); \
	DECLARE_FUNCTION(execHasZoomPoint); \
	DECLARE_FUNCTION(execRemoveZoomPoint); \
	DECLARE_FUNCTION(execMergeFocusPoint); \
	DECLARE_FUNCTION(execChangeFocusPoint); \
	DECLARE_FUNCTION(execHasFocusPoint); \
	DECLARE_FUNCTION(execRemoveFocusPoint); \
	DECLARE_FUNCTION(execAddSTMapPoint); \
	DECLARE_FUNCTION(execAddNodalOffsetPoint); \
	DECLARE_FUNCTION(execAddImageCenterPoint); \
	DECLARE_FUNCTION(execAddFocalLengthPoint); \
	DECLARE_FUNCTION(execAddDistortionPoint); \
	DECLARE_FUNCTION(execGetSTMapPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoint); \
	DECLARE_FUNCTION(execGetImageCenterPoint); \
	DECLARE_FUNCTION(execGetFocalLengthPoint); \
	DECLARE_FUNCTION(execGetDistortionPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoints); \
	DECLARE_FUNCTION(execGetImageCenterPoints); \
	DECLARE_FUNCTION(execGetSTMapPoints); \
	DECLARE_FUNCTION(execGetFocalLengthPoints); \
	DECLARE_FUNCTION(execGetDistortionPoints); \
	DECLARE_FUNCTION(execEvaluateNormalizedIris); \
	DECLARE_FUNCTION(execHasIrisEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNormalizedFocus); \
	DECLARE_FUNCTION(execHasFocusEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNodalPointOffset); \
	DECLARE_FUNCTION(execEvaluateDistortionData); \
	DECLARE_FUNCTION(execEvaluateImageCenterParameters); \
	DECLARE_FUNCTION(execEvaluateFocalLength); \
	DECLARE_FUNCTION(execEvaluateDistortionParameters);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULensFile, CAMERACALIBRATIONCORE_API)


struct Z_Construct_UClass_ULensFile_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensFile(); \
	friend struct ::Z_Construct_UClass_ULensFile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_ULensFile_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensFile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_ULensFile_NoRegister) \
	DECLARE_SERIALIZER(ULensFile) \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensFile(ULensFile&&) = delete; \
	ULensFile(const ULensFile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, ULensFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULensFile) \
	CAMERACALIBRATIONCORE_API virtual ~ULensFile();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_62_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensFile;

// ********** End Class ULensFile ******************************************************************

// ********** Begin ScriptStruct FLensFilePicker ***************************************************
struct Z_Construct_UScriptStruct_FLensFilePicker_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_363_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFilePicker_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FLensFilePicker;
// ********** End ScriptStruct FLensFilePicker *****************************************************

// ********** Begin ScriptStruct FLensFileEvaluationInputs *****************************************
struct Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_383_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FLensFileEvaluationInputs;
// ********** End ScriptStruct FLensFileEvaluationInputs *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h

// ********** Begin Enum ELensDataMode *************************************************************
#define FOREACH_ENUM_ELENSDATAMODE(op) \
	op(ELensDataMode::Parameters) \
	op(ELensDataMode::STMap) 

enum class ELensDataMode : uint8;
template<> struct TIsUEnumClass<ELensDataMode> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELensDataMode>();
// ********** End Enum ELensDataMode ***************************************************************

// ********** Begin Enum ELensDataCategory *********************************************************
#define FOREACH_ENUM_ELENSDATACATEGORY(op) \
	op(ELensDataCategory::Focus) \
	op(ELensDataCategory::Iris) \
	op(ELensDataCategory::Zoom) \
	op(ELensDataCategory::Distortion) \
	op(ELensDataCategory::ImageCenter) \
	op(ELensDataCategory::STMap) \
	op(ELensDataCategory::NodalOffset) 

enum class ELensDataCategory : uint8;
template<> struct TIsUEnumClass<ELensDataCategory> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELensDataCategory>();
// ********** End Enum ELensDataCategory ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
