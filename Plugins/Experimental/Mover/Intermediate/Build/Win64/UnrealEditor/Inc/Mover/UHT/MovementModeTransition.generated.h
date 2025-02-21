// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementModeTransition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSimulationTickParams;
struct FTransitionEvalResult;
#ifdef MOVER_MovementModeTransition_generated_h
#error "MovementModeTransition.generated.h already included, missing '#pragma once' in MovementModeTransition.h"
#endif
#define MOVER_MovementModeTransition_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransitionEvalResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FTransitionEvalResult>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUBaseMovementModeTransition(); \
	friend struct Z_Construct_UClass_UBaseMovementModeTransition_Statics; \
public: \
	DECLARE_CLASS(UBaseMovementModeTransition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UBaseMovementModeTransition)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMovementModeTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMovementModeTransition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMovementModeTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementModeTransition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseMovementModeTransition(UBaseMovementModeTransition&&); \
	UBaseMovementModeTransition(const UBaseMovementModeTransition&); \
public: \
	NO_API virtual ~UBaseMovementModeTransition();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_34_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UBaseMovementModeTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
