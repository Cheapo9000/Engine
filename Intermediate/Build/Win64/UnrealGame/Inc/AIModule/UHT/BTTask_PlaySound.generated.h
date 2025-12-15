// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_PlaySound.h"

#ifdef AIMODULE_BTTask_PlaySound_generated_h
#error "BTTask_PlaySound.generated.h already included, missing '#pragma once' in BTTask_PlaySound.h"
#endif
#define AIMODULE_BTTask_PlaySound_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_PlaySound ********************************************************
struct Z_Construct_UClass_UBTTask_PlaySound_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_PlaySound(); \
	friend struct ::Z_Construct_UClass_UBTTask_PlaySound_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UBTTask_PlaySound_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_PlaySound, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UBTTask_PlaySound_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_PlaySound)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_PlaySound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PlaySound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_PlaySound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PlaySound); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_PlaySound(UBTTask_PlaySound&&) = delete; \
	UBTTask_PlaySound(const UBTTask_PlaySound&) = delete; \
	AIMODULE_API virtual ~UBTTask_PlaySound();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_18_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_21_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_PlaySound;

// ********** End Class UBTTask_PlaySound **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
