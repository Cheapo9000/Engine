// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimCompositeFactory.h"

#ifdef UNREALED_AnimCompositeFactory_generated_h
#error "AnimCompositeFactory.generated.h already included, missing '#pragma once' in AnimCompositeFactory.h"
#endif
#define UNREALED_AnimCompositeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimCompositeFactory ****************************************************
struct Z_Construct_UClass_UAnimCompositeFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimCompositeFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompositeFactory(); \
	friend struct ::Z_Construct_UClass_UAnimCompositeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimCompositeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimCompositeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimCompositeFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimCompositeFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimCompositeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompositeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimCompositeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompositeFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimCompositeFactory(UAnimCompositeFactory&&) = delete; \
	UAnimCompositeFactory(const UAnimCompositeFactory&) = delete; \
	UNREALED_API virtual ~UAnimCompositeFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimCompositeFactory;

// ********** End Class UAnimCompositeFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimCompositeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
