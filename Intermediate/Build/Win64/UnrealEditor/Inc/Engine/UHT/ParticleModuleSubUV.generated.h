// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/SubUV/ParticleModuleSubUV.h"

#ifdef ENGINE_ParticleModuleSubUV_generated_h
#error "ParticleModuleSubUV.generated.h already included, missing '#pragma once' in ParticleModuleSubUV.h"
#endif
#define ENGINE_ParticleModuleSubUV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleSubUV *****************************************************
struct Z_Construct_UClass_UParticleModuleSubUV_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSubUV(); \
	friend struct ::Z_Construct_UClass_UParticleModuleSubUV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleSubUV_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleSubUV, UParticleModuleSubUVBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleSubUV_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleSubUV)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleSubUV(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSubUV) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleSubUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSubUV); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleSubUV(UParticleModuleSubUV&&) = delete; \
	UParticleModuleSubUV(const UParticleModuleSubUV&) = delete; \
	ENGINE_API virtual ~UParticleModuleSubUV();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleSubUV;

// ********** End Class UParticleModuleSubUV *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
