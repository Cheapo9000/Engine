// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialInstanceConstantFactoryNew.h"

#ifdef UNREALED_MaterialInstanceConstantFactoryNew_generated_h
#error "MaterialInstanceConstantFactoryNew.generated.h already included, missing '#pragma once' in MaterialInstanceConstantFactoryNew.h"
#endif
#define UNREALED_MaterialInstanceConstantFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialInstanceConstantFactoryNew **************************************
struct Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstantFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialInstanceConstantFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMaterialInstanceConstantFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialInstanceConstantFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstantFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialInstanceConstantFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstantFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialInstanceConstantFactoryNew(UMaterialInstanceConstantFactoryNew&&) = delete; \
	UMaterialInstanceConstantFactoryNew(const UMaterialInstanceConstantFactoryNew&) = delete; \
	UNREALED_API virtual ~UMaterialInstanceConstantFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialInstanceConstantFactoryNew;

// ********** End Class UMaterialInstanceConstantFactoryNew ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
