// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GenerateBlueprintAPICommandlet.h"

#ifdef UNREALED_GenerateBlueprintAPICommandlet_generated_h
#error "GenerateBlueprintAPICommandlet.generated.h already included, missing '#pragma once' in GenerateBlueprintAPICommandlet.h"
#endif
#define UNREALED_GenerateBlueprintAPICommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenerateBlueprintAPICommandlet ******************************************
struct Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGenerateBlueprintAPICommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateBlueprintAPICommandlet(); \
	friend struct ::Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGenerateBlueprintAPICommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateBlueprintAPICommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGenerateBlueprintAPICommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGenerateBlueprintAPICommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateBlueprintAPICommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateBlueprintAPICommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateBlueprintAPICommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateBlueprintAPICommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateBlueprintAPICommandlet(UGenerateBlueprintAPICommandlet&&) = delete; \
	UGenerateBlueprintAPICommandlet(const UGenerateBlueprintAPICommandlet&) = delete; \
	NO_API virtual ~UGenerateBlueprintAPICommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateBlueprintAPICommandlet;

// ********** End Class UGenerateBlueprintAPICommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateBlueprintAPICommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
