// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/TrajectoryTypes.h"

#ifdef ENGINE_TrajectoryTypes_generated_h
#error "TrajectoryTypes.generated.h already included, missing '#pragma once' in TrajectoryTypes.h"
#endif
#define ENGINE_TrajectoryTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FTransformTrajectory;

// ********** Begin ScriptStruct FTransformTrajectorySample ****************************************
struct Z_Construct_UScriptStruct_FTransformTrajectorySample_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformTrajectorySample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTransformTrajectorySample;
// ********** End ScriptStruct FTransformTrajectorySample ******************************************

// ********** Begin ScriptStruct FTransformTrajectory **********************************************
struct Z_Construct_UScriptStruct_FTransformTrajectory_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTransformTrajectory_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTransformTrajectory;
// ********** End ScriptStruct FTransformTrajectory ************************************************

// ********** Begin Class UTransformTrajectoryBlueprintLibrary *************************************
#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugDrawTrajectory);


struct Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformTrajectoryBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformTrajectoryBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTransformTrajectoryBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTransformTrajectoryBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformTrajectoryBlueprintLibrary(UTransformTrajectoryBlueprintLibrary&&) = delete; \
	UTransformTrajectoryBlueprintLibrary(const UTransformTrajectoryBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTransformTrajectoryBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformTrajectoryBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformTrajectoryBlueprintLibrary) \
	ENGINE_API virtual ~UTransformTrajectoryBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_61_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformTrajectoryBlueprintLibrary;

// ********** End Class UTransformTrajectoryBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
