// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/PathedMovement/ChaosPointMovementPathPattern.h"

#ifdef CHAOSMOVER_ChaosPointMovementPathPattern_generated_h
#error "ChaosPointMovementPathPattern.generated.h already included, missing '#pragma once' in ChaosPointMovementPathPattern.h"
#endif
#define CHAOSMOVER_ChaosPointMovementPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosPointMovementPathPoint **************************************
struct Z_Construct_UScriptStruct_FChaosPointMovementPathPoint_Statics;
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosPointMovementPathPoint_Statics; \
	CHAOSMOVER_API static class UScriptStruct* StaticStruct();


struct FChaosPointMovementPathPoint;
// ********** End ScriptStruct FChaosPointMovementPathPoint ****************************************

// ********** Begin Class UChaosPointMovementPathPattern *******************************************
struct Z_Construct_UClass_UChaosPointMovementPathPattern_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosPointMovementPathPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosPointMovementPathPattern(); \
	friend struct ::Z_Construct_UClass_UChaosPointMovementPathPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosPointMovementPathPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosPointMovementPathPattern, UChaosPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosPointMovementPathPattern_NoRegister) \
	DECLARE_SERIALIZER(UChaosPointMovementPathPattern)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosPointMovementPathPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosPointMovementPathPattern(UChaosPointMovementPathPattern&&) = delete; \
	UChaosPointMovementPathPattern(const UChaosPointMovementPathPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosPointMovementPathPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosPointMovementPathPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosPointMovementPathPattern) \
	NO_API virtual ~UChaosPointMovementPathPattern();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosPointMovementPathPattern;

// ********** End Class UChaosPointMovementPathPattern *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_PathedMovement_ChaosPointMovementPathPattern_h

// ********** Begin Enum EChaosPointMovementLocationBasis ******************************************
#define FOREACH_ENUM_ECHAOSPOINTMOVEMENTLOCATIONBASIS(op) \
	op(EChaosPointMovementLocationBasis::PreviousPoint) \
	op(EChaosPointMovementLocationBasis::PathOrigin) \
	op(EChaosPointMovementLocationBasis::World) 

enum class EChaosPointMovementLocationBasis : uint8;
template<> struct TIsUEnumClass<EChaosPointMovementLocationBasis> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosPointMovementLocationBasis>();
// ********** End Enum EChaosPointMovementLocationBasis ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
