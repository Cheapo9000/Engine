// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableConstraintsActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADeformableSolverActor;
#ifdef CHAOSFLESHENGINE_ChaosDeformableConstraintsActor_generated_h
#error "ChaosDeformableConstraintsActor.generated.h already included, missing '#pragma once' in ChaosDeformableConstraintsActor.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableConstraintsActor_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEnableSimulation);


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesADeformableConstraintsActor(); \
	friend struct Z_Construct_UClass_ADeformableConstraintsActor_Statics; \
public: \
	DECLARE_CLASS(ADeformableConstraintsActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(ADeformableConstraintsActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADeformableConstraintsActor*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeformableConstraintsActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeformableConstraintsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeformableConstraintsActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeformableConstraintsActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeformableConstraintsActor(ADeformableConstraintsActor&&); \
	ADeformableConstraintsActor(const ADeformableConstraintsActor&); \
public: \
	NO_API virtual ~ADeformableConstraintsActor();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class ADeformableConstraintsActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableConstraintsActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
