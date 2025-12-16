// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/SpeedPlantingOp.h"

#ifdef IKRIG_SpeedPlantingOp_generated_h
#error "SpeedPlantingOp.generated.h already included, missing '#pragma once' in SpeedPlantingOp.h"
#endif
#define IKRIG_SpeedPlantingOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetSpeedPlantingOpSettings;

// ********** Begin ScriptStruct FRetargetSpeedPlantingSettings ************************************
struct Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetSpeedPlantingSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetSpeedPlantingSettings;
// ********** End ScriptStruct FRetargetSpeedPlantingSettings **************************************

// ********** Begin ScriptStruct FIKRetargetSpeedPlantingOpSettings ********************************
struct Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetSpeedPlantingOpSettings;
// ********** End ScriptStruct FIKRetargetSpeedPlantingOpSettings **********************************

// ********** Begin ScriptStruct FIKRetargetSpeedPlantingOp ****************************************
struct Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetSpeedPlantingOp;
// ********** End ScriptStruct FIKRetargetSpeedPlantingOp ******************************************

// ********** Begin Class UIKRetargetSpeedPlantingController ***************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetSpeedPlantingController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetSpeedPlantingController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetSpeedPlantingController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetSpeedPlantingController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetSpeedPlantingController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetSpeedPlantingController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetSpeedPlantingController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetSpeedPlantingController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetSpeedPlantingController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetSpeedPlantingController(UIKRetargetSpeedPlantingController&&) = delete; \
	UIKRetargetSpeedPlantingController(const UIKRetargetSpeedPlantingController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetSpeedPlantingController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetSpeedPlantingController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetSpeedPlantingController) \
	IKRIG_API virtual ~UIKRetargetSpeedPlantingController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_140_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetSpeedPlantingController;

// ********** End Class UIKRetargetSpeedPlantingController *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_SpeedPlantingOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
