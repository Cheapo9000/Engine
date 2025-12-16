// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Processors/AssetProcessors.h"

#ifdef TEDSASSETDATA_AssetProcessors_generated_h
#error "AssetProcessors.generated.h already included, missing '#pragma once' in AssetProcessors.h"
#endif
#define TEDSASSETDATA_AssetProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsAssetDataFactory ****************************************************
struct Z_Construct_UClass_UTedsAssetDataFactory_Statics;
TEDSASSETDATA_API UClass* Z_Construct_UClass_UTedsAssetDataFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsAssetDataFactory(); \
	friend struct ::Z_Construct_UClass_UTedsAssetDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSASSETDATA_API UClass* ::Z_Construct_UClass_UTedsAssetDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsAssetDataFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsAssetData"), Z_Construct_UClass_UTedsAssetDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UTedsAssetDataFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsAssetDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsAssetDataFactory(UTedsAssetDataFactory&&) = delete; \
	UTedsAssetDataFactory(const UTedsAssetDataFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsAssetDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsAssetDataFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsAssetDataFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsAssetDataFactory;

// ********** End Class UTedsAssetDataFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsAssetData_Private_Processors_AssetProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
