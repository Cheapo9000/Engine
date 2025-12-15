// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotify.h"

#ifdef ENGINE_AnimNotify_generated_h
#error "AnimNotify.generated.h already included, missing '#pragma once' in AnimNotify.h"
#endif
#define ENGINE_AnimNotify_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMeshComponent;
struct FAnimNotifyEventReference;

// ********** Begin ScriptStruct FBranchingPointNotifyPayload **************************************
struct Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBranchingPointNotifyPayload;
// ********** End ScriptStruct FBranchingPointNotifyPayload ****************************************

// ********** Begin Class UAnimNotify **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_RPC_WRAPPERS \
	ENGINE_API virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	ENGINE_API virtual FString GetNotifyName_Implementation() const; \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAnimNotify_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend struct ::Z_Construct_UClass_UAnimNotify_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimNotify_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimNotify_NoRegister) \
	DECLARE_SERIALIZER(UAnimNotify)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNotify(UAnimNotify&&) = delete; \
	UAnimNotify(const UAnimNotify&) = delete; \
	ENGINE_API virtual ~UAnimNotify();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_50_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNotify;

// ********** End Class UAnimNotify ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
