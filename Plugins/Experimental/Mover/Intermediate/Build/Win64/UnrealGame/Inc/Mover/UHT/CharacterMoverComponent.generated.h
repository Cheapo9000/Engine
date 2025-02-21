// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/CharacterMoverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStanceMode : uint8;
struct FMoverInputCmdContext;
struct FMoverTimeStep;
#ifdef MOVER_CharacterMoverComponent_generated_h
#error "CharacterMoverComponent.generated.h already included, missing '#pragma once' in CharacterMoverComponent.h"
#endif
#define MOVER_CharacterMoverComponent_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_14_DELEGATE \
MOVER_API void FMover_OnStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnStanceChanged, EStanceMode OldStance, EStanceMode NewStance);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoverPreSimulationTick); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execCanActorJump); \
	DECLARE_FUNCTION(execIsSlopeSliding); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsOnGround); \
	DECLARE_FUNCTION(execIsAirborne); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsCrouching);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMoverComponent(); \
	friend struct Z_Construct_UClass_UCharacterMoverComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMoverComponent, UMoverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterMoverComponent(UCharacterMoverComponent&&); \
	UCharacterMoverComponent(const UCharacterMoverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterMoverComponent) \
	NO_API virtual ~UCharacterMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UCharacterMoverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
