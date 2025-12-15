// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalAITest.h"

#ifdef FUNCTIONALTESTING_FunctionalAITest_generated_h
#error "FunctionalAITest.generated.h already included, missing '#pragma once' in FunctionalAITest.h"
#endif
#define FUNCTIONALTESTING_FunctionalAITest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;

// ********** Begin Delegate FFunctionalTestAISpawned **********************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_20_DELEGATE \
FUNCTIONALTESTING_API void FFunctionalTestAISpawned_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestAISpawned, AAIController* Controller, APawn* Pawn);


// ********** End Delegate FFunctionalTestAISpawned ************************************************

// ********** Begin ScriptStruct FAITestSpawnInfoBase **********************************************
struct Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FAITestSpawnInfoBase;
// ********** End ScriptStruct FAITestSpawnInfoBase ************************************************

// ********** Begin ScriptStruct FAITestSpawnInfo **************************************************
struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnInfoBase Super;


struct FAITestSpawnInfo;
// ********** End ScriptStruct FAITestSpawnInfo ****************************************************

// ********** Begin ScriptStruct FPendingDelayedSpawn **********************************************
struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FPendingDelayedSpawn;
// ********** End ScriptStruct FPendingDelayedSpawn ************************************************

// ********** Begin ScriptStruct FAITestSpawnSetBase ***********************************************
struct Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FAITestSpawnSetBase;
// ********** End ScriptStruct FAITestSpawnSetBase *************************************************

// ********** Begin ScriptStruct FAITestSpawnSet ***************************************************
struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAITestSpawnSet_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnSetBase Super;


struct FAITestSpawnSet;
// ********** End ScriptStruct FAITestSpawnSet *****************************************************

// ********** Begin Class AFunctionalAITestBase ****************************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns);


struct Z_Construct_UClass_AFunctionalAITestBase_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITestBase_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITestBase(); \
	friend struct ::Z_Construct_UClass_AFunctionalAITestBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalAITestBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalAITestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalAITestBase_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalAITestBase)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalAITestBase(AFunctionalAITestBase&&) = delete; \
	AFunctionalAITestBase(const AFunctionalAITestBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalAITestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITestBase) \
	FUNCTIONALTESTING_API virtual ~AFunctionalAITestBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_239_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_242_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalAITestBase;

// ********** End Class AFunctionalAITestBase ******************************************************

// ********** Begin Class AFunctionalAITest ********************************************************
struct Z_Construct_UClass_AFunctionalAITest_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITest_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_367_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct ::Z_Construct_UClass_AFunctionalAITest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalAITest_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalAITest, AFunctionalAITestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalAITest_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_367_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalAITest(AFunctionalAITest&&) = delete; \
	AFunctionalAITest(const AFunctionalAITest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalAITest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest) \
	FUNCTIONALTESTING_API virtual ~AFunctionalAITest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_364_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_367_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_367_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_367_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalAITest;

// ********** End Class AFunctionalAITest **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
