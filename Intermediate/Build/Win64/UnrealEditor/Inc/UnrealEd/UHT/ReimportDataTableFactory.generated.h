// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportDataTableFactory.h"

#ifdef UNREALED_ReimportDataTableFactory_generated_h
#error "ReimportDataTableFactory.generated.h already included, missing '#pragma once' in ReimportDataTableFactory.h"
#endif
#define UNREALED_ReimportDataTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportDataTableFactory ************************************************
struct Z_Construct_UClass_UReimportDataTableFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportDataTableFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReimportDataTableFactory(); \
	friend struct ::Z_Construct_UClass_UReimportDataTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportDataTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportDataTableFactory, UCSVImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportDataTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportDataTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UReimportDataTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportDataTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UReimportDataTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportDataTableFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportDataTableFactory(UReimportDataTableFactory&&) = delete; \
	UReimportDataTableFactory(const UReimportDataTableFactory&) = delete; \
	UNREALED_API virtual ~UReimportDataTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportDataTableFactory;

// ********** End Class UReimportDataTableFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportDataTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
