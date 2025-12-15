// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ParticleSystemFactoryNew.h"

#ifdef UNREALED_ParticleSystemFactoryNew_generated_h
#error "ParticleSystemFactoryNew.generated.h already included, missing '#pragma once' in ParticleSystemFactoryNew.h"
#endif
#define UNREALED_ParticleSystemFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleSystemFactoryNew ************************************************
struct Z_Construct_UClass_UParticleSystemFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UParticleSystemFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemFactoryNew(); \
	friend struct ::Z_Construct_UClass_UParticleSystemFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UParticleSystemFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystemFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UParticleSystemFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystemFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UParticleSystemFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UParticleSystemFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystemFactoryNew(UParticleSystemFactoryNew&&) = delete; \
	UParticleSystemFactoryNew(const UParticleSystemFactoryNew&) = delete; \
	UNREALED_API virtual ~UParticleSystemFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystemFactoryNew;

// ********** End Class UParticleSystemFactoryNew **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ParticleSystemFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
