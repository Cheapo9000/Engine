// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/MaterialXTestFunctions.h"

#ifdef INTERCHANGETESTS_MaterialXTestFunctions_generated_h
#error "MaterialXTestFunctions.generated.h already included, missing '#pragma once' in MaterialXTestFunctions.h"
#endif
#define INTERCHANGETESTS_MaterialXTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UMaterialXTestFunctions **************************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckInputConnected); \
	DECLARE_FUNCTION(execCheckConnectedInputCount);


struct Z_Construct_UClass_UMaterialXTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialXTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialXTestFunctions(); \
	friend struct ::Z_Construct_UClass_UMaterialXTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UMaterialXTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialXTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UMaterialXTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UMaterialXTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UMaterialXTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialXTestFunctions(UMaterialXTestFunctions&&) = delete; \
	UMaterialXTestFunctions(const UMaterialXTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UMaterialXTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialXTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialXTestFunctions) \
	INTERCHANGETESTS_API virtual ~UMaterialXTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_17_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialXTestFunctions;

// ********** End Class UMaterialXTestFunctions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
