// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodyIntersectIKOp.h"

#ifdef BODYINTERSECTIKOP_BodyIntersectIKOp_generated_h
#error "BodyIntersectIKOp.generated.h already included, missing '#pragma once' in BodyIntersectIKOp.h"
#endif
#define BODYINTERSECTIKOP_BodyIntersectIKOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetBodyIntersectIKOpSettings;

// ********** Begin ScriptStruct FIKRetargetBodyIntersectIKOpSettings ******************************
struct Z_Construct_UScriptStruct_FIKRetargetBodyIntersectIKOpSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetBodyIntersectIKOpSettings_Statics; \
	BODYINTERSECTIKOP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetBodyIntersectIKOpSettings;
// ********** End ScriptStruct FIKRetargetBodyIntersectIKOpSettings ********************************

// ********** Begin ScriptStruct FIKRetargetBodyIntersectIKOp **************************************
struct Z_Construct_UScriptStruct_FIKRetargetBodyIntersectIKOp_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetBodyIntersectIKOp_Statics; \
	BODYINTERSECTIKOP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetBodyIntersectIKOp;
// ********** End ScriptStruct FIKRetargetBodyIntersectIKOp ****************************************

// ********** Begin Class UIKRetargetBodyIntersectController ***************************************
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetBodyIntersectController_Statics;
BODYINTERSECTIKOP_API UClass* Z_Construct_UClass_UIKRetargetBodyIntersectController_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBodyIntersectController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetBodyIntersectController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BODYINTERSECTIKOP_API UClass* ::Z_Construct_UClass_UIKRetargetBodyIntersectController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetBodyIntersectController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyIntersectIKOp"), Z_Construct_UClass_UIKRetargetBodyIntersectController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetBodyIntersectController)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYINTERSECTIKOP_API UIKRetargetBodyIntersectController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetBodyIntersectController(UIKRetargetBodyIntersectController&&) = delete; \
	UIKRetargetBodyIntersectController(const UIKRetargetBodyIntersectController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYINTERSECTIKOP_API, UIKRetargetBodyIntersectController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBodyIntersectController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBodyIntersectController) \
	BODYINTERSECTIKOP_API virtual ~UIKRetargetBodyIntersectController();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_127_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetBodyIntersectController;

// ********** End Class UIKRetargetBodyIntersectController *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_BodyIntersectIKOp_Public_BodyIntersectIKOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
