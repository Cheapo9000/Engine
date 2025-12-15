// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SlateBrushAssetFactory.h"

#ifdef UNREALED_SlateBrushAssetFactory_generated_h
#error "SlateBrushAssetFactory.generated.h already included, missing '#pragma once' in SlateBrushAssetFactory.h"
#endif
#define UNREALED_SlateBrushAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateBrushAssetFactory **************************************************
struct Z_Construct_UClass_USlateBrushAssetFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_USlateBrushAssetFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSlateBrushAssetFactory(); \
	friend struct ::Z_Construct_UClass_USlateBrushAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USlateBrushAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateBrushAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USlateBrushAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(USlateBrushAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USlateBrushAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateBrushAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USlateBrushAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateBrushAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateBrushAssetFactory(USlateBrushAssetFactory&&) = delete; \
	USlateBrushAssetFactory(const USlateBrushAssetFactory&) = delete; \
	UNREALED_API virtual ~USlateBrushAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateBrushAssetFactory;

// ********** End Class USlateBrushAssetFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
