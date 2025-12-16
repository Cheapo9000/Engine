// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableSolverComponent.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformableSolverComponent_generated_h
#error "ChaosDeformableSolverComponent.generated.h already included, missing '#pragma once' in ChaosDeformableSolverComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableSolverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSolverCollisionsGroup;
struct FSolverConstraintsGroup;
struct FSolverDebuggingGroup;
struct FSolverEvolutionGroup;
struct FSolverForcesGroup;
struct FSolverMuscleActivationGroup;
struct FSolverTimingGroup;

// ********** Begin ScriptStruct FConnectedObjectsGroup ********************************************
struct Z_Construct_UScriptStruct_FConnectedObjectsGroup_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConnectedObjectsGroup_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


struct FConnectedObjectsGroup;
// ********** End ScriptStruct FConnectedObjectsGroup **********************************************

// ********** Begin ScriptStruct FDataflowFleshSolverProxy *****************************************
struct Z_Construct_UScriptStruct_FDataflowFleshSolverProxy_Statics;
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowFleshSolverProxy_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowPhysicsSolverProxy Super;


struct FDataflowFleshSolverProxy;
// ********** End ScriptStruct FDataflowFleshSolverProxy *******************************************

// ********** Begin Class UDeformableSolverComponent ***********************************************
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetSimulationProperties);


struct Z_Construct_UClass_UDeformableSolverComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableSolverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableSolverComponent(); \
	friend struct ::Z_Construct_UClass_UDeformableSolverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UDeformableSolverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeformableSolverComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UDeformableSolverComponent_NoRegister) \
	DECLARE_SERIALIZER(UDeformableSolverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDeformableSolverComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableSolverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableSolverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableSolverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableSolverComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeformableSolverComponent(UDeformableSolverComponent&&) = delete; \
	UDeformableSolverComponent(const UDeformableSolverComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_72_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeformableSolverComponent;

// ********** End Class UDeformableSolverComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
