// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/GameplayTask_ClaimResource.h"

#ifdef GAMEPLAYTASKS_GameplayTask_ClaimResource_generated_h
#error "GameplayTask_ClaimResource.generated.h already included, missing '#pragma once' in GameplayTask_ClaimResource.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_ClaimResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UClass;
class UGameplayTask_ClaimResource;
class UGameplayTaskResource;

// ********** Begin Class UGameplayTask_ClaimResource **********************************************
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClaimResources); \
	DECLARE_FUNCTION(execClaimResource);


struct Z_Construct_UClass_UGameplayTask_ClaimResource_Statics;
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_ClaimResource(); \
	friend struct ::Z_Construct_UClass_UGameplayTask_ClaimResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTASKS_API UClass* ::Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTask_ClaimResource, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTask_ClaimResource)


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTask_ClaimResource(UGameplayTask_ClaimResource&&) = delete; \
	UGameplayTask_ClaimResource(const UGameplayTask_ClaimResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_ClaimResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_ClaimResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_ClaimResource) \
	GAMEPLAYTASKS_API virtual ~UGameplayTask_ClaimResource();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_14_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTask_ClaimResource;

// ********** End Class UGameplayTask_ClaimResource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
