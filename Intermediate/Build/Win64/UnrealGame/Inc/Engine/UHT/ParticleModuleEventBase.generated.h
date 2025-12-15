// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Event/ParticleModuleEventBase.h"

#ifdef ENGINE_ParticleModuleEventBase_generated_h
#error "ParticleModuleEventBase.generated.h already included, missing '#pragma once' in ParticleModuleEventBase.h"
#endif
#define ENGINE_ParticleModuleEventBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleEventBase *************************************************
struct Z_Construct_UClass_UParticleModuleEventBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleEventBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleEventBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleEventBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleEventBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleEventBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleEventBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleEventBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleEventBase(UParticleModuleEventBase&&) = delete; \
	UParticleModuleEventBase(const UParticleModuleEventBase&) = delete; \
	NO_API virtual ~UParticleModuleEventBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleEventBase;

// ********** End Class UParticleModuleEventBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
