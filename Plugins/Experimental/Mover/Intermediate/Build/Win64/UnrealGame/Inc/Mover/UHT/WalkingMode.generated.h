// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/WalkingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
#ifdef MOVER_WalkingMode_generated_h
#error "WalkingMode.generated.h already included, missing '#pragma once' in WalkingMode.h"
#endif
#define MOVER_WalkingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator); \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWalkingMode(); \
	friend struct Z_Construct_UClass_UWalkingMode_Statics; \
public: \
	DECLARE_CLASS(UWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWalkingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalkingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWalkingMode(UWalkingMode&&); \
	UWalkingMode(const UWalkingMode&); \
public: \
	NO_API virtual ~UWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UWalkingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
