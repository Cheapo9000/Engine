// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/EnumFactory.h"

#ifdef UNREALED_EnumFactory_generated_h
#error "EnumFactory.generated.h already included, missing '#pragma once' in EnumFactory.h"
#endif
#define UNREALED_EnumFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnumFactory *************************************************************
struct Z_Construct_UClass_UEnumFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEnumFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEnumFactory(); \
	friend struct ::Z_Construct_UClass_UEnumFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEnumFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnumFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEnumFactory_NoRegister) \
	DECLARE_SERIALIZER(UEnumFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEnumFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEnumFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnumFactory(UEnumFactory&&) = delete; \
	UEnumFactory(const UEnumFactory&) = delete; \
	UNREALED_API virtual ~UEnumFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnumFactory;

// ********** End Class UEnumFactory ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_EnumFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
