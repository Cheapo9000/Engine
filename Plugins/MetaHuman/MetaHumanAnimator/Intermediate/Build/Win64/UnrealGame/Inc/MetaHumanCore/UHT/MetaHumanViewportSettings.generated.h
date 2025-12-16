// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanViewportSettings.h"

#ifdef METAHUMANCORE_MetaHumanViewportSettings_generated_h
#error "MetaHumanViewportSettings.generated.h already included, missing '#pragma once' in MetaHumanViewportSettings.h"
#endif
#define METAHUMANCORE_MetaHumanViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EABImageViewMode : int32;

// ********** Begin ScriptStruct FMetaHumanViewportState *******************************************
struct Z_Construct_UScriptStruct_FMetaHumanViewportState_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanViewportState_Statics; \
	METAHUMANCORE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanViewportState;
// ********** End ScriptStruct FMetaHumanViewportState *********************************************

// ********** Begin ScriptStruct FMetaHumanViewportCameraState *************************************
struct Z_Construct_UScriptStruct_FMetaHumanViewportCameraState_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanViewportCameraState_Statics; \
	METAHUMANCORE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanViewportCameraState;
// ********** End ScriptStruct FMetaHumanViewportCameraState ***************************************

// ********** Begin Class UMetaHumanViewportSettings ***********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsShowingUndistorted); \
	DECLARE_FUNCTION(execToggleDistortion); \
	DECLARE_FUNCTION(execIsDepthMeshVisible); \
	DECLARE_FUNCTION(execToggleDepthMeshVisibility); \
	DECLARE_FUNCTION(execIsFootageVisible); \
	DECLARE_FUNCTION(execToggleFootageVisibility); \
	DECLARE_FUNCTION(execIsSkeletalMeshVisible); \
	DECLARE_FUNCTION(execToggleSkeletalMeshVisibility); \
	DECLARE_FUNCTION(execIsShowingControlVertices); \
	DECLARE_FUNCTION(execToggleShowControlVertices); \
	DECLARE_FUNCTION(execIsShowingCurves); \
	DECLARE_FUNCTION(execToggleShowCurves); \
	DECLARE_FUNCTION(execIsShowingSingleView); \
	DECLARE_FUNCTION(execSetViewModeIndex); \
	DECLARE_FUNCTION(execSetEV100); \
	DECLARE_FUNCTION(execGetEV100); \
	DECLARE_FUNCTION(execGetViewModeIndex);


struct Z_Construct_UClass_UMetaHumanViewportSettings_Statics;
METAHUMANCORE_API UClass* Z_Construct_UClass_UMetaHumanViewportSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanViewportSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCORE_API UClass* ::Z_Construct_UClass_UMetaHumanViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanViewportSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCore"), Z_Construct_UClass_UMetaHumanViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanViewportSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanViewportSettings(UMetaHumanViewportSettings&&) = delete; \
	UMetaHumanViewportSettings(const UMetaHumanViewportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCORE_API, UMetaHumanViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanViewportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanViewportSettings) \
	METAHUMANCORE_API virtual ~UMetaHumanViewportSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_90_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanViewportSettings;

// ********** End Class UMetaHumanViewportSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCore_Public_MetaHumanViewportSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
