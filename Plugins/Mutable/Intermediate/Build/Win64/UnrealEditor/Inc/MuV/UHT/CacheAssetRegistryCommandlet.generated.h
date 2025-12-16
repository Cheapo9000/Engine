// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuV/CacheAssetRegistryCommandlet.h"

#ifdef MUTABLEVALIDATION_CacheAssetRegistryCommandlet_generated_h
#error "CacheAssetRegistryCommandlet.generated.h already included, missing '#pragma once' in CacheAssetRegistryCommandlet.h"
#endif
#define MUTABLEVALIDATION_CacheAssetRegistryCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCacheAssetRegistryCommandlet ********************************************
struct Z_Construct_UClass_UCacheAssetRegistryCommandlet_Statics;
MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UCacheAssetRegistryCommandlet_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCacheAssetRegistryCommandlet(); \
	friend struct ::Z_Construct_UClass_UCacheAssetRegistryCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUTABLEVALIDATION_API UClass* ::Z_Construct_UClass_UCacheAssetRegistryCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCacheAssetRegistryCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MutableValidation"), Z_Construct_UClass_UCacheAssetRegistryCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCacheAssetRegistryCommandlet)


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCacheAssetRegistryCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCacheAssetRegistryCommandlet(UCacheAssetRegistryCommandlet&&) = delete; \
	UCacheAssetRegistryCommandlet(const UCacheAssetRegistryCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCacheAssetRegistryCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheAssetRegistryCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCacheAssetRegistryCommandlet) \
	NO_API virtual ~UCacheAssetRegistryCommandlet();


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_10_PROLOG
#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCacheAssetRegistryCommandlet;

// ********** End Class UCacheAssetRegistryCommandlet **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CacheAssetRegistryCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
