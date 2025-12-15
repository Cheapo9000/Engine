// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AIAsyncTaskBlueprintProxy.h"

#ifdef AIMODULE_AIAsyncTaskBlueprintProxy_generated_h
#error "AIAsyncTaskBlueprintProxy.generated.h already included, missing '#pragma once' in AIAsyncTaskBlueprintProxy.h"
#endif
#define AIMODULE_AIAsyncTaskBlueprintProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;

// ********** Begin Delegate FOAISimpleDelegate ****************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_14_DELEGATE \
AIMODULE_API void FOAISimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& OAISimpleDelegate, EPathFollowingResult::Type MovementResult);


// ********** End Delegate FOAISimpleDelegate ******************************************************

// ********** Begin Class UAIAsyncTaskBlueprintProxy ***********************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnMoveCompleted);


struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAIAsyncTaskBlueprintProxy(); \
	friend struct ::Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister) \
	DECLARE_SERIALIZER(UAIAsyncTaskBlueprintProxy)


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAsyncTaskBlueprintProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIAsyncTaskBlueprintProxy(UAIAsyncTaskBlueprintProxy&&) = delete; \
	UAIAsyncTaskBlueprintProxy(const UAIAsyncTaskBlueprintProxy&) = delete; \
	AIMODULE_API virtual ~UAIAsyncTaskBlueprintProxy();


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIAsyncTaskBlueprintProxy;

// ********** End Class UAIAsyncTaskBlueprintProxy *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIAsyncTaskBlueprintProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
