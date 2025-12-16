// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/TargetingTask.h"

#ifdef TARGETINGSYSTEM_TargetingTask_generated_h
#error "TargetingTask.generated.h already included, missing '#pragma once' in TargetingTask.h"
#endif
#define TARGETINGSYSTEM_TargetingTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTargetingSubsystem;
struct FTargetingRequestHandle;

// ********** Begin Class UTargetingTask ***********************************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetingSubsystem);


struct Z_Construct_UClass_UTargetingTask_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingTask(); \
	friend struct ::Z_Construct_UClass_UTargetingTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_UTargetingTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetingTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_UTargetingTask_NoRegister) \
	DECLARE_SERIALIZER(UTargetingTask)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetingTask(UTargetingTask&&) = delete; \
	UTargetingTask(const UTargetingTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, UTargetingTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingTask) \
	TARGETINGSYSTEM_API virtual ~UTargetingTask();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_45_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetingTask;

// ********** End Class UTargetingTask *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
