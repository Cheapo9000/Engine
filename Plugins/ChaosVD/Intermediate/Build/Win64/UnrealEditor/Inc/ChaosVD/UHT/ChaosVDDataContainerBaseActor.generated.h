// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ChaosVDDataContainerBaseActor.h"

#ifdef CHAOSVD_ChaosVDDataContainerBaseActor_generated_h
#error "ChaosVDDataContainerBaseActor.generated.h already included, missing '#pragma once' in ChaosVDDataContainerBaseActor.h"
#endif
#define CHAOSVD_ChaosVDDataContainerBaseActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AChaosVDDataContainerBaseActor *******************************************
struct Z_Construct_UClass_AChaosVDDataContainerBaseActor_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_AChaosVDDataContainerBaseActor_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosVDDataContainerBaseActor(); \
	friend struct ::Z_Construct_UClass_AChaosVDDataContainerBaseActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_AChaosVDDataContainerBaseActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AChaosVDDataContainerBaseActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_AChaosVDDataContainerBaseActor_NoRegister) \
	DECLARE_SERIALIZER(AChaosVDDataContainerBaseActor)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AChaosVDDataContainerBaseActor(AChaosVDDataContainerBaseActor&&) = delete; \
	AChaosVDDataContainerBaseActor(const AChaosVDDataContainerBaseActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, AChaosVDDataContainerBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosVDDataContainerBaseActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AChaosVDDataContainerBaseActor)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_22_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AChaosVDDataContainerBaseActor;

// ********** End Class AChaosVDDataContainerBaseActor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Actors_ChaosVDDataContainerBaseActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
