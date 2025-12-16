// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargeterController.h"

#ifdef IKRIGEDITOR_IKRetargeterController_generated_h
#error "IKRetargeterController.generated.h already included, missing '#pragma once' in IKRetargeterController.h"
#endif
#define IKRIGEDITOR_IKRetargeterController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class UIKRetargeterController;
class UIKRetargetOpControllerBase;
class UIKRigDefinition;
class URetargetChainSettings;
class USkeletalMesh;
enum class EAutoMapChainType : uint8;
enum class ERetargetAutoAlignMethod : uint8;
enum class ERetargetSourceOrTarget : uint8;
struct FIKRetargetPose;
struct FRetargetGlobalSettings;
struct FTargetChainSettings;
struct FTargetRootSettings;

// ********** Begin Class UIKRetargeterController **************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllChainSettings); \
	DECLARE_FUNCTION(execSetRetargetChainSettings); \
	DECLARE_FUNCTION(execGetRetargetChainSettings); \
	DECLARE_FUNCTION(execSetGlobalSettings); \
	DECLARE_FUNCTION(execGetGlobalSettings); \
	DECLARE_FUNCTION(execSetRootSettings); \
	DECLARE_FUNCTION(execGetRootSettings); \
	DECLARE_FUNCTION(execSnapBoneToGround); \
	DECLARE_FUNCTION(execAutoAlignBones); \
	DECLARE_FUNCTION(execAutoAlignAllBones); \
	DECLARE_FUNCTION(execGetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execSetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execGetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execSetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execResetRetargetPose); \
	DECLARE_FUNCTION(execGetCurrentRetargetPose); \
	DECLARE_FUNCTION(execGetRetargetPoses); \
	DECLARE_FUNCTION(execGetCurrentRetargetPoseName); \
	DECLARE_FUNCTION(execSetCurrentRetargetPose); \
	DECLARE_FUNCTION(execRenameRetargetPose); \
	DECLARE_FUNCTION(execDuplicateRetargetPose); \
	DECLARE_FUNCTION(execRemoveRetargetPose); \
	DECLARE_FUNCTION(execCreateRetargetPose); \
	DECLARE_FUNCTION(execGetTargetIKRigForOp); \
	DECLARE_FUNCTION(execResetChainSettingsToDefault); \
	DECLARE_FUNCTION(execGetSourceChain); \
	DECLARE_FUNCTION(execSetSourceChain); \
	DECLARE_FUNCTION(execAutoMapChains); \
	DECLARE_FUNCTION(execGetOpController); \
	DECLARE_FUNCTION(execGetRetargetOpEnabled); \
	DECLARE_FUNCTION(execSetRetargetOpEnabled); \
	DECLARE_FUNCTION(execMoveRetargetOpInStack); \
	DECLARE_FUNCTION(execGetNumRetargetOps); \
	DECLARE_FUNCTION(execResetChainSettingsInAllOps); \
	DECLARE_FUNCTION(execAssignIKRigToAllOps); \
	DECLARE_FUNCTION(execRunOpInitialSetup); \
	DECLARE_FUNCTION(execAddDefaultOps); \
	DECLARE_FUNCTION(execGetIndexOfOpByName); \
	DECLARE_FUNCTION(execGetParentOpByName); \
	DECLARE_FUNCTION(execSetParentOpByName); \
	DECLARE_FUNCTION(execGetOpName); \
	DECLARE_FUNCTION(execSetOpName); \
	DECLARE_FUNCTION(execRemoveAllOps); \
	DECLARE_FUNCTION(execRemoveRetargetOp); \
	DECLARE_FUNCTION(execAddRetargetOp); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execGetAllTargetIKRigs); \
	DECLARE_FUNCTION(execGetIKRig); \
	DECLARE_FUNCTION(execSetIKRig); \
	DECLARE_FUNCTION(execGetController);


struct Z_Construct_UClass_UIKRetargeterController_Statics;
IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargeterController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargeterController(); \
	friend struct ::Z_Construct_UClass_UIKRetargeterController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIGEDITOR_API UClass* ::Z_Construct_UClass_UIKRetargeterController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargeterController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), Z_Construct_UClass_UIKRetargeterController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargeterController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargeterController(UIKRetargeterController&&) = delete; \
	UIKRetargeterController(const UIKRetargeterController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIGEDITOR_API, UIKRetargeterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRetargeterController) \
	IKRIGEDITOR_API virtual ~UIKRetargeterController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_30_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargeterController;

// ********** End Class UIKRetargeterController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
