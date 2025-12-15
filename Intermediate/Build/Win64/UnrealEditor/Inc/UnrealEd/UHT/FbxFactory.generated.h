// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxFactory.h"

#ifdef UNREALED_FbxFactory_generated_h
#error "FbxFactory.generated.h already included, missing '#pragma once' in FbxFactory.h"
#endif
#define UNREALED_FbxFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxFactory **************************************************************
struct Z_Construct_UClass_UFbxFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFbxFactory(); \
	friend struct ::Z_Construct_UClass_UFbxFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxFactory_NoRegister) \
	DECLARE_SERIALIZER(UFbxFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxFactory(UFbxFactory&&) = delete; \
	UFbxFactory(const UFbxFactory&) = delete; \
	UNREALED_API virtual ~UFbxFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxFactory;

// ********** End Class UFbxFactory ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
