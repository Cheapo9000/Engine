// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequence/VirtualCameraClipsMetaData.h"

#ifdef VIRTUALCAMERA_VirtualCameraClipsMetaData_generated_h
#error "VirtualCameraClipsMetaData.generated.h already included, missing '#pragma once' in VirtualCameraClipsMetaData.h"
#endif
#define VIRTUALCAMERA_VirtualCameraClipsMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameRate;

// ********** Begin Class UVirtualCameraClipsMetaData **********************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetIsACineCameraRecording); \
	DECLARE_FUNCTION(execSetDisplayRate); \
	DECLARE_FUNCTION(execSetLengthInFrames); \
	DECLARE_FUNCTION(execSetFrameCountEnd); \
	DECLARE_FUNCTION(execSetFrameCountStart); \
	DECLARE_FUNCTION(execSetRecordedLevelName); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetIsACineCameraRecording); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execGetLengthInFrames); \
	DECLARE_FUNCTION(execGetFrameCountEnd); \
	DECLARE_FUNCTION(execGetFrameCountStart); \
	DECLARE_FUNCTION(execGetRecordedLevelName); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execGetAllClipsMetaDataTags); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_PostSmoothLevel); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsCreatedFromVCam); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FavoriteLevel); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsFlagged); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsNoGood); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsCineACineCameraRecording); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_DisplayRate); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_LengthInFrames); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FrameCountEnd); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FrameCountStart); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_RecordedLevel); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsSelected); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FocalLength);


struct Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraClipsMetaData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraClipsMetaData(); \
	friend struct ::Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UVirtualCameraClipsMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualCameraClipsMetaData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UVirtualCameraClipsMetaData_NoRegister) \
	DECLARE_SERIALIZER(UVirtualCameraClipsMetaData) \
	virtual UObject* _getUObject() const override { return const_cast<UVirtualCameraClipsMetaData*>(this); }


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualCameraClipsMetaData(UVirtualCameraClipsMetaData&&) = delete; \
	UVirtualCameraClipsMetaData(const UVirtualCameraClipsMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraClipsMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraClipsMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraClipsMetaData) \
	NO_API virtual ~UVirtualCameraClipsMetaData();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualCameraClipsMetaData;

// ********** End Class UVirtualCameraClipsMetaData ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
