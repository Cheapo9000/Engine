// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigMapperOp.h"

#ifdef RIGMAPPEROP_RigMapperOp_generated_h
#error "RigMapperOp.generated.h already included, missing '#pragma once' in RigMapperOp.h"
#endif
#define RIGMAPPEROP_RigMapperOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRetargetRigMapperOpSettings;

// ********** Begin ScriptStruct FIKRetargetRigMapperOpSettings ************************************
struct Z_Construct_UScriptStruct_FIKRetargetRigMapperOpSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRigMapperOpSettings_Statics; \
	RIGMAPPEROP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpSettingsBase Super;


struct FIKRetargetRigMapperOpSettings;
// ********** End ScriptStruct FIKRetargetRigMapperOpSettings **************************************

// ********** Begin ScriptStruct FIKRetargetRigMapperOp ********************************************
struct Z_Construct_UScriptStruct_FIKRetargetRigMapperOp_Statics;
#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRetargetRigMapperOp_Statics; \
	RIGMAPPEROP_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRetargetOpBase Super;


struct FIKRetargetRigMapperOp;
// ********** End ScriptStruct FIKRetargetRigMapperOp **********************************************

// ********** Begin Class UIKRetargetRigMapperOpController *****************************************
#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UIKRetargetRigMapperOpController_Statics;
RIGMAPPEROP_API UClass* Z_Construct_UClass_UIKRetargetRigMapperOpController_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetRigMapperOpController(); \
	friend struct ::Z_Construct_UClass_UIKRetargetRigMapperOpController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPEROP_API UClass* ::Z_Construct_UClass_UIKRetargetRigMapperOpController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetRigMapperOpController, UIKRetargetOpControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapperOp"), Z_Construct_UClass_UIKRetargetRigMapperOpController_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetRigMapperOpController)


#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPEROP_API UIKRetargetRigMapperOpController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetRigMapperOpController(UIKRetargetRigMapperOpController&&) = delete; \
	UIKRetargetRigMapperOpController(const UIKRetargetRigMapperOpController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPEROP_API, UIKRetargetRigMapperOpController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetRigMapperOpController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetRigMapperOpController) \
	RIGMAPPEROP_API virtual ~UIKRetargetRigMapperOpController();


#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_163_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetRigMapperOpController;

// ********** End Class UIKRetargetRigMapperOpController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapperOp_Source_RigMapperOp_Public_RigMapperOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
