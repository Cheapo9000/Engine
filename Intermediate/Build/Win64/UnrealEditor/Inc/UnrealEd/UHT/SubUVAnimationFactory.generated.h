// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SubUVAnimationFactory.h"

#ifdef UNREALED_SubUVAnimationFactory_generated_h
#error "SubUVAnimationFactory.generated.h already included, missing '#pragma once' in SubUVAnimationFactory.h"
#endif
#define UNREALED_SubUVAnimationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubUVAnimationFactory ***************************************************
struct Z_Construct_UClass_USubUVAnimationFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_USubUVAnimationFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSubUVAnimationFactory(); \
	friend struct ::Z_Construct_UClass_USubUVAnimationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USubUVAnimationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USubUVAnimationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USubUVAnimationFactory_NoRegister) \
	DECLARE_SERIALIZER(USubUVAnimationFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USubUVAnimationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubUVAnimationFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USubUVAnimationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubUVAnimationFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubUVAnimationFactory(USubUVAnimationFactory&&) = delete; \
	USubUVAnimationFactory(const USubUVAnimationFactory&) = delete; \
	UNREALED_API virtual ~USubUVAnimationFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubUVAnimationFactory;

// ********** End Class USubUVAnimationFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
