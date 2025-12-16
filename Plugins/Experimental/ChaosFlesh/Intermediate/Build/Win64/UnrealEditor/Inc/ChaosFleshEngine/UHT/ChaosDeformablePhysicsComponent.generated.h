// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformablePhysicsComponent.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformablePhysicsComponent_generated_h
#error "ChaosDeformablePhysicsComponent.generated.h already included, missing '#pragma once' in ChaosDeformablePhysicsComponent.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformablePhysicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADeformableSolverActor;
class UDeformableSolverComponent;

// ********** Begin Class UDeformablePhysicsComponent **********************************************
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEnableSimulationFromActor); \
	DECLARE_FUNCTION(execDisableSimulation); \
	DECLARE_FUNCTION(execEnableSimulation);


struct Z_Construct_UClass_UDeformablePhysicsComponent_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformablePhysicsComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDeformablePhysicsComponent(); \
	friend struct ::Z_Construct_UClass_UDeformablePhysicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_UDeformablePhysicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeformablePhysicsComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_UDeformablePhysicsComponent_NoRegister) \
	DECLARE_SERIALIZER(UDeformablePhysicsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDeformablePhysicsComponent*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformablePhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformablePhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformablePhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformablePhysicsComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeformablePhysicsComponent(UDeformablePhysicsComponent&&) = delete; \
	UDeformablePhysicsComponent(const UDeformablePhysicsComponent&) = delete;


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeformablePhysicsComponent;

// ********** End Class UDeformablePhysicsComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
