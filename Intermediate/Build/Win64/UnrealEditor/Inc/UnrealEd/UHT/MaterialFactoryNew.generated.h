// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialFactoryNew.h"

#ifdef UNREALED_MaterialFactoryNew_generated_h
#error "MaterialFactoryNew.generated.h already included, missing '#pragma once' in MaterialFactoryNew.h"
#endif
#define UNREALED_MaterialFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFactoryNew ******************************************************
struct Z_Construct_UClass_UMaterialFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMaterialFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFactoryNew(UMaterialFactoryNew&&) = delete; \
	UMaterialFactoryNew(const UMaterialFactoryNew&) = delete; \
	UNREALED_API virtual ~UMaterialFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFactoryNew;

// ********** End Class UMaterialFactoryNew ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
