// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosGameplayEventDispatcher.h"

#ifdef CHAOSSOLVERENGINE_ChaosGameplayEventDispatcher_generated_h
#error "ChaosGameplayEventDispatcher.generated.h already included, missing '#pragma once' in ChaosGameplayEventDispatcher.h"
#endif
#define CHAOSSOLVERENGINE_ChaosGameplayEventDispatcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBreakEventCallbackWrapper ****************************************
struct Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


struct FBreakEventCallbackWrapper;
// ********** End ScriptStruct FBreakEventCallbackWrapper ******************************************

// ********** Begin ScriptStruct FRemovalEventCallbackWrapper **************************************
struct Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


struct FRemovalEventCallbackWrapper;
// ********** End ScriptStruct FRemovalEventCallbackWrapper ****************************************

// ********** Begin ScriptStruct FCrumblingEventCallbackWrapper ************************************
struct Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


struct FCrumblingEventCallbackWrapper;
// ********** End ScriptStruct FCrumblingEventCallbackWrapper **************************************

// ********** Begin ScriptStruct FChaosHandlerSet **************************************************
struct Z_Construct_UScriptStruct_FChaosHandlerSet_Statics;
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosHandlerSet_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosHandlerSet;
// ********** End ScriptStruct FChaosHandlerSet ****************************************************

// ********** Begin Class UChaosGameplayEventDispatcher ********************************************
struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosGameplayEventDispatcher(); \
	friend struct ::Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosGameplayEventDispatcher, UChaosEventListenerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister) \
	DECLARE_SERIALIZER(UChaosGameplayEventDispatcher)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosGameplayEventDispatcher(UChaosGameplayEventDispatcher&&) = delete; \
	UChaosGameplayEventDispatcher(const UChaosGameplayEventDispatcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosGameplayEventDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosGameplayEventDispatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosGameplayEventDispatcher) \
	CHAOSSOLVERENGINE_API virtual ~UChaosGameplayEventDispatcher();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_79_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosGameplayEventDispatcher;

// ********** End Class UChaosGameplayEventDispatcher **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
