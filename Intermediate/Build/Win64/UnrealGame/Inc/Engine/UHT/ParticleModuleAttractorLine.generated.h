// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Attractor/ParticleModuleAttractorLine.h"

#ifdef ENGINE_ParticleModuleAttractorLine_generated_h
#error "ParticleModuleAttractorLine.generated.h already included, missing '#pragma once' in ParticleModuleAttractorLine.h"
#endif
#define ENGINE_ParticleModuleAttractorLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleAttractorLine *********************************************
struct Z_Construct_UClass_UParticleModuleAttractorLine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorLine(); \
	friend struct ::Z_Construct_UClass_UParticleModuleAttractorLine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleAttractorLine, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleAttractorLine)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorLine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorLine); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleAttractorLine(UParticleModuleAttractorLine&&) = delete; \
	UParticleModuleAttractorLine(const UParticleModuleAttractorLine&) = delete; \
	ENGINE_API virtual ~UParticleModuleAttractorLine();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleAttractorLine;

// ********** End Class UParticleModuleAttractorLine ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
