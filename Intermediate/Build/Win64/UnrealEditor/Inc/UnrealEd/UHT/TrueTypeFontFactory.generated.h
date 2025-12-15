// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TrueTypeFontFactory.h"

#ifdef UNREALED_TrueTypeFontFactory_generated_h
#error "TrueTypeFontFactory.generated.h already included, missing '#pragma once' in TrueTypeFontFactory.h"
#endif
#define UNREALED_TrueTypeFontFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTrueTypeFontFactory *****************************************************
struct Z_Construct_UClass_UTrueTypeFontFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTrueTypeFontFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTrueTypeFontFactory(); \
	friend struct ::Z_Construct_UClass_UTrueTypeFontFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTrueTypeFontFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrueTypeFontFactory, UTextureFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTrueTypeFontFactory_NoRegister) \
	DECLARE_SERIALIZER(UTrueTypeFontFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTrueTypeFontFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrueTypeFontFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTrueTypeFontFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrueTypeFontFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrueTypeFontFactory(UTrueTypeFontFactory&&) = delete; \
	UTrueTypeFontFactory(const UTrueTypeFontFactory&) = delete; \
	UNREALED_API virtual ~UTrueTypeFontFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrueTypeFontFactory;

// ********** End Class UTrueTypeFontFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
