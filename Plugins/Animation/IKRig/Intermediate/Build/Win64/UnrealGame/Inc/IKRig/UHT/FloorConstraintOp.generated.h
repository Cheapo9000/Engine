// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/FloorConstraintOp.h"

#ifdef IKRIG_FloorConstraintOp_generated_h
#error "FloorConstraintOp.generated.h already included, missing '#pragma once' in FloorConstraintOp.h"
#endif
#define IKRIG_FloorConstraintOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetIKChainsOpSettings;

// ********** Begin ScriptStruct FFloorConstraintChainSettings *************************************
struct Z_Construct_UScriptStruct_FFloorConstraintChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFloorConstraintChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FFloorConstraintChainSettings;
// ********** End ScriptStruct FFloorConstraintChainSettings ***************************************

// ********** Begin ScriptStruct FIKRetargetFloorConstraintOpSettings ******************************
struct Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetFloorConstraintOpSettings;
// ********** End ScriptStruct FIKRetargetFloorConstraintOpSettings ********************************

// ********** Begin ScriptStruct FIKRetargetFloorConstraintOp **************************************
struct Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetFloorConstraintOp;
// ********** End ScriptStruct FIKRetargetFloorConstraintOp ****************************************

// ********** Begin Class UIKRetargetFloorGoalsController ******************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetFloorGoalsController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetFloorGoalsController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetFloorGoalsController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetFloorGoalsController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetFloorGoalsController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetFloorGoalsController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetFloorGoalsController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetFloorGoalsController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetFloorGoalsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetFloorGoalsController(UIKRetargetFloorGoalsController&&) = delete; \
	UIKRetargetFloorGoalsController(const UIKRetargetFloorGoalsController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetFloorGoalsController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetFloorGoalsController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetFloorGoalsController) \
	IKRIG_API virtual ~UIKRetargetFloorGoalsController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_130_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetFloorGoalsController;

// ********** End Class UIKRetargetFloorGoalsController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FloorConstraintOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
