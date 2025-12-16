// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/AlignPoleVectorOp.h"

#ifdef IKRIG_AlignPoleVectorOp_generated_h
#error "AlignPoleVectorOp.generated.h already included, missing '#pragma once' in AlignPoleVectorOp.h"
#endif
#define IKRIG_AlignPoleVectorOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetAlignPoleVectorOpSettings;

// ********** Begin ScriptStruct FRetargetPoleVectorSettings ***************************************
struct Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetPoleVectorSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetPoleVectorSettings;
// ********** End ScriptStruct FRetargetPoleVectorSettings *****************************************

// ********** Begin ScriptStruct FIKRetargetAlignPoleVectorOpSettings ******************************
struct Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetAlignPoleVectorOpSettings;
// ********** End ScriptStruct FIKRetargetAlignPoleVectorOpSettings ********************************

// ********** Begin ScriptStruct FIKRetargetAlignPoleVectorOp **************************************
struct Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetAlignPoleVectorOp;
// ********** End ScriptStruct FIKRetargetAlignPoleVectorOp ****************************************

// ********** Begin Class UIKRetargetAlignPoleVectorController *************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetAlignPoleVectorController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetAlignPoleVectorController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetAlignPoleVectorController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetAlignPoleVectorController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetAlignPoleVectorController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetAlignPoleVectorController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetAlignPoleVectorController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetAlignPoleVectorController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetAlignPoleVectorController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetAlignPoleVectorController(UIKRetargetAlignPoleVectorController&&) = delete; \
	UIKRetargetAlignPoleVectorController(const UIKRetargetAlignPoleVectorController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetAlignPoleVectorController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetAlignPoleVectorController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetAlignPoleVectorController) \
	IKRIG_API virtual ~UIKRetargetAlignPoleVectorController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_169_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetAlignPoleVectorController;

// ********** End Class UIKRetargetAlignPoleVectorController ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_AlignPoleVectorOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
