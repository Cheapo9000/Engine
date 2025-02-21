// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MovementUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMoveInputType : uint8;
enum class ETeleportType : uint8;
struct FComputeCombinedVelocityParams;
struct FComputeVelocityParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;
#ifdef MOVER_MovementUtils_generated_h
#error "MovementUtils.generated.h already included, missing '#pragma once' in MovementUtils.h"
#endif
#define MOVER_MovementUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FTrajectorySampleInfo>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeVelocityParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FComputeVelocityParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FComputeCombinedVelocityParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAngularVelocityZero); \
	DECLARE_FUNCTION(execComputeDirectionIntent); \
	DECLARE_FUNCTION(execComputeAngularVelocity); \
	DECLARE_FUNCTION(execComputeVelocityFromPositions); \
	DECLARE_FUNCTION(execTrySafeMoveUpdatedComponent); \
	DECLARE_FUNCTION(execTryMoveToSlideAlongSurface); \
	DECLARE_FUNCTION(execComputeSlideDelta); \
	DECLARE_FUNCTION(execGetGravityVerticalComponent); \
	DECLARE_FUNCTION(execProjectToGravityFloor); \
	DECLARE_FUNCTION(execConstrainToPlane); \
	DECLARE_FUNCTION(execCanEscapeGravity); \
	DECLARE_FUNCTION(execComputeVelocityFromGravity); \
	DECLARE_FUNCTION(execComputeCombinedVelocity); \
	DECLARE_FUNCTION(execComputeVelocity); \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementUtils(); \
	friend struct Z_Construct_UClass_UMovementUtils_Statics; \
public: \
	DECLARE_CLASS(UMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovementUtils(UMovementUtils&&); \
	UMovementUtils(const UMovementUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementUtils) \
	NO_API virtual ~UMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_112_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMovementUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
