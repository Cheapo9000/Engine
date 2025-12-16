// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/StretchChainOp.h"

#ifdef IKRIG_StretchChainOp_generated_h
#error "StretchChainOp.generated.h already included, missing '#pragma once' in StretchChainOp.h"
#endif
#define IKRIG_StretchChainOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetStretchChainOpSettings;

// ********** Begin ScriptStruct FRetargetStretchChainSettings *************************************
struct Z_Construct_UScriptStruct_FRetargetStretchChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetStretchChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetStretchChainSettings;
// ********** End ScriptStruct FRetargetStretchChainSettings ***************************************

// ********** Begin ScriptStruct FIKRetargetStretchChainOpSettings *********************************
struct Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetStretchChainOpSettings;
// ********** End ScriptStruct FIKRetargetStretchChainOpSettings ***********************************

// ********** Begin ScriptStruct FIKRetargetStretchChainOp *****************************************
struct Z_Construct_UScriptStruct_FIKRetargetStretchChainOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetStretchChainOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetStretchChainOp;
// ********** End ScriptStruct FIKRetargetStretchChainOp *******************************************

// ********** Begin Class UIKRetargetStretchChainController ****************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetStretchChainController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetStretchChainController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetStretchChainController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetStretchChainController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetStretchChainController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetStretchChainController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetStretchChainController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetStretchChainController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetStretchChainController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetStretchChainController(UIKRetargetStretchChainController&&) = delete; \
	UIKRetargetStretchChainController(const UIKRetargetStretchChainController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetStretchChainController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetStretchChainController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetStretchChainController) \
	IKRIG_API virtual ~UIKRetargetStretchChainController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_142_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetStretchChainController;

// ********** End Class UIKRetargetStretchChainController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_StretchChainOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
