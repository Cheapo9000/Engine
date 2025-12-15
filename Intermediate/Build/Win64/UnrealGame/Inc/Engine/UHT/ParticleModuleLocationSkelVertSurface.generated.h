// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationSkelVertSurface.h"

#ifdef ENGINE_ParticleModuleLocationSkelVertSurface_generated_h
#error "ParticleModuleLocationSkelVertSurface.generated.h already included, missing '#pragma once' in ParticleModuleLocationSkelVertSurface.h"
#endif
#define ENGINE_ParticleModuleLocationSkelVertSurface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleLocationSkelVertSurface ***********************************
struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationSkelVertSurface(); \
	friend struct ::Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleLocationSkelVertSurface, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleLocationSkelVertSurface)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleLocationSkelVertSurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationSkelVertSurface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleLocationSkelVertSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationSkelVertSurface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleLocationSkelVertSurface(UParticleModuleLocationSkelVertSurface&&) = delete; \
	UParticleModuleLocationSkelVertSurface(const UParticleModuleLocationSkelVertSurface&) = delete; \
	ENGINE_API virtual ~UParticleModuleLocationSkelVertSurface();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleLocationSkelVertSurface;

// ********** End Class UParticleModuleLocationSkelVertSurface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h

// ********** Begin Enum ELocationSkelVertSurfaceSource ********************************************
#define FOREACH_ENUM_ELOCATIONSKELVERTSURFACESOURCE(op) \
	op(VERTSURFACESOURCE_Vert) \
	op(VERTSURFACESOURCE_Surface) 

enum ELocationSkelVertSurfaceSource : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocationSkelVertSurfaceSource>();
// ********** End Enum ELocationSkelVertSurfaceSource **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
