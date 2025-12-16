// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/ControlRigPose.h"

#ifdef CONTROLRIG_ControlRigPose_generated_h
#error "ControlRigPose.generated.h already included, missing '#pragma once' in ControlRigPose.h"
#endif
#define CONTROLRIG_ControlRigPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
struct FControlRigControlPose;

// ********** Begin ScriptStruct FRigControlCopy ***************************************************
struct Z_Construct_UScriptStruct_FRigControlCopy_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigControlCopy_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigControlCopy;
// ********** End ScriptStruct FRigControlCopy *****************************************************

// ********** Begin ScriptStruct FControlRigControlPose ********************************************
struct Z_Construct_UScriptStruct_FControlRigControlPose_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigControlPose_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigControlPose;
// ********** End ScriptStruct FControlRigControlPose **********************************************

// ********** Begin Class UControlRigPoseAsset *****************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDoesMirrorMatch); \
	DECLARE_FUNCTION(execSetUpMirrorMatchTable); \
	DECLARE_FUNCTION(execReplaceControlName); \
	DECLARE_FUNCTION(execGetControlNames); \
	DECLARE_FUNCTION(execGetCurrentPose); \
	DECLARE_FUNCTION(execSelectControls); \
	DECLARE_FUNCTION(execPastePose); \
	DECLARE_FUNCTION(execSavePose);


struct Z_Construct_UClass_UControlRigPoseAsset_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseAsset_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigPoseAsset(); \
	friend struct ::Z_Construct_UClass_UControlRigPoseAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigPoseAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigPoseAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigPoseAsset_NoRegister) \
	DECLARE_SERIALIZER(UControlRigPoseAsset)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigPoseAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigPoseAsset(UControlRigPoseAsset&&) = delete; \
	UControlRigPoseAsset(const UControlRigPoseAsset&) = delete; \
	CONTROLRIG_API virtual ~UControlRigPoseAsset();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_120_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigPoseAsset;

// ********** End Class UControlRigPoseAsset *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
