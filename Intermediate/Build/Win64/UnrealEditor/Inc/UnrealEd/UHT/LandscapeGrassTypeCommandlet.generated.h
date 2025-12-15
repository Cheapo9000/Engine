// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/LandscapeGrassTypeCommandlet.h"

#ifdef UNREALED_LandscapeGrassTypeCommandlet_generated_h
#error "LandscapeGrassTypeCommandlet.generated.h already included, missing '#pragma once' in LandscapeGrassTypeCommandlet.h"
#endif
#define UNREALED_LandscapeGrassTypeCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeGrassTypeCommandlet ********************************************
struct Z_Construct_UClass_ULandscapeGrassTypeCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULandscapeGrassTypeCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassTypeCommandlet(); \
	friend struct ::Z_Construct_UClass_ULandscapeGrassTypeCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULandscapeGrassTypeCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeGrassTypeCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULandscapeGrassTypeCommandlet_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeGrassTypeCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeGrassTypeCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassTypeCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeGrassTypeCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassTypeCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeGrassTypeCommandlet(ULandscapeGrassTypeCommandlet&&) = delete; \
	ULandscapeGrassTypeCommandlet(const ULandscapeGrassTypeCommandlet&) = delete; \
	NO_API virtual ~ULandscapeGrassTypeCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeGrassTypeCommandlet;

// ********** End Class ULandscapeGrassTypeCommandlet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LandscapeGrassTypeCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
