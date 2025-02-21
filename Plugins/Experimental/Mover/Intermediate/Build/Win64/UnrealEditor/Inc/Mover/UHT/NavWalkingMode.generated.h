// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/NavWalkingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
#ifdef MOVER_NavWalkingMode_generated_h
#error "NavWalkingMode.generated.h already included, missing '#pragma once' in NavWalkingMode.h"
#endif
#define MOVER_NavWalkingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator); \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavWalkingMode(); \
	friend struct Z_Construct_UClass_UNavWalkingMode_Statics; \
public: \
	DECLARE_CLASS(UNavWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UNavWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavWalkingMode(UNavWalkingMode&&); \
	UNavWalkingMode(const UNavWalkingMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavWalkingMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavWalkingMode) \
	NO_API virtual ~UNavWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UNavWalkingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
