// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Size/ParticleModuleSizeBase.h"

#ifdef ENGINE_ParticleModuleSizeBase_generated_h
#error "ParticleModuleSizeBase.generated.h already included, missing '#pragma once' in ParticleModuleSizeBase.h"
#endif
#define ENGINE_ParticleModuleSizeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleSizeBase **************************************************
struct Z_Construct_UClass_UParticleModuleSizeBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleSizeBase(); \
	friend struct ::Z_Construct_UClass_UParticleModuleSizeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleSizeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleSizeBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleSizeBase_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleSizeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleSizeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleSizeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleSizeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleSizeBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleSizeBase(UParticleModuleSizeBase&&) = delete; \
	UParticleModuleSizeBase(const UParticleModuleSizeBase&) = delete; \
	NO_API virtual ~UParticleModuleSizeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleSizeBase;

// ********** End Class UParticleModuleSizeBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
