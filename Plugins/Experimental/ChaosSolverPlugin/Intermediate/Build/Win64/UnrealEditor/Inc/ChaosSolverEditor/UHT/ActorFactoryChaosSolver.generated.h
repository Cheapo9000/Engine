// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ActorFactoryChaosSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSSOLVEREDITOR_ActorFactoryChaosSolver_generated_h
#error "ActorFactoryChaosSolver.generated.h already included, missing '#pragma once' in ActorFactoryChaosSolver.h"
#endif
#define CHAOSSOLVEREDITOR_ActorFactoryChaosSolver_generated_h

#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryChaosSolver(); \
	friend struct Z_Construct_UClass_UActorFactoryChaosSolver_Statics; \
public: \
	DECLARE_CLASS(UActorFactoryChaosSolver, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEditor"), CHAOSSOLVEREDITOR_API) \
	DECLARE_SERIALIZER(UActorFactoryChaosSolver)


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSSOLVEREDITOR_API UActorFactoryChaosSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryChaosSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVEREDITOR_API, UActorFactoryChaosSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryChaosSolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorFactoryChaosSolver(UActorFactoryChaosSolver&&); \
	UActorFactoryChaosSolver(const UActorFactoryChaosSolver&); \
public: \
	CHAOSSOLVEREDITOR_API virtual ~UActorFactoryChaosSolver();


#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVEREDITOR_API UClass* StaticClass<class UActorFactoryChaosSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosSolverPlugin_Source_ChaosSolverEditor_Private_Chaos_ActorFactoryChaosSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
