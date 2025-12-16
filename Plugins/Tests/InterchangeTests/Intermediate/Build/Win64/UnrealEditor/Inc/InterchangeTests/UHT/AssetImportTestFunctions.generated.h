// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/AssetImportTestFunctions.h"

#ifdef INTERCHANGETESTS_AssetImportTestFunctions_generated_h
#error "AssetImportTestFunctions.generated.h already included, missing '#pragma once' in AssetImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_AssetImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UAssetImportTestFunctions ************************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckObjectPathHasSubstring); \
	DECLARE_FUNCTION(execCheckMetadataValue); \
	DECLARE_FUNCTION(execCheckMetadataExist); \
	DECLARE_FUNCTION(execCheckImportedMetadataCount);


struct Z_Construct_UClass_UAssetImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAssetImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UAssetImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UAssetImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UAssetImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UAssetImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UAssetImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetImportTestFunctions(UAssetImportTestFunctions&&) = delete; \
	UAssetImportTestFunctions(const UAssetImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UAssetImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UAssetImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetImportTestFunctions;

// ********** End Class UAssetImportTestFunctions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AssetImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
