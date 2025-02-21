// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverPoseSearchTrajectoryPredictor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoverComponent;
#ifdef MOVER_MoverPoseSearchTrajectoryPredictor_generated_h
#error "MoverPoseSearchTrajectoryPredictor.generated.h already included, missing '#pragma once' in MoverPoseSearchTrajectoryPredictor.h"
#endif
#define MOVER_MoverPoseSearchTrajectoryPredictor_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetup);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverTrajectoryPredictor(); \
	friend struct Z_Construct_UClass_UMoverTrajectoryPredictor_Statics; \
public: \
	DECLARE_CLASS(UMoverTrajectoryPredictor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverTrajectoryPredictor) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverTrajectoryPredictor*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverTrajectoryPredictor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverTrajectoryPredictor(UMoverTrajectoryPredictor&&); \
	UMoverTrajectoryPredictor(const UMoverTrajectoryPredictor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverTrajectoryPredictor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverTrajectoryPredictor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverTrajectoryPredictor) \
	NO_API virtual ~UMoverTrajectoryPredictor();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverTrajectoryPredictor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
