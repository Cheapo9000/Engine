// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/WaterMovementUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProposedMove;
struct FUpdateWaterSplineDataParams;
struct FWaterCheckResult;
struct FWaterMoveParams;
#ifdef MOVER_WaterMovementUtils_generated_h
#error "WaterMovementUtils.generated.h already included, missing '#pragma once' in WaterMovementUtils.h"
#endif
#define MOVER_WaterMovementUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterMoveParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FWaterMoveParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FWaterFlowSplineData>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterCheckResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FWaterCheckResult>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FUpdateWaterSplineDataParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWaterSplineData); \
	DECLARE_FUNCTION(execComputeControlledWaterMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterMovementUtils(); \
	friend struct Z_Construct_UClass_UWaterMovementUtils_Statics; \
public: \
	DECLARE_CLASS(UWaterMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UWaterMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaterMovementUtils(UWaterMovementUtils&&); \
	UWaterMovementUtils(const UWaterMovementUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterMovementUtils) \
	NO_API virtual ~UWaterMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_181_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UWaterMovementUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
