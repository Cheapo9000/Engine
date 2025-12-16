// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigSolverBase.h"

#ifdef IKRIG_IKRigSolverBase_generated_h
#error "IKRigSolverBase.generated.h already included, missing '#pragma once' in IKRigSolverBase.h"
#endif
#define IKRIG_IKRigSolverBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIKRigSettingsBase ************************************************
struct Z_Construct_UScriptStruct_FIKRigSettingsBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigSettingsBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigSettingsBase;
// ********** End ScriptStruct FIKRigSettingsBase **************************************************

// ********** Begin ScriptStruct FIKRigGoalSettingsBase ********************************************
struct Z_Construct_UScriptStruct_FIKRigGoalSettingsBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigGoalSettingsBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSettingsBase Super;


struct FIKRigGoalSettingsBase;
// ********** End ScriptStruct FIKRigGoalSettingsBase **********************************************

// ********** Begin ScriptStruct FIKRigBoneSettingsBase ********************************************
struct Z_Construct_UScriptStruct_FIKRigBoneSettingsBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigBoneSettingsBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSettingsBase Super;


struct FIKRigBoneSettingsBase;
// ********** End ScriptStruct FIKRigBoneSettingsBase **********************************************

// ********** Begin ScriptStruct FIKRigSolverSettingsBase ******************************************
struct Z_Construct_UScriptStruct_FIKRigSolverSettingsBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigSolverSettingsBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSettingsBase Super;


struct FIKRigSolverSettingsBase;
// ********** End ScriptStruct FIKRigSolverSettingsBase ********************************************

// ********** Begin ScriptStruct FIKRigSolverBase **************************************************
struct Z_Construct_UScriptStruct_FIKRigSolverBase_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigSolverBase_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigSolverBase;
// ********** End ScriptStruct FIKRigSolverBase ****************************************************

// ********** Begin Class UIKRigSolverControllerBase ***********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


struct Z_Construct_UClass_UIKRigSolverControllerBase_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolverControllerBase_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigSolverControllerBase(); \
	friend struct ::Z_Construct_UClass_UIKRigSolverControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigSolverControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigSolverControllerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigSolverControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UIKRigSolverControllerBase)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigSolverControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigSolverControllerBase(UIKRigSolverControllerBase&&) = delete; \
	UIKRigSolverControllerBase(const UIKRigSolverControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigSolverControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigSolverControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigSolverControllerBase) \
	IKRIG_API virtual ~UIKRigSolverControllerBase();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_216_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigSolverControllerBase;

// ********** End Class UIKRigSolverControllerBase *************************************************

// ********** Begin Class UIKRigSolver *************************************************************
struct Z_Construct_UClass_UIKRigSolver_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_252_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigSolver(); \
	friend struct ::Z_Construct_UClass_UIKRigSolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigSolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigSolver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigSolver_NoRegister) \
	DECLARE_SERIALIZER(UIKRigSolver)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_252_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigSolver(UIKRigSolver&&) = delete; \
	UIKRigSolver(const UIKRigSolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigSolver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigSolver) \
	IKRIG_API virtual ~UIKRigSolver();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_249_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_252_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_252_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h_252_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigSolver;

// ********** End Class UIKRigSolver ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSolverBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
