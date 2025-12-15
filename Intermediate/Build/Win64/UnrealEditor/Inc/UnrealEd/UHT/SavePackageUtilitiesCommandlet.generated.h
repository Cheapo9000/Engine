// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/SavePackageUtilitiesCommandlet.h"

#ifdef UNREALED_SavePackageUtilitiesCommandlet_generated_h
#error "SavePackageUtilitiesCommandlet.generated.h already included, missing '#pragma once' in SavePackageUtilitiesCommandlet.h"
#endif
#define UNREALED_SavePackageUtilitiesCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USavePackageUtilitiesCommandlet ******************************************
struct Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_USavePackageUtilitiesCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSavePackageUtilitiesCommandlet(); \
	friend struct ::Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USavePackageUtilitiesCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(USavePackageUtilitiesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USavePackageUtilitiesCommandlet_NoRegister) \
	DECLARE_SERIALIZER(USavePackageUtilitiesCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USavePackageUtilitiesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USavePackageUtilitiesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USavePackageUtilitiesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USavePackageUtilitiesCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USavePackageUtilitiesCommandlet(USavePackageUtilitiesCommandlet&&) = delete; \
	USavePackageUtilitiesCommandlet(const USavePackageUtilitiesCommandlet&) = delete; \
	NO_API virtual ~USavePackageUtilitiesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USavePackageUtilitiesCommandlet;

// ********** End Class USavePackageUtilitiesCommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
