// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SimpleTargetingSortTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetingDefaultResultData;
struct FTargetingRequestHandle;
#ifdef TARGETINGSYSTEM_SimpleTargetingSortTask_generated_h
#error "SimpleTargetingSortTask.generated.h already included, missing '#pragma once' in SimpleTargetingSortTask.h"
#endif
#define TARGETINGSYSTEM_SimpleTargetingSortTask_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleTargetingSortTask(); \
	friend struct Z_Construct_UClass_USimpleTargetingSortTask_Statics; \
public: \
	DECLARE_CLASS(USimpleTargetingSortTask, UTargetingSortTask_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(USimpleTargetingSortTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleTargetingSortTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USimpleTargetingSortTask(USimpleTargetingSortTask&&); \
	USimpleTargetingSortTask(const USimpleTargetingSortTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleTargetingSortTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleTargetingSortTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleTargetingSortTask) \
	NO_API virtual ~USimpleTargetingSortTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class USimpleTargetingSortTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
