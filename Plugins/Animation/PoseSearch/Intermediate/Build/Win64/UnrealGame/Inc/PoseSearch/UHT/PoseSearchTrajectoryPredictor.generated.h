// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchTrajectoryPredictor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseSearchQueryTrajectory;
#ifdef POSESEARCH_PoseSearchTrajectoryPredictor_generated_h
#error "PoseSearchTrajectoryPredictor.generated.h already included, missing '#pragma once' in PoseSearchTrajectoryPredictor.h"
#endif
#define POSESEARCH_PoseSearchTrajectoryPredictor_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetVelocity_Implementation(FVector& OutVelocity) {}; \
	virtual void GetCurrentState_Implementation(FVector& OutPosition, FQuat& OutFacing, FVector& OutVelocity) {}; \
	virtual void GetGravity_Implementation(FVector& OutGravityAccel) {}; \
	virtual void Predict_Implementation(FPoseSearchQueryTrajectory& InOutTrajectory, int32 NumPredictionSamples, float SecondsPerPredictionSample, int32 NumHistorySamples) {}; \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execPredict);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchTrajectoryPredictorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchTrajectoryPredictorInterface(UPoseSearchTrajectoryPredictorInterface&&); \
	UPoseSearchTrajectoryPredictorInterface(const UPoseSearchTrajectoryPredictorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchTrajectoryPredictorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchTrajectoryPredictorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchTrajectoryPredictorInterface) \
	NO_API virtual ~UPoseSearchTrajectoryPredictorInterface();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface(); \
	friend struct Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchTrajectoryPredictorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchTrajectoryPredictorInterface)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoseSearchTrajectoryPredictorInterface() {} \
public: \
	typedef UPoseSearchTrajectoryPredictorInterface UClassType; \
	typedef IPoseSearchTrajectoryPredictorInterface ThisClass; \
	static void Execute_GetCurrentState(UObject* O, FVector& OutPosition, FQuat& OutFacing, FVector& OutVelocity); \
	static void Execute_GetGravity(UObject* O, FVector& OutGravityAccel); \
	static void Execute_GetVelocity(UObject* O, FVector& OutVelocity); \
	static void Execute_Predict(UObject* O, FPoseSearchQueryTrajectory& InOutTrajectory, int32 NumPredictionSamples, float SecondsPerPredictionSample, int32 NumHistorySamples); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_11_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchTrajectoryPredictorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
