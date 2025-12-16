// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/ChaosMovementModeTransition.h"

#ifdef CHAOSMOVER_ChaosMovementModeTransition_generated_h
#error "ChaosMovementModeTransition.generated.h already included, missing '#pragma once' in ChaosMovementModeTransition.h"
#endif
#define CHAOSMOVER_ChaosMovementModeTransition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosMoverSimulation;

// ********** Begin Class UChaosMovementModeTransition *********************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSimulation_Mutable); \
	DECLARE_FUNCTION(execGetSimulation);


struct Z_Construct_UClass_UChaosMovementModeTransition_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosMovementModeTransition_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosMovementModeTransition(); \
	friend struct ::Z_Construct_UClass_UChaosMovementModeTransition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosMovementModeTransition_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosMovementModeTransition, UBaseMovementModeTransition, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosMovementModeTransition_NoRegister) \
	DECLARE_SERIALIZER(UChaosMovementModeTransition)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosMovementModeTransition(UChaosMovementModeTransition&&) = delete; \
	UChaosMovementModeTransition(const UChaosMovementModeTransition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosMovementModeTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosMovementModeTransition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosMovementModeTransition) \
	CHAOSMOVER_API virtual ~UChaosMovementModeTransition();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosMovementModeTransition;

// ********** End Class UChaosMovementModeTransition ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementModeTransition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
