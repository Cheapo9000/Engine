// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/StructureFactory.h"

#ifdef UNREALED_StructureFactory_generated_h
#error "StructureFactory.generated.h already included, missing '#pragma once' in StructureFactory.h"
#endif
#define UNREALED_StructureFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStructureFactory ********************************************************
struct Z_Construct_UClass_UStructureFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStructureFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStructureFactory(); \
	friend struct ::Z_Construct_UClass_UStructureFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStructureFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UStructureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStructureFactory_NoRegister) \
	DECLARE_SERIALIZER(UStructureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStructureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStructureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructureFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStructureFactory(UStructureFactory&&) = delete; \
	UStructureFactory(const UStructureFactory&) = delete; \
	UNREALED_API virtual ~UStructureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStructureFactory;

// ********** End Class UStructureFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StructureFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
