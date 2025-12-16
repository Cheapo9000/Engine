// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehavior_AnimationBased.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_AnimationBased_generated_h
#error "GameplayBehavior_AnimationBased.generated.h already included, missing '#pragma once' in GameplayBehavior_AnimationBased.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_AnimationBased_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;

// ********** Begin ScriptStruct FMontagePlaybackData **********************************************
struct Z_Construct_UScriptStruct_FMontagePlaybackData_Statics;
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMontagePlaybackData_Statics; \
	GAMEPLAYBEHAVIORSMODULE_API static class UScriptStruct* StaticStruct();


struct FMontagePlaybackData;
// ********** End ScriptStruct FMontagePlaybackData ************************************************

// ********** Begin Class UGameplayBehavior_AnimationBased *****************************************
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageFinished);


struct Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_AnimationBased_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehavior_AnimationBased(); \
	friend struct ::Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehavior_AnimationBased_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehavior_AnimationBased, UGameplayBehavior, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehavior_AnimationBased_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehavior_AnimationBased)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehavior_AnimationBased(UGameplayBehavior_AnimationBased&&) = delete; \
	UGameplayBehavior_AnimationBased(const UGameplayBehavior_AnimationBased&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehavior_AnimationBased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior_AnimationBased); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior_AnimationBased) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehavior_AnimationBased();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehavior_AnimationBased;

// ********** End Class UGameplayBehavior_AnimationBased *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
