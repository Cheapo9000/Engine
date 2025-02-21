// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/AirMovementUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloorCheckResult;
struct FFreeMoveParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;
struct FProposedMove;
#ifdef MOVER_AirMovementUtils_generated_h
#error "AirMovementUtils.generated.h already included, missing '#pragma once' in AirMovementUtils.h"
#endif
#define MOVER_AirMovementUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFreeMoveParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FFreeMoveParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryMoveToFallAlongSurface); \
	DECLARE_FUNCTION(execIsValidLandingSpot); \
	DECLARE_FUNCTION(execComputeControlledFreeMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirMovementUtils(); \
	friend struct Z_Construct_UClass_UAirMovementUtils_Statics; \
public: \
	DECLARE_CLASS(UAirMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UAirMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAirMovementUtils(UAirMovementUtils&&); \
	UAirMovementUtils(const UAirMovementUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirMovementUtils) \
	NO_API virtual ~UAirMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UAirMovementUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
