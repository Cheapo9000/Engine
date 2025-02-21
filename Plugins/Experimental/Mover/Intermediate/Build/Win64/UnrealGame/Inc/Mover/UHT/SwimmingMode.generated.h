// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/SwimmingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
#ifdef MOVER_SwimmingMode_generated_h
#error "SwimmingMode.generated.h already included, missing '#pragma once' in SwimmingMode.h"
#endif
#define MOVER_SwimmingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FSwimmingControlSettings>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSimulationTick); \
	DECLARE_FUNCTION(execOnGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUSwimmingMode(); \
	friend struct Z_Construct_UClass_USwimmingMode_Statics; \
public: \
	DECLARE_CLASS(USwimmingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(USwimmingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USwimmingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwimmingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USwimmingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwimmingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USwimmingMode(USwimmingMode&&); \
	USwimmingMode(const USwimmingMode&); \
public: \
	NO_API virtual ~USwimmingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_192_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class USwimmingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
