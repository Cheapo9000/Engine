// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SimpleTargetingFilterTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetingDefaultResultData;
struct FTargetingRequestHandle;
#ifdef TARGETINGSYSTEM_SimpleTargetingFilterTask_generated_h
#error "SimpleTargetingFilterTask.generated.h already included, missing '#pragma once' in SimpleTargetingFilterTask.h"
#endif
#define TARGETINGSYSTEM_SimpleTargetingFilterTask_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleTargetingFilterTask(); \
	friend struct Z_Construct_UClass_USimpleTargetingFilterTask_Statics; \
public: \
	DECLARE_CLASS(USimpleTargetingFilterTask, UTargetingFilterTask_BasicFilterTemplate, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(USimpleTargetingFilterTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleTargetingFilterTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleTargetingFilterTask(USimpleTargetingFilterTask&&); \
	USimpleTargetingFilterTask(const USimpleTargetingFilterTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleTargetingFilterTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleTargetingFilterTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleTargetingFilterTask) \
	NO_API virtual ~USimpleTargetingFilterTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class USimpleTargetingFilterTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingFilterTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
