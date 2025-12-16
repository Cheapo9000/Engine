// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigBodyMoverSolver.h"

#ifdef IKRIG_IKRigBodyMoverSolver_generated_h
#error "IKRigBodyMoverSolver.generated.h already included, missing '#pragma once' in IKRigBodyMoverSolver.h"
#endif
#define IKRIG_IKRigBodyMoverSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigBodyMoverGoalSettings;
struct FIKRigBodyMoverSettings;

// ********** Begin ScriptStruct FIKRigBodyMoverGoalSettings ***************************************
struct Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigBodyMoverGoalSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigGoalSettingsBase Super;


struct FIKRigBodyMoverGoalSettings;
// ********** End ScriptStruct FIKRigBodyMoverGoalSettings *****************************************

// ********** Begin ScriptStruct FIKRigBodyMoverSettings *******************************************
struct Z_Construct_UScriptStruct_FIKRigBodyMoverSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigBodyMoverSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverSettingsBase Super;


struct FIKRigBodyMoverSettings;
// ********** End ScriptStruct FIKRigBodyMoverSettings *********************************************

// ********** Begin ScriptStruct FIKRigBodyMoverSolver *********************************************
struct Z_Construct_UScriptStruct_FIKRigBodyMoverSolver_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigBodyMoverSolver_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigBodyMoverSolver;
// ********** End ScriptStruct FIKRigBodyMoverSolver ***********************************************

// ********** Begin Class UIKRigBodyMoverController ************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGoalSettings); \
	DECLARE_FUNCTION(execGetGoalSettings); \
	DECLARE_FUNCTION(execSetSolverSettings); \
	DECLARE_FUNCTION(execGetSolverSettings);


struct Z_Construct_UClass_UIKRigBodyMoverController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigBodyMoverController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigBodyMoverController(); \
	friend struct ::Z_Construct_UClass_UIKRigBodyMoverController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigBodyMoverController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigBodyMoverController, UIKRigSolverControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigBodyMoverController_NoRegister) \
	DECLARE_SERIALIZER(UIKRigBodyMoverController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigBodyMoverController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigBodyMoverController(UIKRigBodyMoverController&&) = delete; \
	UIKRigBodyMoverController(const UIKRigBodyMoverController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigBodyMoverController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigBodyMoverController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigBodyMoverController) \
	IKRIG_API virtual ~UIKRigBodyMoverController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_136_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigBodyMoverController;

// ********** End Class UIKRigBodyMoverController **************************************************

// ********** Begin Class UIKRig_BodyMoverEffector *************************************************
struct Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_BodyMoverEffector(); \
	friend struct ::Z_Construct_UClass_UIKRig_BodyMoverEffector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_BodyMoverEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_BodyMoverEffector_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_BodyMoverEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_BodyMoverEffector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_BodyMoverEffector(UIKRig_BodyMoverEffector&&) = delete; \
	UIKRig_BodyMoverEffector(const UIKRig_BodyMoverEffector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_BodyMoverEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_BodyMoverEffector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_BodyMoverEffector) \
	IKRIG_API virtual ~UIKRig_BodyMoverEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_171_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_BodyMoverEffector;

// ********** End Class UIKRig_BodyMoverEffector ***************************************************

// ********** Begin Class UIKRig_BodyMover *********************************************************
struct Z_Construct_UClass_UIKRig_BodyMover_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_BodyMover_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_BodyMover(); \
	friend struct ::Z_Construct_UClass_UIKRig_BodyMover_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_BodyMover_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_BodyMover, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_BodyMover_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_BodyMover)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_BodyMover(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_BodyMover(UIKRig_BodyMover&&) = delete; \
	UIKRig_BodyMover(const UIKRig_BodyMover&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_BodyMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_BodyMover); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_BodyMover) \
	IKRIG_API virtual ~UIKRig_BodyMover();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_187_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_BodyMover;

// ********** End Class UIKRig_BodyMover ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigBodyMoverSolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
