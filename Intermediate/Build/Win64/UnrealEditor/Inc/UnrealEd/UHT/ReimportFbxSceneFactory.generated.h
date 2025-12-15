// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportFbxSceneFactory.h"

#ifdef UNREALED_ReimportFbxSceneFactory_generated_h
#error "ReimportFbxSceneFactory.generated.h already included, missing '#pragma once' in ReimportFbxSceneFactory.h"
#endif
#define UNREALED_ReimportFbxSceneFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UReimportFbxSceneFactory *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execScriptReimportHelper);


struct Z_Construct_UClass_UReimportFbxSceneFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUReimportFbxSceneFactory(); \
	friend struct ::Z_Construct_UClass_UReimportFbxSceneFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportFbxSceneFactory, UFbxSceneImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportFbxSceneFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportFbxSceneFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportFbxSceneFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportFbxSceneFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportFbxSceneFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportFbxSceneFactory(UReimportFbxSceneFactory&&) = delete; \
	UReimportFbxSceneFactory(const UReimportFbxSceneFactory&) = delete; \
	NO_API virtual ~UReimportFbxSceneFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportFbxSceneFactory;

// ********** End Class UReimportFbxSceneFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxSceneFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
