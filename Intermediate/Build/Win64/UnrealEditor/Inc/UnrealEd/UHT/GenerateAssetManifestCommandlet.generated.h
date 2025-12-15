// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GenerateAssetManifestCommandlet.h"

#ifdef UNREALED_GenerateAssetManifestCommandlet_generated_h
#error "GenerateAssetManifestCommandlet.generated.h already included, missing '#pragma once' in GenerateAssetManifestCommandlet.h"
#endif
#define UNREALED_GenerateAssetManifestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenerateAssetManifestCommandlet *****************************************
struct Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateAssetManifestCommandlet(); \
	friend struct ::Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateAssetManifestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGenerateAssetManifestCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateAssetManifestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateAssetManifestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateAssetManifestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateAssetManifestCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateAssetManifestCommandlet(UGenerateAssetManifestCommandlet&&) = delete; \
	UGenerateAssetManifestCommandlet(const UGenerateAssetManifestCommandlet&) = delete; \
	NO_API virtual ~UGenerateAssetManifestCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateAssetManifestCommandlet;

// ********** End Class UGenerateAssetManifestCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
