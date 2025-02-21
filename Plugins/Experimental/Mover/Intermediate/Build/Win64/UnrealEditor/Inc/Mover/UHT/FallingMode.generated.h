// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/FallingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloorCheckResult;
struct FHitResult;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FRelativeBaseInfo;
struct FSimulationTickParams;
#ifdef MOVER_FallingMode_generated_h
#error "FallingMode.generated.h already included, missing '#pragma once' in FallingMode.h"
#endif
#define MOVER_FallingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_13_DELEGATE \
MOVER_API void FMover_OnLanded_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnLanded, FName const& NextMovementModeName, FHitResult const& HitResult);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execProcessLanded); \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFallingMode(); \
	friend struct Z_Construct_UClass_UFallingMode_Statics; \
public: \
	DECLARE_CLASS(UFallingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UFallingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFallingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFallingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFallingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFallingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFallingMode(UFallingMode&&); \
	UFallingMode(const UFallingMode&); \
public: \
	NO_API virtual ~UFallingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UFallingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
