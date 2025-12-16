// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/AsyncAction_PerformTargeting.h"

#ifdef TARGETINGSYSTEM_AsyncAction_PerformTargeting_generated_h
#error "AsyncAction_PerformTargeting.generated.h already included, missing '#pragma once' in AsyncAction_PerformTargeting.h"
#endif
#define TARGETINGSYSTEM_AsyncAction_PerformTargeting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncAction_PerformTargeting;
class UTargetingPreset;
struct FTargetingRequestHandle;

// ********** Begin Delegate FPerformTargetingReady ************************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_15_DELEGATE \
TARGETINGSYSTEM_API void FPerformTargetingReady_DelegateWrapper(const FMulticastScriptDelegate& PerformTargetingReady, FTargetingRequestHandle TargetingHandle);


// ********** End Delegate FPerformTargetingReady **************************************************

// ********** Begin Class UAsyncAction_PerformTargeting ********************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTargetingHandle); \
	DECLARE_FUNCTION(execPerformFilteringRequest); \
	DECLARE_FUNCTION(execPerformTargetingRequest);


struct Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_PerformTargeting(); \
	friend struct ::Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_PerformTargeting, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_PerformTargeting)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PerformTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PerformTargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PerformTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PerformTargeting); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PerformTargeting(UAsyncAction_PerformTargeting&&) = delete; \
	UAsyncAction_PerformTargeting(const UAsyncAction_PerformTargeting&) = delete; \
	NO_API virtual ~UAsyncAction_PerformTargeting();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PerformTargeting;

// ********** End Class UAsyncAction_PerformTargeting **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Async_AsyncAction_PerformTargeting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
