// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/RetargetPoseOp.h"

#ifdef IKRIG_RetargetPoseOp_generated_h
#error "RetargetPoseOp.generated.h already included, missing '#pragma once' in RetargetPoseOp.h"
#endif
#define IKRIG_RetargetPoseOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetAdditivePoseOpSettings;

// ********** Begin ScriptStruct FIKRetargetAdditivePoseOpSettings *********************************
struct Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetAdditivePoseOpSettings;
// ********** End ScriptStruct FIKRetargetAdditivePoseOpSettings ***********************************

// ********** Begin ScriptStruct FIKRetargetAdditivePoseOp *****************************************
struct Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetAdditivePoseOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetAdditivePoseOp;
// ********** End ScriptStruct FIKRetargetAdditivePoseOp *******************************************

// ********** Begin Class UIKRetargetAdditivePoseController ****************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetAdditivePoseController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetAdditivePoseController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetAdditivePoseController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetAdditivePoseController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetAdditivePoseController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetAdditivePoseController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetAdditivePoseController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetAdditivePoseController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetAdditivePoseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetAdditivePoseController(UIKRetargetAdditivePoseController&&) = delete; \
	UIKRetargetAdditivePoseController(const UIKRetargetAdditivePoseController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetAdditivePoseController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetAdditivePoseController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetAdditivePoseController) \
	NO_API virtual ~UIKRetargetAdditivePoseController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_69_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetAdditivePoseController;

// ********** End Class UIKRetargetAdditivePoseController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RetargetPoseOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
