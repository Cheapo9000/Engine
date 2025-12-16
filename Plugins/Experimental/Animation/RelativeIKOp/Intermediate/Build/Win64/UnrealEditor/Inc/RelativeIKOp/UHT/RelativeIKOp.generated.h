// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RelativeIKOp.h"

#ifdef RELATIVEIKOP_RelativeIKOp_generated_h
#error "RelativeIKOp.generated.h already included, missing '#pragma once' in RelativeIKOp.h"
#endif
#define RELATIVEIKOP_RelativeIKOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetRelativeIKOpSettings;

// ********** Begin ScriptStruct FIKRetargetRelativeIKOpSettings ***********************************
struct Z_Construct_UScriptStruct_FIKRetargetRelativeIKOpSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRelativeIKOpSettings_Statics; \
	RELATIVEIKOP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetRelativeIKOpSettings;
// ********** End ScriptStruct FIKRetargetRelativeIKOpSettings *************************************

// ********** Begin ScriptStruct FIKRetargetRelativeIKOp *******************************************
struct Z_Construct_UScriptStruct_FIKRetargetRelativeIKOp_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRelativeIKOp_Statics; \
	RELATIVEIKOP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetRelativeIKOp;
// ********** End ScriptStruct FIKRetargetRelativeIKOp *********************************************

// ********** Begin Class UIKRetargetRelativeIKController ******************************************
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetRelativeIKController_Statics;
RELATIVEIKOP_API UClass* Z_Construct_UClass_UIKRetargetRelativeIKController_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetRelativeIKController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetRelativeIKController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RELATIVEIKOP_API UClass* ::Z_Construct_UClass_UIKRetargetRelativeIKController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetRelativeIKController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RelativeIKOp"), Z_Construct_UClass_UIKRetargetRelativeIKController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetRelativeIKController)


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RELATIVEIKOP_API UIKRetargetRelativeIKController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetRelativeIKController(UIKRetargetRelativeIKController&&) = delete; \
	UIKRetargetRelativeIKController(const UIKRetargetRelativeIKController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RELATIVEIKOP_API, UIKRetargetRelativeIKController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetRelativeIKController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetRelativeIKController) \
	RELATIVEIKOP_API virtual ~UIKRetargetRelativeIKController();


#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_324_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetRelativeIKController;

// ********** End Class UIKRetargetRelativeIKController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RelativeIKOp_Source_RelativeIKOp_Public_RelativeIKOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
