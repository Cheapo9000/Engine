// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestUtilityLibrary.h"

#ifdef FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h
#error "FunctionalTestUtilityLibrary.generated.h already included, missing '#pragma once' in FunctionalTestUtilityLibrary.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UTraceQueryTestResults;
struct FLinearColor;
struct FTraceChannelTestBatchOptions;

// ********** Begin Class UFunctionalTestUtilityLibrary ********************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTraceChannelTestUtil);


struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionalTestUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFunctionalTestUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFunctionalTestUtilityLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary&&) = delete; \
	UFunctionalTestUtilityLibrary(const UFunctionalTestUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UFunctionalTestUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestUtilityLibrary) \
	FUNCTIONALTESTING_API virtual ~UFunctionalTestUtilityLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_16_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFunctionalTestUtilityLibrary;

// ********** End Class UFunctionalTestUtilityLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
