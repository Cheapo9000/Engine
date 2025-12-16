// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SimpleTargetingSelectionTask.h"

#ifdef TARGETINGSYSTEM_SimpleTargetingSelectionTask_generated_h
#error "SimpleTargetingSelectionTask.generated.h already included, missing '#pragma once' in SimpleTargetingSelectionTask.h"
#endif
#define TARGETINGSYSTEM_SimpleTargetingSelectionTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FTargetingRequestHandle;
struct FTargetingSourceContext;

// ********** Begin Class USimpleTargetingSelectionTask ********************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddHitResult); \
	DECLARE_FUNCTION(execAddTargetActor); \
	DECLARE_FUNCTION(execSelectTargets);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USimpleTargetingSelectionTask_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_USimpleTargetingSelectionTask_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleTargetingSelectionTask(); \
	friend struct ::Z_Construct_UClass_USimpleTargetingSelectionTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_USimpleTargetingSelectionTask_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleTargetingSelectionTask, UTargetingTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_USimpleTargetingSelectionTask_NoRegister) \
	DECLARE_SERIALIZER(USimpleTargetingSelectionTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TARGETINGSYSTEM_API USimpleTargetingSelectionTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleTargetingSelectionTask(USimpleTargetingSelectionTask&&) = delete; \
	USimpleTargetingSelectionTask(const USimpleTargetingSelectionTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, USimpleTargetingSelectionTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleTargetingSelectionTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleTargetingSelectionTask) \
	TARGETINGSYSTEM_API virtual ~USimpleTargetingSelectionTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleTargetingSelectionTask;

// ********** End Class USimpleTargetingSelectionTask **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
