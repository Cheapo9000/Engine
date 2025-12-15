// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimMontageFactory.h"

#ifdef UNREALED_AnimMontageFactory_generated_h
#error "AnimMontageFactory.generated.h already included, missing '#pragma once' in AnimMontageFactory.h"
#endif
#define UNREALED_AnimMontageFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimMontageFactory ******************************************************
struct Z_Construct_UClass_UAnimMontageFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimMontageFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontageFactory(); \
	friend struct ::Z_Construct_UClass_UAnimMontageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimMontageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimMontageFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimMontageFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimMontageFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimMontageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontageFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimMontageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontageFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimMontageFactory(UAnimMontageFactory&&) = delete; \
	UAnimMontageFactory(const UAnimMontageFactory&) = delete; \
	UNREALED_API virtual ~UAnimMontageFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimMontageFactory;

// ********** End Class UAnimMontageFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimMontageFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
