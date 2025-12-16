// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ChaosVDSolverInfoActor.h"

#ifdef CHAOSVD_ChaosVDSolverInfoActor_generated_h
#error "ChaosVDSolverInfoActor.generated.h already included, missing '#pragma once' in ChaosVDSolverInfoActor.h"
#endif
#define CHAOSVD_ChaosVDSolverInfoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AChaosVDSolverInfoActor **************************************************
struct Z_Construct_UClass_AChaosVDSolverInfoActor_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_AChaosVDSolverInfoActor_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosVDSolverInfoActor(); \
	friend struct ::Z_Construct_UClass_AChaosVDSolverInfoActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_AChaosVDSolverInfoActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AChaosVDSolverInfoActor, AChaosVDDataContainerBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_AChaosVDSolverInfoActor_NoRegister) \
	DECLARE_SERIALIZER(AChaosVDSolverInfoActor)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChaosVDSolverInfoActor(AChaosVDSolverInfoActor&&) = delete; \
	AChaosVDSolverInfoActor(const AChaosVDSolverInfoActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChaosVDSolverInfoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosVDSolverInfoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChaosVDSolverInfoActor) \
	NO_API virtual ~AChaosVDSolverInfoActor();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_24_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChaosVDSolverInfoActor;

// ********** End Class AChaosVDSolverInfoActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDSolverInfoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
