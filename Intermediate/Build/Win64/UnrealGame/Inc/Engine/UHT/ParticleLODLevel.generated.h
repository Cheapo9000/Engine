// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleLODLevel.h"

#ifdef ENGINE_ParticleLODLevel_generated_h
#error "ParticleLODLevel.generated.h already included, missing '#pragma once' in ParticleLODLevel.h"
#endif
#define ENGINE_ParticleLODLevel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleLODLevel ********************************************************
struct Z_Construct_UClass_UParticleLODLevel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUParticleLODLevel(); \
	friend struct ::Z_Construct_UClass_UParticleLODLevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleLODLevel_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleLODLevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleLODLevel_NoRegister) \
	DECLARE_SERIALIZER(UParticleLODLevel)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleLODLevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleLODLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleLODLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleLODLevel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleLODLevel(UParticleLODLevel&&) = delete; \
	UParticleLODLevel(const UParticleLODLevel&) = delete; \
	ENGINE_API virtual ~UParticleLODLevel();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleLODLevel;

// ********** End Class UParticleLODLevel **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
