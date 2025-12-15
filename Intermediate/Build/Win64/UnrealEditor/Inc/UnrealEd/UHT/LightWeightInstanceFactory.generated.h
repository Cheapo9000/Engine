// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/LightWeightInstanceFactory.h"

#ifdef UNREALED_LightWeightInstanceFactory_generated_h
#error "LightWeightInstanceFactory.generated.h already included, missing '#pragma once' in LightWeightInstanceFactory.h"
#endif
#define UNREALED_LightWeightInstanceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightWeightInstanceFactory **********************************************
struct Z_Construct_UClass_ULightWeightInstanceFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULightWeightInstanceFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULightWeightInstanceFactory(); \
	friend struct ::Z_Construct_UClass_ULightWeightInstanceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULightWeightInstanceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightWeightInstanceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULightWeightInstanceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULightWeightInstanceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API ULightWeightInstanceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightWeightInstanceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULightWeightInstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightWeightInstanceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightWeightInstanceFactory(ULightWeightInstanceFactory&&) = delete; \
	ULightWeightInstanceFactory(const ULightWeightInstanceFactory&) = delete; \
	UNREALED_API virtual ~ULightWeightInstanceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightWeightInstanceFactory;

// ********** End Class ULightWeightInstanceFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
