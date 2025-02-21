// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/FlyingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
#ifdef MOVER_FlyingMode_generated_h
#error "FlyingMode.generated.h already included, missing '#pragma once' in FlyingMode.h"
#endif
#define MOVER_FlyingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFlyingMode(); \
	friend struct Z_Construct_UClass_UFlyingMode_Statics; \
public: \
	DECLARE_CLASS(UFlyingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UFlyingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlyingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlyingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlyingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlyingMode(UFlyingMode&&); \
	UFlyingMode(const UFlyingMode&); \
public: \
	NO_API virtual ~UFlyingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UFlyingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
