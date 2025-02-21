// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchTrajectoryLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimInstance;
class UObject;
struct FLinearColor;
struct FPoseSearchQueryTrajectory;
struct FPoseSearchQueryTrajectorySample;
struct FPoseSearchTrajectory_WorldCollisionResults;
struct FPoseSearchTrajectoryData;
#ifdef POSESEARCH_PoseSearchTrajectoryLibrary_generated_h
#error "PoseSearchTrajectoryLibrary.generated.h already included, missing '#pragma once' in PoseSearchTrajectoryLibrary.h"
#endif
#define POSESEARCH_PoseSearchTrajectoryLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchTrajectoryData>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchTrajectory_WorldCollisionResults>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawTrajectory); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execGetTrajectoryAngularVelocity); \
	DECLARE_FUNCTION(execGetTrajectoryVelocity); \
	DECLARE_FUNCTION(execGetTrajectorySampleAtTime); \
	DECLARE_FUNCTION(execHandleTrajectoryWorldCollisionsWithGravity); \
	DECLARE_FUNCTION(execHandleTrajectoryWorldCollisions); \
	DECLARE_FUNCTION(execPoseSearchGeneratePredictorTrajectory); \
	DECLARE_FUNCTION(execPoseSearchGenerateTrajectory);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchTrajectoryLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchTrajectoryLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchTrajectoryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchTrajectoryLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchTrajectoryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchTrajectoryLibrary(UPoseSearchTrajectoryLibrary&&); \
	UPoseSearchTrajectoryLibrary(const UPoseSearchTrajectoryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchTrajectoryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchTrajectoryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchTrajectoryLibrary) \
	NO_API virtual ~UPoseSearchTrajectoryLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_101_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchTrajectoryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
