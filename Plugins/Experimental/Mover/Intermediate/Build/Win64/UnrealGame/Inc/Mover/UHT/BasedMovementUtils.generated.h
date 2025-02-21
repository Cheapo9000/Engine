// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/BasedMovementUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef MOVER_BasedMovementUtils_generated_h
#error "BasedMovementUtils.generated.h already included, missing '#pragma once' in BasedMovementUtils.h"
#endif
#define MOVER_BasedMovementUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FRelativeBaseInfo>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransformRotatorToLocal); \
	DECLARE_FUNCTION(execTransformRotatorToWorld); \
	DECLARE_FUNCTION(execTransformDirectionToLocal); \
	DECLARE_FUNCTION(execTransformDirectionToWorld); \
	DECLARE_FUNCTION(execTransformLocationToLocal); \
	DECLARE_FUNCTION(execTransformLocationToWorld); \
	DECLARE_FUNCTION(execTransformWorldRotatorToBased); \
	DECLARE_FUNCTION(execTransformBasedRotatorToWorld); \
	DECLARE_FUNCTION(execTransformWorldDirectionToBased); \
	DECLARE_FUNCTION(execTransformBasedDirectionToWorld); \
	DECLARE_FUNCTION(execTransformWorldLocationToBased); \
	DECLARE_FUNCTION(execTransformBasedLocationToWorld); \
	DECLARE_FUNCTION(execGetMovementBaseTransform); \
	DECLARE_FUNCTION(execIsBaseSimulatingPhysics); \
	DECLARE_FUNCTION(execIsADynamicBase);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasedMovementUtils(); \
	friend struct Z_Construct_UClass_UBasedMovementUtils_Statics; \
public: \
	DECLARE_CLASS(UBasedMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UBasedMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasedMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasedMovementUtils(UBasedMovementUtils&&); \
	UBasedMovementUtils(const UBasedMovementUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasedMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasedMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasedMovementUtils) \
	NO_API virtual ~UBasedMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UBasedMovementUtils>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverDynamicBasedMovementTickFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
