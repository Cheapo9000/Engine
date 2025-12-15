// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Parameter/ParticleModuleParameterBase.h"

#ifdef ENGINE_ParticleModuleParameterBase_generated_h
#error "ParticleModuleParameterBase.generated.h already included, missing '#pragma once' in ParticleModuleParameterBase.h"
#endif
#define ENGINE_ParticleModuleParameterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleParameterBase *********************************************
struct Z_Construct_UClass_UParticleModuleParameterBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleParameterBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleParameterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleParameterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleParameterBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleParameterBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleParameterBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleParameterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleParameterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleParameterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleParameterBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleParameterBase(UParticleModuleParameterBase&&) = delete; \
	UParticleModuleParameterBase(const UParticleModuleParameterBase&) = delete; \
	NO_API virtual ~UParticleModuleParameterBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleParameterBase;

// ********** End Class UParticleModuleParameterBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
