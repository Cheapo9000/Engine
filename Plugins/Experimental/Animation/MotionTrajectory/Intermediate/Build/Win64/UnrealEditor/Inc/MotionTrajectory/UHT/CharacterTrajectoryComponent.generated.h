// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterTrajectoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONTRAJECTORY_CharacterTrajectoryComponent_generated_h
#error "CharacterTrajectoryComponent.generated.h already included, missing '#pragma once' in CharacterTrajectoryComponent.h"
#endif
#define MOTIONTRAJECTORY_CharacterTrajectoryComponent_generated_h

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMovementUpdated);


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterTrajectoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterTrajectoryComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterTrajectoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), NO_API) \
	DECLARE_SERIALIZER(UCharacterTrajectoryComponent)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterTrajectoryComponent(UCharacterTrajectoryComponent&&); \
	UCharacterTrajectoryComponent(const UCharacterTrajectoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterTrajectoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTrajectoryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterTrajectoryComponent) \
	NO_API virtual ~UCharacterTrajectoryComponent();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONTRAJECTORY_API UClass* StaticClass<class UCharacterTrajectoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
