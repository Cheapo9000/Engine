// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixFunctionalTestAction.h"

#ifdef HARMONIXMETASOUNDTESTS_HarmonixFunctionalTestAction_generated_h
#error "HarmonixFunctionalTestAction.generated.h already included, missing '#pragma once' in HarmonixFunctionalTestAction.h"
#endif
#define HARMONIXMETASOUNDTESTS_HarmonixFunctionalTestAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFunctionalTest;

// ********** Begin Class UHarmonixFunctionalTestAction ********************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execOnFinished); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execPrepare);


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UHarmonixFunctionalTestAction_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestAction_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestAction(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestAction_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestAction)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestAction(UHarmonixFunctionalTestAction&&) = delete; \
	UHarmonixFunctionalTestAction(const UHarmonixFunctionalTestAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestAction) \
	NO_API virtual ~UHarmonixFunctionalTestAction();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestAction;

// ********** End Class UHarmonixFunctionalTestAction **********************************************

// ********** Begin Class UHarmonixFunctionalTestActionSequence ************************************
struct Z_Construct_UClass_UHarmonixFunctionalTestActionSequence_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestActionSequence_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestActionSequence(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestActionSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestActionSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestActionSequence, UHarmonixFunctionalTestAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestActionSequence_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestActionSequence)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestActionSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestActionSequence(UHarmonixFunctionalTestActionSequence&&) = delete; \
	UHarmonixFunctionalTestActionSequence(const UHarmonixFunctionalTestActionSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestActionSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestActionSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestActionSequence) \
	NO_API virtual ~UHarmonixFunctionalTestActionSequence();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestActionSequence;

// ********** End Class UHarmonixFunctionalTestActionSequence **************************************

// ********** Begin Class UHarmonixFunctionalTestActionParallel ************************************
struct Z_Construct_UClass_UHarmonixFunctionalTestActionParallel_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestActionParallel_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestActionParallel(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestActionParallel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestActionParallel_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestActionParallel, UHarmonixFunctionalTestAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestActionParallel_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestActionParallel)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestActionParallel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestActionParallel(UHarmonixFunctionalTestActionParallel&&) = delete; \
	UHarmonixFunctionalTestActionParallel(const UHarmonixFunctionalTestActionParallel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestActionParallel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestActionParallel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestActionParallel) \
	NO_API virtual ~UHarmonixFunctionalTestActionParallel();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestActionParallel;

// ********** End Class UHarmonixFunctionalTestActionParallel **************************************

// ********** Begin Class UHarmonixFunctionalTestActionDelay ***************************************
struct Z_Construct_UClass_UHarmonixFunctionalTestActionDelay_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestActionDelay_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestActionDelay(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestActionDelay_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestActionDelay_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestActionDelay, UHarmonixFunctionalTestAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestActionDelay_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestActionDelay)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestActionDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestActionDelay(UHarmonixFunctionalTestActionDelay&&) = delete; \
	UHarmonixFunctionalTestActionDelay(const UHarmonixFunctionalTestActionDelay&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestActionDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestActionDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestActionDelay) \
	NO_API virtual ~UHarmonixFunctionalTestActionDelay();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_120_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_125_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestActionDelay;

// ********** End Class UHarmonixFunctionalTestActionDelay *****************************************

// ********** Begin Class UHarmonixFunctionalTestActionWaitForTimeout ******************************
struct Z_Construct_UClass_UHarmonixFunctionalTestActionWaitForTimeout_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestActionWaitForTimeout_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestActionWaitForTimeout(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestActionWaitForTimeout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestActionWaitForTimeout_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestActionWaitForTimeout, UHarmonixFunctionalTestAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestActionWaitForTimeout_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestActionWaitForTimeout)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestActionWaitForTimeout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestActionWaitForTimeout(UHarmonixFunctionalTestActionWaitForTimeout&&) = delete; \
	UHarmonixFunctionalTestActionWaitForTimeout(const UHarmonixFunctionalTestActionWaitForTimeout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestActionWaitForTimeout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestActionWaitForTimeout); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestActionWaitForTimeout) \
	NO_API virtual ~UHarmonixFunctionalTestActionWaitForTimeout();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_139_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestActionWaitForTimeout;

// ********** End Class UHarmonixFunctionalTestActionWaitForTimeout ********************************

// ********** Begin Class UHarmonixFunctionalTestActionFinishTest **********************************
struct Z_Construct_UClass_UHarmonixFunctionalTestActionFinishTest_Statics;
HARMONIXMETASOUNDTESTS_API UClass* Z_Construct_UClass_UHarmonixFunctionalTestActionFinishTest_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixFunctionalTestActionFinishTest(); \
	friend struct ::Z_Construct_UClass_UHarmonixFunctionalTestActionFinishTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUNDTESTS_API UClass* ::Z_Construct_UClass_UHarmonixFunctionalTestActionFinishTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixFunctionalTestActionFinishTest, UHarmonixFunctionalTestAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasoundTests"), Z_Construct_UClass_UHarmonixFunctionalTestActionFinishTest_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixFunctionalTestActionFinishTest)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHarmonixFunctionalTestActionFinishTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixFunctionalTestActionFinishTest(UHarmonixFunctionalTestActionFinishTest&&) = delete; \
	UHarmonixFunctionalTestActionFinishTest(const UHarmonixFunctionalTestActionFinishTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHarmonixFunctionalTestActionFinishTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixFunctionalTestActionFinishTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixFunctionalTestActionFinishTest) \
	NO_API virtual ~UHarmonixFunctionalTestActionFinishTest();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_145_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixFunctionalTestActionFinishTest;

// ********** End Class UHarmonixFunctionalTestActionFinishTest ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasoundTests_Private_HarmonixFunctionalTestAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
