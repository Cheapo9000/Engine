// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ChaosVDSolverInfoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDSolverInfoActor_generated_h
#error "ChaosVDSolverInfoActor.generated.h already included, missing '#pragma once' in ChaosVDSolverInfoActor.h"
#endif
#define CHAOSVD_ChaosVDSolverInfoActor_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosVDSolverInfoActor(); \
	friend struct Z_Construct_UClass_AChaosVDSolverInfoActor_Statics; \
public: \
	DECLARE_CLASS(AChaosVDSolverInfoActor, AChaosVDDataContainerBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(AChaosVDSolverInfoActor)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosVDSolverInfoActor(AChaosVDSolverInfoActor&&); \
	AChaosVDSolverInfoActor(const AChaosVDSolverInfoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChaosVDSolverInfoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosVDSolverInfoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChaosVDSolverInfoActor) \
	NO_API virtual ~AChaosVDSolverInfoActor();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_25_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class AChaosVDSolverInfoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
