// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Color/ParticleModuleColor.h"

#ifdef ENGINE_ParticleModuleColor_generated_h
#error "ParticleModuleColor.generated.h already included, missing '#pragma once' in ParticleModuleColor.h"
#endif
#define ENGINE_ParticleModuleColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleModuleColor *****************************************************
struct Z_Construct_UClass_UParticleModuleColor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleColor(); \
	friend struct ::Z_Construct_UClass_UParticleModuleColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleColor, UParticleModuleColorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleColor_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleColor(UParticleModuleColor&&) = delete; \
	UParticleModuleColor(const UParticleModuleColor&) = delete; \
	ENGINE_API virtual ~UParticleModuleColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleColor;

// ********** End Class UParticleModuleColor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
