// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PhysicalMaterialFactoryNew.h"

#ifdef UNREALED_PhysicalMaterialFactoryNew_generated_h
#error "PhysicalMaterialFactoryNew.generated.h already included, missing '#pragma once' in PhysicalMaterialFactoryNew.h"
#endif
#define UNREALED_PhysicalMaterialFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicalMaterialFactoryNew **********************************************
struct Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicalMaterialFactoryNew(); \
	friend struct ::Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicalMaterialFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UPhysicalMaterialFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicalMaterialFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicalMaterialFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicalMaterialFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicalMaterialFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicalMaterialFactoryNew(UPhysicalMaterialFactoryNew&&) = delete; \
	UPhysicalMaterialFactoryNew(const UPhysicalMaterialFactoryNew&) = delete; \
	UNREALED_API virtual ~UPhysicalMaterialFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicalMaterialFactoryNew;

// ********** End Class UPhysicalMaterialFactoryNew ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
