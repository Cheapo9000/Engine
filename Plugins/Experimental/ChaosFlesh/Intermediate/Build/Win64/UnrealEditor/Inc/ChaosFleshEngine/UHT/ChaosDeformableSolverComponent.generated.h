// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableSolverComponent.h"
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
#ifdef CHAOSFLESHENGINE_ChaosDeformableSolverComponent_generated_h
#error "ChaosDeformableSolverComponent.generated.h already included, missing '#pragma once' in ChaosDeformableSolverComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableSolverComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectedObjectsGroup_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FConnectedObjectsGroup>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowFleshSolverProxy_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowPhysicsSolverProxy Super;


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FDataflowFleshSolverProxy>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetSimulationProperties);


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUDeformableSolverComponent(); \
	friend struct Z_Construct_UClass_UDeformableSolverComponent_Statics; \
public: \
	DECLARE_CLASS(UDeformableSolverComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDeformableSolverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDeformableSolverComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableSolverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableSolverComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableSolverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableSolverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeformableSolverComponent(UDeformableSolverComponent&&); \
	UDeformableSolverComponent(const UDeformableSolverComponent&); \
public:


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_72_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDeformableSolverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
