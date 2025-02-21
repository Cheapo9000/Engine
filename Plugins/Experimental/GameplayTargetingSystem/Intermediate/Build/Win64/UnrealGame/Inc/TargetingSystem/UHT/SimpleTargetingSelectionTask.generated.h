// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SimpleTargetingSelectionTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
struct FTargetingRequestHandle;
struct FTargetingSourceContext;
#ifdef TARGETINGSYSTEM_SimpleTargetingSelectionTask_generated_h
#error "SimpleTargetingSelectionTask.generated.h already included, missing '#pragma once' in SimpleTargetingSelectionTask.h"
#endif
#define TARGETINGSYSTEM_SimpleTargetingSelectionTask_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddHitResult); \
	DECLARE_FUNCTION(execAddTargetActor); \
	DECLARE_FUNCTION(execSelectTargets);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleTargetingSelectionTask(); \
	friend struct Z_Construct_UClass_USimpleTargetingSelectionTask_Statics; \
public: \
	DECLARE_CLASS(USimpleTargetingSelectionTask, UTargetingTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(USimpleTargetingSelectionTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleTargetingSelectionTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleTargetingSelectionTask(USimpleTargetingSelectionTask&&); \
	USimpleTargetingSelectionTask(const USimpleTargetingSelectionTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleTargetingSelectionTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleTargetingSelectionTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleTargetingSelectionTask) \
	NO_API virtual ~USimpleTargetingSelectionTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class USimpleTargetingSelectionTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSelectionTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
