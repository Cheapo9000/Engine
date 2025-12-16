// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/RootMotionGeneratorOp.h"

#ifdef IKRIG_RootMotionGeneratorOp_generated_h
#error "RootMotionGeneratorOp.generated.h already included, missing '#pragma once' in RootMotionGeneratorOp.h"
#endif
#define IKRIG_RootMotionGeneratorOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetRootMotionOpSettings;

// ********** Begin ScriptStruct FIKRetargetRootMotionOpSettings ***********************************
struct Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetRootMotionOpSettings;
// ********** End ScriptStruct FIKRetargetRootMotionOpSettings *************************************

// ********** Begin ScriptStruct FIKRetargetRootMotionOp *******************************************
struct Z_Construct_UScriptStruct_FIKRetargetRootMotionOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRootMotionOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetRootMotionOp;
// ********** End ScriptStruct FIKRetargetRootMotionOp *********************************************

// ********** Begin Class UIKRetargetRootMotionController ******************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetPelvisBone); \
	DECLARE_FUNCTION(execSetTargetPelvisBone); \
	DECLARE_FUNCTION(execGetTargetRootBone); \
	DECLARE_FUNCTION(execSetTargetRootBone); \
	DECLARE_FUNCTION(execGetSourceRootBone); \
	DECLARE_FUNCTION(execSetSourceRootBone); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetRootMotionController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetRootMotionController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetRootMotionController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetRootMotionController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetRootMotionController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetRootMotionController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetRootMotionController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetRootMotionController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetRootMotionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetRootMotionController(UIKRetargetRootMotionController&&) = delete; \
	UIKRetargetRootMotionController(const UIKRetargetRootMotionController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetRootMotionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetRootMotionController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetRootMotionController) \
	IKRIG_API virtual ~UIKRetargetRootMotionController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_172_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetRootMotionController;

// ********** End Class UIKRetargetRootMotionController ********************************************

// ********** Begin Class URootMotionGeneratorOp ***************************************************
struct Z_Construct_UClass_URootMotionGeneratorOp_Statics;
IKRIG_API UClass* Z_Construct_UClass_URootMotionGeneratorOp_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionGeneratorOp(); \
	friend struct ::Z_Construct_UClass_URootMotionGeneratorOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URootMotionGeneratorOp_NoRegister(); \
public: \
	DECLARE_CLASS2(URootMotionGeneratorOp, URetargetOpBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URootMotionGeneratorOp_NoRegister) \
	DECLARE_SERIALIZER(URootMotionGeneratorOp)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_231_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API URootMotionGeneratorOp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionGeneratorOp(URootMotionGeneratorOp&&) = delete; \
	URootMotionGeneratorOp(const URootMotionGeneratorOp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, URootMotionGeneratorOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionGeneratorOp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionGeneratorOp) \
	IKRIG_API virtual ~URootMotionGeneratorOp();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_228_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_231_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionGeneratorOp;

// ********** End Class URootMotionGeneratorOp *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h

// ********** Begin Enum ERootMotionSource *********************************************************
#define FOREACH_ENUM_EROOTMOTIONSOURCE(op) \
	op(ERootMotionSource::CopyFromSourceRoot) \
	op(ERootMotionSource::GenerateFromTargetPelvis) 

enum class ERootMotionSource : uint8;
template<> struct TIsUEnumClass<ERootMotionSource> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERootMotionSource>();
// ********** End Enum ERootMotionSource ***********************************************************

// ********** Begin Enum ERootMotionHeightSource ***************************************************
#define FOREACH_ENUM_EROOTMOTIONHEIGHTSOURCE(op) \
	op(ERootMotionHeightSource::CopyHeightFromSource) \
	op(ERootMotionHeightSource::SnapToGround) 

enum class ERootMotionHeightSource : uint8;
template<> struct TIsUEnumClass<ERootMotionHeightSource> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERootMotionHeightSource>();
// ********** End Enum ERootMotionHeightSource *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
