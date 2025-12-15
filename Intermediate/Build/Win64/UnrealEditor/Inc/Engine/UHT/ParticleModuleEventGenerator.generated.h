// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventGenerator.h"

#ifdef ENGINE_ParticleModuleEventGenerator_generated_h
#error "ParticleModuleEventGenerator.generated.h already included, missing '#pragma once' in ParticleModuleEventGenerator.h"
#endif
#define ENGINE_ParticleModuleEventGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParticleEvent_GenerateInfo ***************************************
struct Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParticleEvent_GenerateInfo;
// ********** End ScriptStruct FParticleEvent_GenerateInfo *****************************************

// ********** Begin Class UParticleModuleEventGenerator ********************************************
struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventGenerator(); \
	friend struct ::Z_Construct_UClass_UParticleModuleEventGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleEventGenerator, UParticleModuleEventBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleEventGenerator)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleEventGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleEventGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventGenerator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleEventGenerator(UParticleModuleEventGenerator&&) = delete; \
	UParticleModuleEventGenerator(const UParticleModuleEventGenerator&) = delete; \
	ENGINE_API virtual ~UParticleModuleEventGenerator();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleEventGenerator;

// ********** End Class UParticleModuleEventGenerator **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
