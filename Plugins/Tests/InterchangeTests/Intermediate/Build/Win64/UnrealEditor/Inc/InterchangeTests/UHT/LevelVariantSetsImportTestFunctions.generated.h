// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/LevelVariantSetsImportTestFunctions.h"

#ifdef INTERCHANGETESTS_LevelVariantSetsImportTestFunctions_generated_h
#error "LevelVariantSetsImportTestFunctions.generated.h already included, missing '#pragma once' in LevelVariantSetsImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_LevelVariantSetsImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelVariantSets;
struct FInterchangeTestFunctionResult;

// ********** Begin Class ULevelVariantSetsImportTestFunctions *************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckBindingsCount); \
	DECLARE_FUNCTION(execCheckVariantsCount); \
	DECLARE_FUNCTION(execCheckVariantSetsCount); \
	DECLARE_FUNCTION(execCheckLevelVariantSetsCount);


struct Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelVariantSetsImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelVariantSetsImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_ULevelVariantSetsImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(ULevelVariantSetsImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API ULevelVariantSetsImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelVariantSetsImportTestFunctions(ULevelVariantSetsImportTestFunctions&&) = delete; \
	ULevelVariantSetsImportTestFunctions(const ULevelVariantSetsImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, ULevelVariantSetsImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelVariantSetsImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelVariantSetsImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~ULevelVariantSetsImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelVariantSetsImportTestFunctions;

// ********** End Class ULevelVariantSetsImportTestFunctions ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelVariantSetsImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
