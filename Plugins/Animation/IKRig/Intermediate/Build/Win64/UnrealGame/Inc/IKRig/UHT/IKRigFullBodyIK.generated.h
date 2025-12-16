// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigFullBodyIK.h"

#ifdef IKRIG_IKRigFullBodyIK_generated_h
#error "IKRigFullBodyIK.generated.h already included, missing '#pragma once' in IKRigFullBodyIK.h"
#endif
#define IKRIG_IKRigFullBodyIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRig_FBIKBoneSettings;
class UIKRig_FBIKEffector;
struct FIKRigFBIKBoneSettings;
struct FIKRigFBIKGoalSettings;
struct FIKRigFBIKSettings;

// ********** Begin ScriptStruct FIKRigFBIKGoalSettings ********************************************
struct Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigGoalSettingsBase Super;


struct FIKRigFBIKGoalSettings;
// ********** End ScriptStruct FIKRigFBIKGoalSettings **********************************************

// ********** Begin ScriptStruct FIKRigFBIKBoneSettings ********************************************
struct Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigBoneSettingsBase Super;


struct FIKRigFBIKBoneSettings;
// ********** End ScriptStruct FIKRigFBIKBoneSettings **********************************************

// ********** Begin ScriptStruct FIKRigFBIKSettings ************************************************
struct Z_Construct_UScriptStruct_FIKRigFBIKSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigFBIKSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverSettingsBase Super;


struct FIKRigFBIKSettings;
// ********** End ScriptStruct FIKRigFBIKSettings **************************************************

// ********** Begin ScriptStruct FIKRigFullBodyIKSolver ********************************************
struct Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigFullBodyIKSolver;
// ********** End ScriptStruct FIKRigFullBodyIKSolver **********************************************

// ********** Begin Class UIKRigFBIKController *****************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBoneSettings); \
	DECLARE_FUNCTION(execGetBoneSettings); \
	DECLARE_FUNCTION(execSetGoalSettings); \
	DECLARE_FUNCTION(execGetGoalSettings); \
	DECLARE_FUNCTION(execSetSolverSettings); \
	DECLARE_FUNCTION(execGetSolverSettings);


struct Z_Construct_UClass_UIKRigFBIKController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigFBIKController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigFBIKController(); \
	friend struct ::Z_Construct_UClass_UIKRigFBIKController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigFBIKController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigFBIKController, UIKRigSolverControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigFBIKController_NoRegister) \
	DECLARE_SERIALIZER(UIKRigFBIKController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigFBIKController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigFBIKController(UIKRigFBIKController&&) = delete; \
	UIKRigFBIKController(const UIKRigFBIKController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigFBIKController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigFBIKController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigFBIKController) \
	IKRIG_API virtual ~UIKRigFBIKController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_273_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_276_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigFBIKController;

// ********** End Class UIKRigFBIKController *******************************************************

// ********** Begin Class UIKRig_FBIKEffector ******************************************************
struct Z_Construct_UClass_UIKRig_FBIKEffector_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_FBIKEffector(); \
	friend struct ::Z_Construct_UClass_UIKRig_FBIKEffector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_FBIKEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_FBIKEffector_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_FBIKEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_324_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_FBIKEffector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_FBIKEffector(UIKRig_FBIKEffector&&) = delete; \
	UIKRig_FBIKEffector(const UIKRig_FBIKEffector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_FBIKEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_FBIKEffector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_FBIKEffector) \
	IKRIG_API virtual ~UIKRig_FBIKEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_321_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_324_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_FBIKEffector;

// ********** End Class UIKRig_FBIKEffector ********************************************************

// ********** Begin Class UIKRig_FBIKBoneSettings **************************************************
struct Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_346_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_FBIKBoneSettings(); \
	friend struct ::Z_Construct_UClass_UIKRig_FBIKBoneSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_FBIKBoneSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_FBIKBoneSettings_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_FBIKBoneSettings)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_346_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_FBIKBoneSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_FBIKBoneSettings(UIKRig_FBIKBoneSettings&&) = delete; \
	UIKRig_FBIKBoneSettings(const UIKRig_FBIKBoneSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_FBIKBoneSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_FBIKBoneSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_FBIKBoneSettings) \
	IKRIG_API virtual ~UIKRig_FBIKBoneSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_343_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_346_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_346_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_346_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_FBIKBoneSettings;

// ********** End Class UIKRig_FBIKBoneSettings ****************************************************

// ********** Begin Class UIKRigFBIKSolver *********************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoneSettings); \
	DECLARE_FUNCTION(execGetEffectors);


struct Z_Construct_UClass_UIKRigFBIKSolver_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigFBIKSolver_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigFBIKSolver(); \
	friend struct ::Z_Construct_UClass_UIKRigFBIKSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigFBIKSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigFBIKSolver, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigFBIKSolver_NoRegister) \
	DECLARE_SERIALIZER(UIKRigFBIKSolver)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigFBIKSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigFBIKSolver(UIKRigFBIKSolver&&) = delete; \
	UIKRigFBIKSolver(const UIKRigFBIKSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigFBIKSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigFBIKSolver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigFBIKSolver) \
	IKRIG_API virtual ~UIKRigFBIKSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_381_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h_384_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigFBIKSolver;

// ********** End Class UIKRigFBIKSolver ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigFullBodyIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
