// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/MaterialImportTestFunctions.h"

#ifdef INTERCHANGETESTS_MaterialImportTestFunctions_generated_h
#error "MaterialImportTestFunctions.generated.h already included, missing '#pragma once' in MaterialImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_MaterialImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FInterchangeTestFunctionResult;
struct FLinearColor;

// ********** Begin Class UMaterialImportTestFunctions *********************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckVectorParameter); \
	DECLARE_FUNCTION(execCheckScalarParameter); \
	DECLARE_FUNCTION(execCheckOpacityMaskClipValue); \
	DECLARE_FUNCTION(execCheckIsTwoSided); \
	DECLARE_FUNCTION(execCheckBlendMode); \
	DECLARE_FUNCTION(execCheckShadingModel); \
	DECLARE_FUNCTION(execCheckImportedMaterialInstanceCount); \
	DECLARE_FUNCTION(execCheckImportedMaterialCount);


struct Z_Construct_UClass_UMaterialImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UMaterialImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UMaterialImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UMaterialImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UMaterialImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UMaterialImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialImportTestFunctions(UMaterialImportTestFunctions&&) = delete; \
	UMaterialImportTestFunctions(const UMaterialImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UMaterialImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UMaterialImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_16_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialImportTestFunctions;

// ********** End Class UMaterialImportTestFunctions ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
