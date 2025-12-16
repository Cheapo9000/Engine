// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/FKChainsOp.h"

#ifdef IKRIG_FKChainsOp_generated_h
#error "FKChainsOp.generated.h already included, missing '#pragma once' in FKChainsOp.h"
#endif
#define IKRIG_FKChainsOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetFKChainsOpSettings;

// ********** Begin ScriptStruct FRetargetFKChainSettings ******************************************
struct Z_Construct_UScriptStruct_FRetargetFKChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetFKChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetFKChainSettings;
// ********** End ScriptStruct FRetargetFKChainSettings ********************************************

// ********** Begin ScriptStruct FIKRetargetFKChainsOpSettings *************************************
struct Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetFKChainsOpSettings;
// ********** End ScriptStruct FIKRetargetFKChainsOpSettings ***************************************

// ********** Begin ScriptStruct FIKRetargetFKChainsOp *********************************************
struct Z_Construct_UScriptStruct_FIKRetargetFKChainsOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_284_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetFKChainsOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetFKChainsOp;
// ********** End ScriptStruct FIKRetargetFKChainsOp ***********************************************

// ********** Begin Class UIKRetargetFKChainsController ********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetFKChainsController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetFKChainsController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetFKChainsController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetFKChainsController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetFKChainsController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetFKChainsController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetFKChainsController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetFKChainsController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetFKChainsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetFKChainsController(UIKRetargetFKChainsController&&) = delete; \
	UIKRetargetFKChainsController(const UIKRetargetFKChainsController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetFKChainsController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetFKChainsController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetFKChainsController) \
	IKRIG_API virtual ~UIKRetargetFKChainsController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_366_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h_369_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetFKChainsController;

// ********** End Class UIKRetargetFKChainsController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_FKChainsOp_h

// ********** Begin Enum EFKChainTranslationMode ***************************************************
#define FOREACH_ENUM_EFKCHAINTRANSLATIONMODE(op) \
	op(EFKChainTranslationMode::None) \
	op(EFKChainTranslationMode::GloballyScaled) \
	op(EFKChainTranslationMode::Absolute) \
	op(EFKChainTranslationMode::StretchBoneLengthUniformly) \
	op(EFKChainTranslationMode::StretchBoneLengthNonUniformly) \
	op(EFKChainTranslationMode::OrientAndScale) 

enum class EFKChainTranslationMode : uint8;
template<> struct TIsUEnumClass<EFKChainTranslationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EFKChainTranslationMode>();
// ********** End Enum EFKChainTranslationMode *****************************************************

// ********** Begin Enum EFKChainRotationMode ******************************************************
#define FOREACH_ENUM_EFKCHAINROTATIONMODE(op) \
	op(EFKChainRotationMode::None) \
	op(EFKChainRotationMode::Interpolated) \
	op(EFKChainRotationMode::OneToOne) \
	op(EFKChainRotationMode::OneToOneReversed) \
	op(EFKChainRotationMode::MatchChain) \
	op(EFKChainRotationMode::MatchScaledChain) \
	op(EFKChainRotationMode::CopyLocal) 

enum class EFKChainRotationMode : uint8;
template<> struct TIsUEnumClass<EFKChainRotationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EFKChainRotationMode>();
// ********** End Enum EFKChainRotationMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
