// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportVectorFieldStaticFactory.h"

#ifdef UNREALED_ReimportVectorFieldStaticFactory_generated_h
#error "ReimportVectorFieldStaticFactory.generated.h already included, missing '#pragma once' in ReimportVectorFieldStaticFactory.h"
#endif
#define UNREALED_ReimportVectorFieldStaticFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportVectorFieldStaticFactory ****************************************
struct Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportVectorFieldStaticFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReimportVectorFieldStaticFactory(); \
	friend struct ::Z_Construct_UClass_UReimportVectorFieldStaticFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportVectorFieldStaticFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportVectorFieldStaticFactory, UVectorFieldStaticFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportVectorFieldStaticFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportVectorFieldStaticFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportVectorFieldStaticFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportVectorFieldStaticFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportVectorFieldStaticFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportVectorFieldStaticFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportVectorFieldStaticFactory(UReimportVectorFieldStaticFactory&&) = delete; \
	UReimportVectorFieldStaticFactory(const UReimportVectorFieldStaticFactory&) = delete; \
	NO_API virtual ~UReimportVectorFieldStaticFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportVectorFieldStaticFactory;

// ********** End Class UReimportVectorFieldStaticFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportVectorFieldStaticFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
