// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/RunIKRigOp.h"

#ifdef IKRIG_RunIKRigOp_generated_h
#error "RunIKRigOp.generated.h already included, missing '#pragma once' in RunIKRigOp.h"
#endif
#define IKRIG_RunIKRigOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetRunIKRigOpSettings;

// ********** Begin ScriptStruct FIKRetargetRunIKRigOpSettings *************************************
struct Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRunIKRigOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetRunIKRigOpSettings;
// ********** End ScriptStruct FIKRetargetRunIKRigOpSettings ***************************************

// ********** Begin ScriptStruct FIKRetargetRunIKRigOp *********************************************
struct Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetRunIKRigOp;
// ********** End ScriptStruct FIKRetargetRunIKRigOp ***********************************************

// ********** Begin Class UIKRetargetRunIKRigController ********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetRunIKRigController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetRunIKRigController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetRunIKRigController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetRunIKRigController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetRunIKRigController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetRunIKRigController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetRunIKRigController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetRunIKRigController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetRunIKRigController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetRunIKRigController(UIKRetargetRunIKRigController&&) = delete; \
	UIKRetargetRunIKRigController(const UIKRetargetRunIKRigController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetRunIKRigController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetRunIKRigController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetRunIKRigController) \
	IKRIG_API virtual ~UIKRetargetRunIKRigController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_144_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetRunIKRigController;

// ********** End Class UIKRetargetRunIKRigController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RunIKRigOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
