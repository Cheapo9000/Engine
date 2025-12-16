// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/LevelSequenceImportTestFunctions.h"

#ifdef INTERCHANGETESTS_LevelSequenceImportTestFunctions_generated_h
#error "LevelSequenceImportTestFunctions.generated.h already included, missing '#pragma once' in LevelSequenceImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_LevelSequenceImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FInterchangeTestFunctionResult;

// ********** Begin Class ULevelSequenceImportTestFunctions ****************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckSectionInterpolationMode); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckSequenceLength); \
	DECLARE_FUNCTION(execCheckLevelSequenceCount);


struct Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_ULevelSequenceImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_ULevelSequenceImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_ULevelSequenceImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API ULevelSequenceImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceImportTestFunctions(ULevelSequenceImportTestFunctions&&) = delete; \
	ULevelSequenceImportTestFunctions(const ULevelSequenceImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, ULevelSequenceImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~ULevelSequenceImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceImportTestFunctions;

// ********** End Class ULevelSequenceImportTestFunctions ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_LevelSequenceImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
