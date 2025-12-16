// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/Solvers/IKRigSetTransform.h"

#ifdef IKRIG_IKRigSetTransform_generated_h
#error "IKRigSetTransform.generated.h already included, missing '#pragma once' in IKRigSetTransform.h"
#endif
#define IKRIG_IKRigSetTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigSetTransformSettings;

// ********** Begin ScriptStruct FIKRigSetTransformSettings ****************************************
struct Z_Construct_UScriptStruct_FIKRigSetTransformSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigSetTransformSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverSettingsBase Super;


struct FIKRigSetTransformSettings;
// ********** End ScriptStruct FIKRigSetTransformSettings ******************************************

// ********** Begin ScriptStruct FIKRigSetTransform ************************************************
struct Z_Construct_UScriptStruct_FIKRigSetTransform_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigSetTransform_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FIKRigSolverBase Super;


struct FIKRigSetTransform;
// ********** End ScriptStruct FIKRigSetTransform **************************************************

// ********** Begin Class UIKRigSetTransformController *********************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSolverSettings); \
	DECLARE_FUNCTION(execGetSolverSettings);


struct Z_Construct_UClass_UIKRigSetTransformController_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRigSetTransformController_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigSetTransformController(); \
	friend struct ::Z_Construct_UClass_UIKRigSetTransformController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRigSetTransformController_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRigSetTransformController, UIKRigSolverControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRigSetTransformController_NoRegister) \
	DECLARE_SERIALIZER(UIKRigSetTransformController)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRigSetTransformController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRigSetTransformController(UIKRigSetTransformController&&) = delete; \
	UIKRigSetTransformController(const UIKRigSetTransformController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRigSetTransformController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigSetTransformController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigSetTransformController) \
	IKRIG_API virtual ~UIKRigSetTransformController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_81_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRigSetTransformController;

// ********** End Class UIKRigSetTransformController ***********************************************

// ********** Begin Class UIKRig_SetTransformEffector **********************************************
struct Z_Construct_UClass_UIKRig_SetTransformEffector_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_SetTransformEffector(); \
	friend struct ::Z_Construct_UClass_UIKRig_SetTransformEffector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_SetTransformEffector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_SetTransformEffector_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_SetTransformEffector)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRig_SetTransformEffector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_SetTransformEffector(UIKRig_SetTransformEffector&&) = delete; \
	UIKRig_SetTransformEffector(const UIKRig_SetTransformEffector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_SetTransformEffector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_SetTransformEffector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRig_SetTransformEffector) \
	IKRIG_API virtual ~UIKRig_SetTransformEffector();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_104_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_SetTransformEffector;

// ********** End Class UIKRig_SetTransformEffector ************************************************

// ********** Begin Class UIKRig_SetTransform ******************************************************
struct Z_Construct_UClass_UIKRig_SetTransform_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRig_SetTransform_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRig_SetTransform(); \
	friend struct ::Z_Construct_UClass_UIKRig_SetTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRig_SetTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRig_SetTransform, UIKRigSolver, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRig_SetTransform_NoRegister) \
	DECLARE_SERIALIZER(UIKRig_SetTransform)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_123_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRig_SetTransform(UIKRig_SetTransform&&) = delete; \
	UIKRig_SetTransform(const UIKRig_SetTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRig_SetTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRig_SetTransform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIKRig_SetTransform) \
	IKRIG_API virtual ~UIKRig_SetTransform();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_120_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRig_SetTransform;

// ********** End Class UIKRig_SetTransform ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_IKRigSetTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
