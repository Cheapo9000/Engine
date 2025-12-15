// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportFbxStaticMeshFactory.h"

#ifdef UNREALED_ReimportFbxStaticMeshFactory_generated_h
#error "ReimportFbxStaticMeshFactory.generated.h already included, missing '#pragma once' in ReimportFbxStaticMeshFactory.h"
#endif
#define UNREALED_ReimportFbxStaticMeshFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportFbxStaticMeshFactory ********************************************
struct Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReimportFbxStaticMeshFactory(); \
	friend struct ::Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportFbxStaticMeshFactory, UFbxFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportFbxStaticMeshFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UReimportFbxStaticMeshFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportFbxStaticMeshFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UReimportFbxStaticMeshFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportFbxStaticMeshFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportFbxStaticMeshFactory(UReimportFbxStaticMeshFactory&&) = delete; \
	UReimportFbxStaticMeshFactory(const UReimportFbxStaticMeshFactory&) = delete; \
	UNREALED_API virtual ~UReimportFbxStaticMeshFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportFbxStaticMeshFactory;

// ********** End Class UReimportFbxStaticMeshFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
