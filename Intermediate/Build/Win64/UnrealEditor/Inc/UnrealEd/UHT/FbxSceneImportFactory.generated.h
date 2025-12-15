// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSceneImportFactory.h"

#ifdef UNREALED_FbxSceneImportFactory_generated_h
#error "FbxSceneImportFactory.generated.h already included, missing '#pragma once' in FbxSceneImportFactory.h"
#endif
#define UNREALED_FbxSceneImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxSceneImportFactory ***************************************************
struct Z_Construct_UClass_UFbxSceneImportFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_347_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportFactory(); \
	friend struct ::Z_Construct_UClass_UFbxSceneImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxSceneImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxSceneImportFactory, USceneImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxSceneImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UFbxSceneImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_347_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxSceneImportFactory(UFbxSceneImportFactory&&) = delete; \
	UFbxSceneImportFactory(const UFbxSceneImportFactory&) = delete; \
	UNREALED_API virtual ~UFbxSceneImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_344_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_347_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_347_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_347_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxSceneImportFactory;

// ********** End Class UFbxSceneImportFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
