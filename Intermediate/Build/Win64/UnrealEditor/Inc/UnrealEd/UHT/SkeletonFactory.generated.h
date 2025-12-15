// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SkeletonFactory.h"

#ifdef UNREALED_SkeletonFactory_generated_h
#error "SkeletonFactory.generated.h already included, missing '#pragma once' in SkeletonFactory.h"
#endif
#define UNREALED_SkeletonFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonFactory *********************************************************
struct Z_Construct_UClass_USkeletonFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_USkeletonFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletonFactory(); \
	friend struct ::Z_Construct_UClass_USkeletonFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USkeletonFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USkeletonFactory_NoRegister) \
	DECLARE_SERIALIZER(USkeletonFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletonFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletonFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonFactory(USkeletonFactory&&) = delete; \
	USkeletonFactory(const USkeletonFactory&) = delete; \
	UNREALED_API virtual ~USkeletonFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonFactory;

// ********** End Class USkeletonFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
