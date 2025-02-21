// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/GroundMovementUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGroundMoveParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;
struct FProposedMove;
#ifdef MOVER_GroundMovementUtils_generated_h
#error "GroundMovementUtils.generated.h already included, missing '#pragma once' in GroundMovementUtils.h"
#endif
#define MOVER_GroundMovementUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGroundMoveParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FGroundMoveParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanStepUpOnHitSurface); \
	DECLARE_FUNCTION(execComputeDeflectedMoveOntoRamp); \
	DECLARE_FUNCTION(execTryWalkToSlideAlongSurface); \
	DECLARE_FUNCTION(execComputeControlledGroundMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroundMovementUtils(); \
	friend struct Z_Construct_UClass_UGroundMovementUtils_Statics; \
public: \
	DECLARE_CLASS(UGroundMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UGroundMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroundMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGroundMovementUtils(UGroundMovementUtils&&); \
	UGroundMovementUtils(const UGroundMovementUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroundMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroundMovementUtils) \
	NO_API virtual ~UGroundMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_66_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UGroundMovementUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
