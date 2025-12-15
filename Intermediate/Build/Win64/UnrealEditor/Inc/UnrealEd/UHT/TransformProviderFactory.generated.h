// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TransformProviderFactory.h"

#ifdef UNREALED_TransformProviderFactory_generated_h
#error "TransformProviderFactory.generated.h already included, missing '#pragma once' in TransformProviderFactory.h"
#endif
#define UNREALED_TransformProviderFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformProviderDataFactory ********************************************
struct Z_Construct_UClass_UTransformProviderDataFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTransformProviderDataFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTransformProviderDataFactory(); \
	friend struct ::Z_Construct_UClass_UTransformProviderDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTransformProviderDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformProviderDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTransformProviderDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UTransformProviderDataFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTransformProviderDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformProviderDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTransformProviderDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformProviderDataFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformProviderDataFactory(UTransformProviderDataFactory&&) = delete; \
	UTransformProviderDataFactory(const UTransformProviderDataFactory&) = delete; \
	UNREALED_API virtual ~UTransformProviderDataFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformProviderDataFactory;

// ********** End Class UTransformProviderDataFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TransformProviderFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
