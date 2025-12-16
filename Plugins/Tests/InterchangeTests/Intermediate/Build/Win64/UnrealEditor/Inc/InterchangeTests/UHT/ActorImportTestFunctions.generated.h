// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/ActorImportTestFunctions.h"

#ifdef INTERCHANGETESTS_ActorImportTestFunctions_generated_h
#error "ActorImportTestFunctions.generated.h already included, missing '#pragma once' in ActorImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_ActorImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UActorImportTestFunctions ************************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckComponentPropertyValue); \
	DECLARE_FUNCTION(execCheckActorPropertyValue); \
	DECLARE_FUNCTION(execCheckActorClass); \
	DECLARE_FUNCTION(execCheckActorClassCount); \
	DECLARE_FUNCTION(execCheckImportedActorCount);


struct Z_Construct_UClass_UActorImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UActorImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UActorImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UActorImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UActorImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UActorImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UActorImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorImportTestFunctions(UActorImportTestFunctions&&) = delete; \
	UActorImportTestFunctions(const UActorImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UActorImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UActorImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorImportTestFunctions;

// ********** End Class UActorImportTestFunctions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
