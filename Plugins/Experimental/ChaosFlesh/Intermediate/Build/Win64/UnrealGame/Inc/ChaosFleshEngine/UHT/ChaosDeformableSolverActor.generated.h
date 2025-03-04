// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableSolverActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHENGINE_ChaosDeformableSolverActor_generated_h
#error "ChaosDeformableSolverActor.generated.h already included, missing '#pragma once' in ChaosDeformableSolverActor.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableSolverActor_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADeformableSolverActor(); \
	friend struct Z_Construct_UClass_ADeformableSolverActor_Statics; \
public: \
	DECLARE_CLASS(ADeformableSolverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(ADeformableSolverActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADeformableSolverActor*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeformableSolverActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeformableSolverActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeformableSolverActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeformableSolverActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeformableSolverActor(ADeformableSolverActor&&); \
	ADeformableSolverActor(const ADeformableSolverActor&); \
public: \
	NO_API virtual ~ADeformableSolverActor();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class ADeformableSolverActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
