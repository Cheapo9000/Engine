// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/ImportTestFunctionsBase.h"

#ifdef INTERCHANGETESTS_ImportTestFunctionsBase_generated_h
#error "ImportTestFunctionsBase.generated.h already included, missing '#pragma once' in ImportTestFunctionsBase.h"
#endif
#define INTERCHANGETESTS_ImportTestFunctionsBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImportTestFunctionsBase *************************************************
struct Z_Construct_UClass_UImportTestFunctionsBase_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportTestFunctionsBase(); \
	friend struct ::Z_Construct_UClass_UImportTestFunctionsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UImportTestFunctionsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportTestFunctionsBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UImportTestFunctionsBase_NoRegister) \
	DECLARE_SERIALIZER(UImportTestFunctionsBase)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UImportTestFunctionsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportTestFunctionsBase(UImportTestFunctionsBase&&) = delete; \
	UImportTestFunctionsBase(const UImportTestFunctionsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UImportTestFunctionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportTestFunctionsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportTestFunctionsBase) \
	INTERCHANGETESTS_API virtual ~UImportTestFunctionsBase();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_17_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportTestFunctionsBase;

// ********** End Class UImportTestFunctionsBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ImportTestFunctionsBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
