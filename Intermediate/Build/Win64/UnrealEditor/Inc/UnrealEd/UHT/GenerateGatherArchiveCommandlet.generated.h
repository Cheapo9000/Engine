// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GenerateGatherArchiveCommandlet.h"

#ifdef UNREALED_GenerateGatherArchiveCommandlet_generated_h
#error "GenerateGatherArchiveCommandlet.generated.h already included, missing '#pragma once' in GenerateGatherArchiveCommandlet.h"
#endif
#define UNREALED_GenerateGatherArchiveCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenerateGatherArchiveCommandlet *****************************************
struct Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherArchiveCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateGatherArchiveCommandlet(); \
	friend struct ::Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGenerateGatherArchiveCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenerateGatherArchiveCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGenerateGatherArchiveCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGenerateGatherArchiveCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateGatherArchiveCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateGatherArchiveCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateGatherArchiveCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateGatherArchiveCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenerateGatherArchiveCommandlet(UGenerateGatherArchiveCommandlet&&) = delete; \
	UGenerateGatherArchiveCommandlet(const UGenerateGatherArchiveCommandlet&) = delete; \
	NO_API virtual ~UGenerateGatherArchiveCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenerateGatherArchiveCommandlet;

// ********** End Class UGenerateGatherArchiveCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
