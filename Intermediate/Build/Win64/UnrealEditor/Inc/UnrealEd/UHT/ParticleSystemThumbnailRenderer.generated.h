// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/ParticleSystemThumbnailRenderer.h"

#ifdef UNREALED_ParticleSystemThumbnailRenderer_generated_h
#error "ParticleSystemThumbnailRenderer.generated.h already included, missing '#pragma once' in ParticleSystemThumbnailRenderer.h"
#endif
#define UNREALED_ParticleSystemThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UParticleSystemThumbnailRenderer *****************************************
struct Z_Construct_UClass_UParticleSystemThumbnailRenderer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UParticleSystemThumbnailRenderer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UParticleSystemThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UParticleSystemThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleSystemThumbnailRenderer, UTextureThumbnailRenderer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UParticleSystemThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UParticleSystemThumbnailRenderer) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemThumbnailRenderer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleSystemThumbnailRenderer(UParticleSystemThumbnailRenderer&&) = delete; \
	UParticleSystemThumbnailRenderer(const UParticleSystemThumbnailRenderer&) = delete; \
	NO_API virtual ~UParticleSystemThumbnailRenderer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleSystemThumbnailRenderer;

// ********** End Class UParticleSystemThumbnailRenderer *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ParticleSystemThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
