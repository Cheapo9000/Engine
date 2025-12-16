// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/InterchangeResultImportTestFunctions.h"

#ifdef INTERCHANGETESTS_InterchangeResultImportTestFunctions_generated_h
#error "InterchangeResultImportTestFunctions.generated.h already included, missing '#pragma once' in InterchangeResultImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_InterchangeResultImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterchangeResult;
class UInterchangeResultsContainer;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UInterchangeResultImportTestFunctions ************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckIfErrorOrWarningWasGenerated);


struct Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeResultImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeResultImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UInterchangeResultImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeResultImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UInterchangeResultImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeResultImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UInterchangeResultImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeResultImportTestFunctions(UInterchangeResultImportTestFunctions&&) = delete; \
	UInterchangeResultImportTestFunctions(const UInterchangeResultImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UInterchangeResultImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeResultImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeResultImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UInterchangeResultImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_17_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeResultImportTestFunctions;

// ********** End Class UInterchangeResultImportTestFunctions **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
