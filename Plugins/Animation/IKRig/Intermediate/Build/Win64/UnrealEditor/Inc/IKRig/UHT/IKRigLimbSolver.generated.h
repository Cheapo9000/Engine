// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigLimbSolver.h"

#ifdef IKRIG_IKRigLimbSolver_generated_h
#error "IKRigLimbSolver.generated.h already included, missing '#pragma once' in IKRigLimbSolver.h"
#endif
#define IKRIG_IKRigLimbSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigLimbSolverSettings;

// ********** Begin ScriptStruct FIKRigLimbSolverSettings ******************************************
struct Z_Construct_UScriptStruct_FIKRigLimbSolverSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigLimbSolverSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FLimbSolverSettings Super;


struct FIKRigLimbSolverSettings;
// ********** End ScriptStruct FIKRigLimbSolverSettings ********************************************

// ********** Begin ScriptStruct FIKRigLimbSolver **************************************************
struct Z_Construct_UScriptStruct_FIKRigLimbSolver_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigLimbSolver_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigLimbSolver;
// ********** End ScriptStruct FIKRigLimbSolver ****************************************************

// ********** Begin Class UIKRigLimbSolverController ***********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSolverSettings); \
	DECLARE_FUNCTION(execGetSolverSettings);


struct Z_Construct_UClass_UIKRigLimbSolverController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigLimbSolverController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigLimbSolverController(); \
	friend struct ::Z_Construct_UClass_UIKRigLimbSolverController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigLimbSolverController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigLimbSolverController, UIKRigSolverControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigLimbSolverController_NoRegister) \
	DECLARE_SERIALIZER(UIKRigLimbSolverController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigLimbSolverController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigLimbSolverController(UIKRigLimbSolverController&&) = delete; \
	UIKRigLimbSolverController(const UIKRigLimbSolverController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigLimbSolverController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigLimbSolverController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigLimbSolverController) \
	IKRIG_API virtual ~UIKRigLimbSolverController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_83_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigLimbSolverController;

// ********** End Class UIKRigLimbSolverController *************************************************

// ********** Begin Class UIKRig_LimbEffector ******************************************************
struct Z_Construct_UClass_UIKRig_LimbEffector_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbEffector_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_LimbEffector(); \
	friend struct ::Z_Construct_UClass_UIKRig_LimbEffector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_LimbEffector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_LimbEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_LimbEffector_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_LimbEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_109_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_LimbEffector(UIKRig_LimbEffector&&) = delete; \
	UIKRig_LimbEffector(const UIKRig_LimbEffector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_LimbEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_LimbEffector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_LimbEffector) \
	IKRIG_API virtual ~UIKRig_LimbEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_106_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_LimbEffector;

// ********** End Class UIKRig_LimbEffector ********************************************************

// ********** Begin Class UIKRig_LimbSolver ********************************************************
struct Z_Construct_UClass_UIKRig_LimbSolver_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_LimbSolver_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_LimbSolver(); \
	friend struct ::Z_Construct_UClass_UIKRig_LimbSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_LimbSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_LimbSolver, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_LimbSolver_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_LimbSolver)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_124_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_LimbSolver(UIKRig_LimbSolver&&) = delete; \
	UIKRig_LimbSolver(const UIKRig_LimbSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_LimbSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_LimbSolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_LimbSolver) \
	IKRIG_API virtual ~UIKRig_LimbSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_121_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_LimbSolver;

// ********** End Class UIKRig_LimbSolver **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigLimbSolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
