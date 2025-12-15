// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SceneImportFactory.h"

#ifdef UNREALED_SceneImportFactory_generated_h
#error "SceneImportFactory.generated.h already included, missing '#pragma once' in SceneImportFactory.h"
#endif
#define UNREALED_SceneImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneImportFactory ******************************************************
struct Z_Construct_UClass_USceneImportFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneImportFactory(); \
	friend struct ::Z_Construct_UClass_USceneImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USceneImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneImportFactory, UFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USceneImportFactory_NoRegister) \
	DECLARE_SERIALIZER(USceneImportFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USceneImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneImportFactory(USceneImportFactory&&) = delete; \
	USceneImportFactory(const USceneImportFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USceneImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneImportFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneImportFactory) \
	UNREALED_API virtual ~USceneImportFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneImportFactory;

// ********** End Class USceneImportFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SceneImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
