// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialParameterCollectionFactoryNew.h"

#ifdef UNREALED_MaterialParameterCollectionFactoryNew_generated_h
#error "MaterialParameterCollectionFactoryNew.generated.h already included, missing '#pragma once' in MaterialParameterCollectionFactoryNew.h"
#endif
#define UNREALED_MaterialParameterCollectionFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialParameterCollectionFactoryNew ***********************************
struct Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollectionFactoryNew(); \
	friend struct ::Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialParameterCollectionFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UMaterialParameterCollectionFactoryNew)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialParameterCollectionFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollectionFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialParameterCollectionFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollectionFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialParameterCollectionFactoryNew(UMaterialParameterCollectionFactoryNew&&) = delete; \
	UMaterialParameterCollectionFactoryNew(const UMaterialParameterCollectionFactoryNew&) = delete; \
	UNREALED_API virtual ~UMaterialParameterCollectionFactoryNew();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialParameterCollectionFactoryNew;

// ********** End Class UMaterialParameterCollectionFactoryNew *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
