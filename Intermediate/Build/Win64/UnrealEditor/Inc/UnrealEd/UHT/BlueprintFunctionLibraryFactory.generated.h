// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BlueprintFunctionLibraryFactory.h"

#ifdef UNREALED_BlueprintFunctionLibraryFactory_generated_h
#error "BlueprintFunctionLibraryFactory.generated.h already included, missing '#pragma once' in BlueprintFunctionLibraryFactory.h"
#endif
#define UNREALED_BlueprintFunctionLibraryFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintFunctionLibraryFactory *****************************************
struct Z_Construct_UClass_UBlueprintFunctionLibraryFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFunctionLibraryFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionLibraryFactory(); \
	friend struct ::Z_Construct_UClass_UBlueprintFunctionLibraryFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintFunctionLibraryFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintFunctionLibraryFactory, UBlueprintFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintFunctionLibraryFactory_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintFunctionLibraryFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintFunctionLibraryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionLibraryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintFunctionLibraryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionLibraryFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintFunctionLibraryFactory(UBlueprintFunctionLibraryFactory&&) = delete; \
	UBlueprintFunctionLibraryFactory(const UBlueprintFunctionLibraryFactory&) = delete; \
	UNREALED_API virtual ~UBlueprintFunctionLibraryFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintFunctionLibraryFactory;

// ********** End Class UBlueprintFunctionLibraryFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFunctionLibraryFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
