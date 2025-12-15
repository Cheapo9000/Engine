// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/WorldFactory.h"

#ifdef UNREALED_WorldFactory_generated_h
#error "WorldFactory.generated.h already included, missing '#pragma once' in WorldFactory.h"
#endif
#define UNREALED_WorldFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldFactory ************************************************************
struct Z_Construct_UClass_UWorldFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWorldFactory(); \
	friend struct ::Z_Construct_UClass_UWorldFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldFactory_NoRegister) \
	DECLARE_SERIALIZER(UWorldFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldFactory(UWorldFactory&&) = delete; \
	UWorldFactory(const UWorldFactory&) = delete; \
	UNREALED_API virtual ~UWorldFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldFactory;

// ********** End Class UWorldFactory **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_WorldFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
