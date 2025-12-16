// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/FilterBoneOp.h"

#ifdef IKRIG_FilterBoneOp_generated_h
#error "FilterBoneOp.generated.h already included, missing '#pragma once' in FilterBoneOp.h"
#endif
#define IKRIG_FilterBoneOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetFilterBoneOpSettings;

// ********** Begin ScriptStruct FFilterBoneData ***************************************************
struct Z_Construct_UScriptStruct_FFilterBoneData_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFilterBoneData_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FFilterBoneData;
// ********** End ScriptStruct FFilterBoneData *****************************************************

// ********** Begin ScriptStruct FIKRetargetFilterBoneOpSettings ***********************************
struct Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFilterBoneOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetFilterBoneOpSettings;
// ********** End ScriptStruct FIKRetargetFilterBoneOpSettings *************************************

// ********** Begin ScriptStruct FIKRetargetFilterBoneOp *******************************************
struct Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFilterBoneOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetFilterBoneOp;
// ********** End ScriptStruct FIKRetargetFilterBoneOp *********************************************

// ********** Begin Class UIKRetargetFilterBoneController ******************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllBonesToFilter); \
	DECLARE_FUNCTION(execAddBoneToFilter); \
	DECLARE_FUNCTION(execClearBonesToFilter); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetFilterBoneController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetFilterBoneController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetFilterBoneController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetFilterBoneController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetFilterBoneController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetFilterBoneController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetFilterBoneController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetFilterBoneController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetFilterBoneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetFilterBoneController(UIKRetargetFilterBoneController&&) = delete; \
	UIKRetargetFilterBoneController(const UIKRetargetFilterBoneController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetFilterBoneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetFilterBoneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetFilterBoneController) \
	IKRIG_API virtual ~UIKRetargetFilterBoneController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_125_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetFilterBoneController;

// ********** End Class UIKRetargetFilterBoneController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FilterBoneOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
