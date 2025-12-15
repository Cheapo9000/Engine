// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PhysicalMaterialMaskFactory.h"

#ifdef UNREALED_PhysicalMaterialMaskFactory_generated_h
#error "PhysicalMaterialMaskFactory.generated.h already included, missing '#pragma once' in PhysicalMaterialMaskFactory.h"
#endif
#define UNREALED_PhysicalMaterialMaskFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicalMaterialMaskFactory *********************************************
struct Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialMaskFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalMaterialMaskFactory(); \
	friend struct ::Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPhysicalMaterialMaskFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicalMaterialMaskFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPhysicalMaterialMaskFactory_NoRegister) \
	DECLARE_SERIALIZER(UPhysicalMaterialMaskFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicalMaterialMaskFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterialMaskFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicalMaterialMaskFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterialMaskFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicalMaterialMaskFactory(UPhysicalMaterialMaskFactory&&) = delete; \
	UPhysicalMaterialMaskFactory(const UPhysicalMaterialMaskFactory&) = delete; \
	UNREALED_API virtual ~UPhysicalMaterialMaskFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicalMaterialMaskFactory;

// ********** End Class UPhysicalMaterialMaskFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
