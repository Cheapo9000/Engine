// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleSystemReplay.h"

#ifdef ENGINE_ParticleSystemReplay_generated_h
#error "ParticleSystemReplay.generated.h already included, missing '#pragma once' in ParticleSystemReplay.h"
#endif
#define ENGINE_ParticleSystemReplay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleEmitterReplayFrame ***************************************
struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleEmitterReplayFrame;
// ********** End ScriptStruct FParticleEmitterReplayFrame *****************************************

// ********** Begin ScriptStruct FParticleSystemReplayFrame ****************************************
struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleSystemReplayFrame;
// ********** End ScriptStruct FParticleSystemReplayFrame ******************************************

// ********** Begin Class UParticleSystemReplay ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay, NO_API)


struct Z_Construct_UClass_UParticleSystemReplay_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend struct ::Z_Construct_UClass_UParticleSystemReplay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleSystemReplay_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleSystemReplay_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystemReplay(UParticleSystemReplay&&) = delete; \
	UParticleSystemReplay(const UParticleSystemReplay&) = delete; \
	NO_API virtual ~UParticleSystemReplay();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystemReplay;

// ********** End Class UParticleSystemReplay ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
