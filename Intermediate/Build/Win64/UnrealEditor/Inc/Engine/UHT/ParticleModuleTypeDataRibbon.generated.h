// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/TypeData/ParticleModuleTypeDataRibbon.h"

#ifdef ENGINE_ParticleModuleTypeDataRibbon_generated_h
#error "ParticleModuleTypeDataRibbon.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataRibbon.h"
#endif
#define ENGINE_ParticleModuleTypeDataRibbon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleTypeDataRibbon ********************************************
struct Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataRibbon(); \
	friend struct ::Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleTypeDataRibbon, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataRibbon)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataRibbon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataRibbon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataRibbon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataRibbon); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleTypeDataRibbon(UParticleModuleTypeDataRibbon&&) = delete; \
	UParticleModuleTypeDataRibbon(const UParticleModuleTypeDataRibbon&) = delete; \
	ENGINE_API virtual ~UParticleModuleTypeDataRibbon();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleTypeDataRibbon;

// ********** End Class UParticleModuleTypeDataRibbon **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h

// ********** Begin Enum ETrailsRenderAxisOption ***************************************************
#define FOREACH_ENUM_ETRAILSRENDERAXISOPTION(op) \
	op(Trails_CameraUp) \
	op(Trails_SourceUp) \
	op(Trails_WorldUp) 

enum ETrailsRenderAxisOption : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrailsRenderAxisOption>();
// ********** End Enum ETrailsRenderAxisOption *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
