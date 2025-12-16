// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/SimpleTargetingSortTask.h"

#ifdef TARGETINGSYSTEM_SimpleTargetingSortTask_generated_h
#error "SimpleTargetingSortTask.generated.h already included, missing '#pragma once' in SimpleTargetingSortTask.h"
#endif
#define TARGETINGSYSTEM_SimpleTargetingSortTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetingDefaultResultData;
struct FTargetingRequestHandle;

// ********** Begin Class USimpleTargetingSortTask *************************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USimpleTargetingSortTask_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_USimpleTargetingSortTask_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleTargetingSortTask(); \
	friend struct ::Z_Construct_UClass_USimpleTargetingSortTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_USimpleTargetingSortTask_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleTargetingSortTask, UTargetingSortTask_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_USimpleTargetingSortTask_NoRegister) \
	DECLARE_SERIALIZER(USimpleTargetingSortTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TARGETINGSYSTEM_API USimpleTargetingSortTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleTargetingSortTask(USimpleTargetingSortTask&&) = delete; \
	USimpleTargetingSortTask(const USimpleTargetingSortTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, USimpleTargetingSortTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleTargetingSortTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleTargetingSortTask) \
	TARGETINGSYSTEM_API virtual ~USimpleTargetingSortTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleTargetingSortTask;

// ********** End Class USimpleTargetingSortTask ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_SimpleTargetingSortTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
