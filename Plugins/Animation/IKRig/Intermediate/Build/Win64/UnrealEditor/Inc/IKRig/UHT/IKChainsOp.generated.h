// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/IKChainsOp.h"

#ifdef IKRIG_IKChainsOp_generated_h
#error "IKChainsOp.generated.h already included, missing '#pragma once' in IKChainsOp.h"
#endif
#define IKRIG_IKChainsOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetIKChainsOpSettings;

// ********** Begin ScriptStruct FRetargetIKChainSettings ******************************************
struct Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetIKChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetIKChainSettings;
// ********** End ScriptStruct FRetargetIKChainSettings ********************************************

// ********** Begin ScriptStruct FIKRetargetIKChainsOpSettings *************************************
struct Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_151_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetIKChainsOpSettings;
// ********** End ScriptStruct FIKRetargetIKChainsOpSettings ***************************************

// ********** Begin ScriptStruct FIKRetargetIKChainsOp *********************************************
struct Z_Construct_UScriptStruct_FIKRetargetIKChainsOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetIKChainsOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetIKChainsOp;
// ********** End ScriptStruct FIKRetargetIKChainsOp ***********************************************

// ********** Begin Class UIKRetargetIKChainsController ********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetIKChainsController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetIKChainsController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetIKChainsController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetIKChainsController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetIKChainsController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetIKChainsController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetIKChainsController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetIKChainsController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetIKChainsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetIKChainsController(UIKRetargetIKChainsController&&) = delete; \
	UIKRetargetIKChainsController(const UIKRetargetIKChainsController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetIKChainsController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetIKChainsController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetIKChainsController) \
	IKRIG_API virtual ~UIKRetargetIKChainsController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_268_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetIKChainsController;

// ********** End Class UIKRetargetIKChainsController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_IKChainsOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
