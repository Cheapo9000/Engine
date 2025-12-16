// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigPoleSolver.h"

#ifdef IKRIG_IKRigPoleSolver_generated_h
#error "IKRigPoleSolver.generated.h already included, missing '#pragma once' in IKRigPoleSolver.h"
#endif
#define IKRIG_IKRigPoleSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigPoleSolverSettings;

// ********** Begin ScriptStruct FIKRigPoleSolverSettings ******************************************
struct Z_Construct_UScriptStruct_FIKRigPoleSolverSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigPoleSolverSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverSettingsBase Super;


struct FIKRigPoleSolverSettings;
// ********** End ScriptStruct FIKRigPoleSolverSettings ********************************************

// ********** Begin ScriptStruct FIKRigPoleSolver **************************************************
struct Z_Construct_UScriptStruct_FIKRigPoleSolver_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigPoleSolver_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigPoleSolver;
// ********** End ScriptStruct FIKRigPoleSolver ****************************************************

// ********** Begin Class UIKRigPoleSolverController ***********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSolverSettings); \
	DECLARE_FUNCTION(execGetSolverSettings);


struct Z_Construct_UClass_UIKRigPoleSolverController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigPoleSolverController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigPoleSolverController(); \
	friend struct ::Z_Construct_UClass_UIKRigPoleSolverController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigPoleSolverController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigPoleSolverController, UIKRigSolverControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigPoleSolverController_NoRegister) \
	DECLARE_SERIALIZER(UIKRigPoleSolverController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigPoleSolverController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigPoleSolverController(UIKRigPoleSolverController&&) = delete; \
	UIKRigPoleSolverController(const UIKRigPoleSolverController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigPoleSolverController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigPoleSolverController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigPoleSolverController) \
	IKRIG_API virtual ~UIKRigPoleSolverController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_84_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigPoleSolverController;

// ********** End Class UIKRigPoleSolverController *************************************************

// ********** Begin Class UIKRig_PoleSolverEffector ************************************************
struct Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_PoleSolverEffector(); \
	friend struct ::Z_Construct_UClass_UIKRig_PoleSolverEffector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_PoleSolverEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_PoleSolverEffector_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_PoleSolverEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_PoleSolverEffector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_PoleSolverEffector(UIKRig_PoleSolverEffector&&) = delete; \
	UIKRig_PoleSolverEffector(const UIKRig_PoleSolverEffector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_PoleSolverEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_PoleSolverEffector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_PoleSolverEffector) \
	IKRIG_API virtual ~UIKRig_PoleSolverEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_107_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_PoleSolverEffector;

// ********** End Class UIKRig_PoleSolverEffector **************************************************

// ********** Begin Class UIKRig_PoleSolver ********************************************************
struct Z_Construct_UClass_UIKRig_PoleSolver_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_PoleSolver_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_PoleSolver(); \
	friend struct ::Z_Construct_UClass_UIKRig_PoleSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_PoleSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_PoleSolver, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_PoleSolver_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_PoleSolver)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_126_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_PoleSolver(UIKRig_PoleSolver&&) = delete; \
	UIKRig_PoleSolver(const UIKRig_PoleSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_PoleSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_PoleSolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_PoleSolver) \
	IKRIG_API virtual ~UIKRig_PoleSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_123_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_PoleSolver;

// ********** End Class UIKRig_PoleSolver **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigPoleSolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
