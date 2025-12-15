// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventSendToGame.h"

#ifdef ENGINE_ParticleModuleEventSendToGame_generated_h
#error "ParticleModuleEventSendToGame.generated.h already included, missing '#pragma once' in ParticleModuleEventSendToGame.h"
#endif
#define ENGINE_ParticleModuleEventSendToGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleEventSendToGame *******************************************
struct Z_Construct_UClass_UParticleModuleEventSendToGame_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventSendToGame(); \
	friend struct ::Z_Construct_UClass_UParticleModuleEventSendToGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleEventSendToGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleEventSendToGame)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventSendToGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventSendToGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventSendToGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventSendToGame); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleEventSendToGame(UParticleModuleEventSendToGame&&) = delete; \
	UParticleModuleEventSendToGame(const UParticleModuleEventSendToGame&) = delete; \
	NO_API virtual ~UParticleModuleEventSendToGame();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleEventSendToGame;

// ********** End Class UParticleModuleEventSendToGame *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventSendToGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
