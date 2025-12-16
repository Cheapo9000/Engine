// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/CopyBasePoseOp.h"

#ifdef IKRIG_CopyBasePoseOp_generated_h
#error "CopyBasePoseOp.generated.h already included, missing '#pragma once' in CopyBasePoseOp.h"
#endif
#define IKRIG_CopyBasePoseOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetCopyBasePoseOpSettings;

// ********** Begin ScriptStruct FIKRetargetCopyBasePoseOpSettings *********************************
struct Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetCopyBasePoseOpSettings;
// ********** End ScriptStruct FIKRetargetCopyBasePoseOpSettings ***********************************

// ********** Begin ScriptStruct FIKRetargetCopyBasePoseOp *****************************************
struct Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetCopyBasePoseOp;
// ********** End ScriptStruct FIKRetargetCopyBasePoseOp *******************************************

// ********** Begin Class UIKRetargetCopyBasePoseController ****************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetBonesToExclude); \
	DECLARE_FUNCTION(execGetBonesToExclude); \
	DECLARE_FUNCTION(execAddBoneToExclude); \
	DECLARE_FUNCTION(execGetCopyFromStart); \
	DECLARE_FUNCTION(execSetCopyFromStart); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetCopyBasePoseController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetCopyBasePoseController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetCopyBasePoseController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetCopyBasePoseController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetCopyBasePoseController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetCopyBasePoseController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetCopyBasePoseController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetCopyBasePoseController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetCopyBasePoseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetCopyBasePoseController(UIKRetargetCopyBasePoseController&&) = delete; \
	UIKRetargetCopyBasePoseController(const UIKRetargetCopyBasePoseController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetCopyBasePoseController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetCopyBasePoseController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetCopyBasePoseController) \
	IKRIG_API virtual ~UIKRetargetCopyBasePoseController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_95_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetCopyBasePoseController;

// ********** End Class UIKRetargetCopyBasePoseController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CopyBasePoseOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
