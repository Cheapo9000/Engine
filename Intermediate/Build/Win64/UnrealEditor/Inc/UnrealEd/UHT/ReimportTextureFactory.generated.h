// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportTextureFactory.h"

#ifdef UNREALED_ReimportTextureFactory_generated_h
#error "ReimportTextureFactory.generated.h already included, missing '#pragma once' in ReimportTextureFactory.h"
#endif
#define UNREALED_ReimportTextureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportTextureFactory **************************************************
struct Z_Construct_UClass_UReimportTextureFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportTextureFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUReimportTextureFactory(); \
	friend struct ::Z_Construct_UClass_UReimportTextureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportTextureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportTextureFactory, UTextureFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportTextureFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportTextureFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportTextureFactory(UReimportTextureFactory&&) = delete; \
	UReimportTextureFactory(const UReimportTextureFactory&) = delete; \
	NO_API virtual ~UReimportTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportTextureFactory;

// ********** End Class UReimportTextureFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportTextureFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
