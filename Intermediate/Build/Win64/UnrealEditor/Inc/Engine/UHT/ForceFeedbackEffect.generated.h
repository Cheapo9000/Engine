// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ForceFeedbackEffect.h"

#ifdef ENGINE_ForceFeedbackEffect_generated_h
#error "ForceFeedbackEffect.generated.h already included, missing '#pragma once' in ForceFeedbackEffect.h"
#endif
#define ENGINE_ForceFeedbackEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FForceFeedbackChannelDetails **************************************
struct Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FForceFeedbackChannelDetails;
// ********** End ScriptStruct FForceFeedbackChannelDetails ****************************************

// ********** Begin ScriptStruct FActiveForceFeedbackEffect ****************************************
struct Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActiveForceFeedbackEffect;
// ********** End ScriptStruct FActiveForceFeedbackEffect ******************************************

// ********** Begin ScriptStruct FForceFeedbackEffectOverridenChannelDetails ***********************
struct Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FForceFeedbackEffectOverridenChannelDetails;
// ********** End ScriptStruct FForceFeedbackEffectOverridenChannelDetails *************************

// ********** Begin Class UForceFeedbackEffect *****************************************************
struct Z_Construct_UClass_UForceFeedbackEffect_Statics;
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackEffect(); \
	friend struct ::Z_Construct_UClass_UForceFeedbackEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UForceFeedbackEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UForceFeedbackEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UForceFeedbackEffect_NoRegister) \
	DECLARE_SERIALIZER(UForceFeedbackEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UForceFeedbackEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackEffect); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UForceFeedbackEffect(UForceFeedbackEffect&&) = delete; \
	UForceFeedbackEffect(const UForceFeedbackEffect&) = delete; \
	ENGINE_API virtual ~UForceFeedbackEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_117_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_120_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UForceFeedbackEffect;

// ********** End Class UForceFeedbackEffect *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
