// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestingManager.h"

#ifdef FUNCTIONALTESTING_FunctionalTestingManager_generated_h
#error "FunctionalTestingManager.generated.h already included, missing '#pragma once' in FunctionalTestingManager.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UFunctionalTestingManager ************************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRunAllFunctionalTests);


struct Z_Construct_UClass_UFunctionalTestingManager_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionalTestingManager(); \
	friend struct ::Z_Construct_UClass_UFunctionalTestingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UFunctionalTestingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UFunctionalTestingManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UFunctionalTestingManager_NoRegister) \
	DECLARE_SERIALIZER(UFunctionalTestingManager)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UFunctionalTestingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UFunctionalTestingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestingManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFunctionalTestingManager(UFunctionalTestingManager&&) = delete; \
	UFunctionalTestingManager(const UFunctionalTestingManager&) = delete; \
	FUNCTIONALTESTING_API virtual ~UFunctionalTestingManager();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_28_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFunctionalTestingManager;

// ********** End Class UFunctionalTestingManager **************************************************

// ********** Begin Class APhasedAutomationActorBase ***********************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_CALLBACK_WRAPPERS
struct Z_Construct_UClass_APhasedAutomationActorBase_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasedAutomationActorBase(); \
	friend struct ::Z_Construct_UClass_APhasedAutomationActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_APhasedAutomationActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APhasedAutomationActorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_APhasedAutomationActorBase_NoRegister) \
	DECLARE_SERIALIZER(APhasedAutomationActorBase)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhasedAutomationActorBase(APhasedAutomationActorBase&&) = delete; \
	APhasedAutomationActorBase(const APhasedAutomationActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, APhasedAutomationActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasedAutomationActorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhasedAutomationActorBase) \
	FUNCTIONALTESTING_API virtual ~APhasedAutomationActorBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_100_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhasedAutomationActorBase;

// ********** End Class APhasedAutomationActorBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
