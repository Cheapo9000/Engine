// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CurveImportFactory.h"

#ifdef UNREALED_CurveImportFactory_generated_h
#error "CurveImportFactory.generated.h already included, missing '#pragma once' in CurveImportFactory.h"
#endif
#define UNREALED_CurveImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveImportFactory ******************************************************
struct Z_Construct_UClass_UCurveImportFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCurveImportFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCurveImportFactory(); \
	friend struct ::Z_Construct_UClass_UCurveImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCurveImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCurveImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UCurveImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveImportFactory(UCurveImportFactory&&) = delete; \
	UCurveImportFactory(const UCurveImportFactory&) = delete; \
	NO_API virtual ~UCurveImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveImportFactory;

// ********** End Class UCurveImportFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
