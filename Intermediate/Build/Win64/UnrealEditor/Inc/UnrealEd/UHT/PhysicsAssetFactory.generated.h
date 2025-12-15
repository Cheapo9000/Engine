// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PhysicsAssetFactory.h"

#ifdef UNREALED_PhysicsAssetFactory_generated_h
#error "PhysicsAssetFactory.generated.h already included, missing '#pragma once' in PhysicsAssetFactory.h"
#endif
#define UNREALED_PhysicsAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetFactory *****************************************************
struct Z_Construct_UClass_UPhysicsAssetFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetFactory(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPhysicsAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPhysicsAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicsAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicsAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetFactory(UPhysicsAssetFactory&&) = delete; \
	UPhysicsAssetFactory(const UPhysicsAssetFactory&) = delete; \
	UNREALED_API virtual ~UPhysicsAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetFactory;

// ********** End Class UPhysicsAssetFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
