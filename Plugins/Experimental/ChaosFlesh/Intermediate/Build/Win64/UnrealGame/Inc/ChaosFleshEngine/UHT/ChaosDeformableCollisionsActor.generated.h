// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableCollisionsActor.h"

#ifdef CHAOSFLESHENGINE_ChaosDeformableCollisionsActor_generated_h
#error "ChaosDeformableCollisionsActor.generated.h already included, missing '#pragma once' in ChaosDeformableCollisionsActor.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableCollisionsActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADeformableSolverActor;

// ********** Begin Class ADeformableCollisionsActor ***********************************************
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEnableSimulation);


struct Z_Construct_UClass_ADeformableCollisionsActor_Statics;
CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableCollisionsActor_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADeformableCollisionsActor(); \
	friend struct ::Z_Construct_UClass_ADeformableCollisionsActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSFLESHENGINE_API UClass* ::Z_Construct_UClass_ADeformableCollisionsActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADeformableCollisionsActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), Z_Construct_UClass_ADeformableCollisionsActor_NoRegister) \
	DECLARE_SERIALIZER(ADeformableCollisionsActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADeformableCollisionsActor*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeformableCollisionsActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeformableCollisionsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeformableCollisionsActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeformableCollisionsActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADeformableCollisionsActor(ADeformableCollisionsActor&&) = delete; \
	ADeformableCollisionsActor(const ADeformableCollisionsActor&) = delete; \
	NO_API virtual ~ADeformableCollisionsActor();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADeformableCollisionsActor;

// ********** End Class ADeformableCollisionsActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableCollisionsActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
