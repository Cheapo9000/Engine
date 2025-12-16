// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/CurveRemapOp.h"

#ifdef IKRIG_CurveRemapOp_generated_h
#error "CurveRemapOp.generated.h already included, missing '#pragma once' in CurveRemapOp.h"
#endif
#define IKRIG_CurveRemapOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetCurveRemapOpSettings;

// ********** Begin ScriptStruct FCurveRemapPair ***************************************************
struct Z_Construct_UScriptStruct_FCurveRemapPair_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveRemapPair_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FCurveRemapPair;
// ********** End ScriptStruct FCurveRemapPair *****************************************************

// ********** Begin ScriptStruct FIKRetargetCurveRemapOpSettings ***********************************
struct Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetCurveRemapOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetCurveRemapOpSettings;
// ********** End ScriptStruct FIKRetargetCurveRemapOpSettings *************************************

// ********** Begin ScriptStruct FIKRetargetCurveRemapOp *******************************************
struct Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetCurveRemapOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetCurveRemapOp;
// ********** End ScriptStruct FIKRetargetCurveRemapOp *********************************************

// ********** Begin Class UIKRetargetCurveRemapController ******************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetCurveRemapController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetCurveRemapController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetCurveRemapController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetCurveRemapController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetCurveRemapController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetCurveRemapController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetCurveRemapController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetCurveRemapController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetCurveRemapController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetCurveRemapController(UIKRetargetCurveRemapController&&) = delete; \
	UIKRetargetCurveRemapController(const UIKRetargetCurveRemapController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetCurveRemapController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetCurveRemapController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetCurveRemapController) \
	IKRIG_API virtual ~UIKRetargetCurveRemapController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_124_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetCurveRemapController;

// ********** End Class UIKRetargetCurveRemapController ********************************************

// ********** Begin Class UCurveRemapOp ************************************************************
struct Z_Construct_UClass_UCurveRemapOp_Statics;
IKRIG_API UClass* Z_Construct_UClass_UCurveRemapOp_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveRemapOp(); \
	friend struct ::Z_Construct_UClass_UCurveRemapOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UCurveRemapOp_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveRemapOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UCurveRemapOp_NoRegister) \
	DECLARE_SERIALIZER(UCurveRemapOp)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UCurveRemapOp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveRemapOp(UCurveRemapOp&&) = delete; \
	UCurveRemapOp(const UCurveRemapOp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UCurveRemapOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveRemapOp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveRemapOp) \
	IKRIG_API virtual ~UCurveRemapOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_146_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveRemapOp;

// ********** End Class UCurveRemapOp **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_CurveRemapOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
