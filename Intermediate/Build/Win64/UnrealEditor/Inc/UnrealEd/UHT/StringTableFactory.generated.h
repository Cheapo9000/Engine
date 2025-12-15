// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/StringTableFactory.h"

#ifdef UNREALED_StringTableFactory_generated_h
#error "StringTableFactory.generated.h already included, missing '#pragma once' in StringTableFactory.h"
#endif
#define UNREALED_StringTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStringTableFactory ******************************************************
struct Z_Construct_UClass_UStringTableFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStringTableFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStringTableFactory(); \
	friend struct ::Z_Construct_UClass_UStringTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStringTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UStringTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStringTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UStringTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UStringTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UStringTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTableFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStringTableFactory(UStringTableFactory&&) = delete; \
	UStringTableFactory(const UStringTableFactory&) = delete; \
	UNREALED_API virtual ~UStringTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStringTableFactory;

// ********** End Class UStringTableFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_StringTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
