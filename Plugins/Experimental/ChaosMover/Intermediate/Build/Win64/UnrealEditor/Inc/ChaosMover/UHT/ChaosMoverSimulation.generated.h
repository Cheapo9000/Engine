// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/ChaosMoverSimulation.h"

#ifdef CHAOSMOVER_ChaosMoverSimulation_generated_h
#error "ChaosMoverSimulation.generated.h already included, missing '#pragma once' in ChaosMoverSimulation.h"
#endif
#define CHAOSMOVER_ChaosMoverSimulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseMovementMode;
struct FGameplayTag;
struct FMovementModifierHandle;
struct FMoverDataCollection;

// ********** Begin Class UChaosMoverSimulation ****************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugSimData); \
	DECLARE_FUNCTION(execHasGameplayTag); \
	DECLARE_FUNCTION(execCancelModifierFromHandle); \
	DECLARE_FUNCTION(execFindMovementModeByName_Mutable); \
	DECLARE_FUNCTION(execFindMovementModeByName); \
	DECLARE_FUNCTION(execGetCurrentMovementMode); \
	DECLARE_FUNCTION(execGetLocalSimInput_Mutable); \
	DECLARE_FUNCTION(execGetLocalSimInput);


struct Z_Construct_UClass_UChaosMoverSimulation_Statics;
	struct Z_Construct_UFunction_UChaosMoverSimulation_K2_QueueInstantMovementEffect_Statics; \
	struct Z_Construct_UFunction_UChaosMoverSimulation_K2_QueueMovementModifier_Statics; \
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosMoverSimulation_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosMoverSimulation(); \
	friend struct ::Z_Construct_UClass_UChaosMoverSimulation_Statics; \
	friend struct ::Z_Construct_UFunction_UChaosMoverSimulation_K2_QueueInstantMovementEffect_Statics; \
	friend struct ::Z_Construct_UFunction_UChaosMoverSimulation_K2_QueueMovementModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosMoverSimulation_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosMoverSimulation, UMoverSimulation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosMoverSimulation_NoRegister) \
	DECLARE_SERIALIZER(UChaosMoverSimulation)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosMoverSimulation(UChaosMoverSimulation&&) = delete; \
	UChaosMoverSimulation(const UChaosMoverSimulation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosMoverSimulation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosMoverSimulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosMoverSimulation) \
	CHAOSMOVER_API virtual ~UChaosMoverSimulation();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosMoverSimulation;

// ********** End Class UChaosMoverSimulation ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMoverSimulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
