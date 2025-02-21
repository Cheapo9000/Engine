// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ChaosVDGameFrameInfoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDGameFrameInfoActor_generated_h
#error "ChaosVDGameFrameInfoActor.generated.h already included, missing '#pragma once' in ChaosVDGameFrameInfoActor.h"
#endif
#define CHAOSVD_ChaosVDGameFrameInfoActor_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosVDGameFrameInfoActor(); \
	friend struct Z_Construct_UClass_AChaosVDGameFrameInfoActor_Statics; \
public: \
	DECLARE_CLASS(AChaosVDGameFrameInfoActor, AChaosVDDataContainerBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(AChaosVDGameFrameInfoActor)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosVDGameFrameInfoActor(AChaosVDGameFrameInfoActor&&); \
	AChaosVDGameFrameInfoActor(const AChaosVDGameFrameInfoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChaosVDGameFrameInfoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosVDGameFrameInfoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChaosVDGameFrameInfoActor) \
	NO_API virtual ~AChaosVDGameFrameInfoActor();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_15_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class AChaosVDGameFrameInfoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Actors_ChaosVDGameFrameInfoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
