// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ParticleSystemAuditCommandlet.h"

#ifdef UNREALED_ParticleSystemAuditCommandlet_generated_h
#error "ParticleSystemAuditCommandlet.generated.h already included, missing '#pragma once' in ParticleSystemAuditCommandlet.h"
#endif
#define UNREALED_ParticleSystemAuditCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleSystemAuditCommandlet *******************************************
struct Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemAuditCommandlet(); \
	friend struct ::Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystemAuditCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystemAuditCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemAuditCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemAuditCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemAuditCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemAuditCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystemAuditCommandlet(UParticleSystemAuditCommandlet&&) = delete; \
	UParticleSystemAuditCommandlet(const UParticleSystemAuditCommandlet&) = delete; \
	NO_API virtual ~UParticleSystemAuditCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystemAuditCommandlet;

// ********** End Class UParticleSystemAuditCommandlet *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ParticleSystemAuditCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
