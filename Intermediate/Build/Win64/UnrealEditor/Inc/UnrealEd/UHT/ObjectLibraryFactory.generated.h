// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ObjectLibraryFactory.h"

#ifdef UNREALED_ObjectLibraryFactory_generated_h
#error "ObjectLibraryFactory.generated.h already included, missing '#pragma once' in ObjectLibraryFactory.h"
#endif
#define UNREALED_ObjectLibraryFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectLibraryFactory ****************************************************
struct Z_Construct_UClass_UObjectLibraryFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UObjectLibraryFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectLibraryFactory(); \
	friend struct ::Z_Construct_UClass_UObjectLibraryFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UObjectLibraryFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectLibraryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UObjectLibraryFactory_NoRegister) \
	DECLARE_SERIALIZER(UObjectLibraryFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UObjectLibraryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibraryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UObjectLibraryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibraryFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectLibraryFactory(UObjectLibraryFactory&&) = delete; \
	UObjectLibraryFactory(const UObjectLibraryFactory&) = delete; \
	UNREALED_API virtual ~UObjectLibraryFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectLibraryFactory;

// ********** End Class UObjectLibraryFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ObjectLibraryFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
