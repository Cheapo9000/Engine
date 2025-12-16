// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/RetargetOps/ScaleSourceOp.h"

#ifdef IKRIG_ScaleSourceOp_generated_h
#error "ScaleSourceOp.generated.h already included, missing '#pragma once' in ScaleSourceOp.h"
#endif
#define IKRIG_ScaleSourceOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetScaleSourceOpSettings;

// ********** Begin ScriptStruct FIKRetargetScaleSourceOpSettings **********************************
struct Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetScaleSourceOpSettings;
// ********** End ScriptStruct FIKRetargetScaleSourceOpSettings ************************************

// ********** Begin ScriptStruct FIKRetargetScaleSourceOp ******************************************
struct Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetScaleSourceOp;
// ********** End ScriptStruct FIKRetargetScaleSourceOp ********************************************

// ********** Begin Class UIKRetargetScaleSourceController *****************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetScaleSourceController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetScaleSourceController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetScaleSourceController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetScaleSourceController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetScaleSourceController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetScaleSourceController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetScaleSourceController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetScaleSourceController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetScaleSourceController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetScaleSourceController(UIKRetargetScaleSourceController&&) = delete; \
	UIKRetargetScaleSourceController(const UIKRetargetScaleSourceController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetScaleSourceController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetScaleSourceController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetScaleSourceController) \
	IKRIG_API virtual ~UIKRetargetScaleSourceController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_89_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetScaleSourceController;

// ********** End Class UIKRetargetScaleSourceController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_ScaleSourceOp_h

// ********** Begin Enum EScaleSourcePivot *********************************************************
#define FOREACH_ENUM_ESCALESOURCEPIVOT(op) \
	op(EScaleSourcePivot::ComponentOrigin) \
	op(EScaleSourcePivot::Bone) 

enum class EScaleSourcePivot : uint8;
template<> struct TIsUEnumClass<EScaleSourcePivot> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EScaleSourcePivot>();
// ********** End Enum EScaleSourcePivot ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
