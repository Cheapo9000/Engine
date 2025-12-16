// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/PelvisMotionOp.h"

#ifdef IKRIG_PelvisMotionOp_generated_h
#error "PelvisMotionOp.generated.h already included, missing '#pragma once' in PelvisMotionOp.h"
#endif
#define IKRIG_PelvisMotionOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetPelvisMotionOpSettings;

// ********** Begin ScriptStruct FIKRetargetPelvisMotionOpSettings *********************************
struct Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetPelvisMotionOpSettings;
// ********** End ScriptStruct FIKRetargetPelvisMotionOpSettings ***********************************

// ********** Begin ScriptStruct FIKRetargetPelvisMotionOp *****************************************
struct Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetPelvisMotionOp;
// ********** End ScriptStruct FIKRetargetPelvisMotionOp *******************************************

// ********** Begin Class UIKRetargetPelvisMotionController ****************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetPelvisBone); \
	DECLARE_FUNCTION(execSetTargetPelvisBone); \
	DECLARE_FUNCTION(execGetSourcePelvisBone); \
	DECLARE_FUNCTION(execSetSourcePelvisBone); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetPelvisMotionController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetPelvisMotionController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetPelvisMotionController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetPelvisMotionController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetPelvisMotionController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetPelvisMotionController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetPelvisMotionController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetPelvisMotionController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetPelvisMotionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetPelvisMotionController(UIKRetargetPelvisMotionController&&) = delete; \
	UIKRetargetPelvisMotionController(const UIKRetargetPelvisMotionController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetPelvisMotionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetPelvisMotionController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetPelvisMotionController) \
	IKRIG_API virtual ~UIKRetargetPelvisMotionController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_250_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetPelvisMotionController;

// ********** End Class UIKRetargetPelvisMotionController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PelvisMotionOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
