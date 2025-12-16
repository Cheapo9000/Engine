// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosSplineMovementPathPattern.h"

#ifdef CHAOSMOVER_ChaosSplineMovementPathPattern_generated_h
#error "ChaosSplineMovementPathPattern.generated.h already included, missing '#pragma once' in ChaosSplineMovementPathPattern.h"
#endif
#define CHAOSMOVER_ChaosSplineMovementPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosSplinePathPatternPointData **********************************
struct Z_Construct_UScriptStruct_FChaosSplinePathPatternPointData_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosSplinePathPatternPointData_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct();


struct FChaosSplinePathPatternPointData;
// ********** End ScriptStruct FChaosSplinePathPatternPointData ************************************

// ********** Begin Class UChaosSplineMovementPathPattern ******************************************
struct Z_Construct_UClass_UChaosSplineMovementPathPattern_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosSplineMovementPathPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSplineMovementPathPattern(); \
	friend struct ::Z_Construct_UClass_UChaosSplineMovementPathPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosSplineMovementPathPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSplineMovementPathPattern, UChaosPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosSplineMovementPathPattern_NoRegister) \
	DECLARE_SERIALIZER(UChaosSplineMovementPathPattern)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSplineMovementPathPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSplineMovementPathPattern(UChaosSplineMovementPathPattern&&) = delete; \
	UChaosSplineMovementPathPattern(const UChaosSplineMovementPathPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSplineMovementPathPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSplineMovementPathPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSplineMovementPathPattern) \
	NO_API virtual ~UChaosSplineMovementPathPattern();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSplineMovementPathPattern;

// ********** End Class UChaosSplineMovementPathPattern ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosSplineMovementPathPattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
