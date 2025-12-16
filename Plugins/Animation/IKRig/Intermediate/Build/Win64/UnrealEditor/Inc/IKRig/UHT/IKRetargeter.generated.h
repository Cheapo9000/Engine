// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargeter.h"

#ifdef IKRIG_IKRetargeter_generated_h
#error "IKRetargeter.generated.h already included, missing '#pragma once' in IKRetargeter.h"
#endif
#define IKRIG_IKRetargeter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
struct FRetargetGlobalSettings;
struct FRetargetProfile;
struct FTargetChainFKSettings;
struct FTargetChainIKSettings;
struct FTargetChainSettings;
struct FTargetChainSpeedPlantSettings;
struct FTargetRootSettings;

// ********** Begin ScriptStruct FIKRetargetPose ***************************************************
struct Z_Construct_UScriptStruct_FIKRetargetPose_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetPose_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRetargetPose;
// ********** End ScriptStruct FIKRetargetPose *****************************************************

// ********** Begin Class UIKRetargeter ************************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetChainSpeedPlantSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainIKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainFKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetRootSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetGlobalSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainUsingGoalFromRetargetAsset); \
	DECLARE_FUNCTION(execHasTargetIKRig); \
	DECLARE_FUNCTION(execHasSourceIKRig);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRetargeter, IKRIG_API)


struct Z_Construct_UClass_UIKRetargeter_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargeter(); \
	friend struct ::Z_Construct_UClass_UIKRetargeter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargeter_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargeter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargeter_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargeter) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargeter(UIKRetargeter&&) = delete; \
	UIKRetargeter(const UIKRetargeter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargeter) \
	IKRIG_API virtual ~UIKRetargeter();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_58_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargeter;

// ********** End Class UIKRetargeter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
