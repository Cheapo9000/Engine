// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehaviorSubsystem.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorSubsystem_generated_h
#error "GameplayBehaviorSubsystem.generated.h already included, missing '#pragma once' in GameplayBehaviorSubsystem.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAgentGameplayBehaviors *******************************************
struct Z_Construct_UScriptStruct_FAgentGameplayBehaviors_Statics;
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAgentGameplayBehaviors_Statics; \
	GAMEPLAYBEHAVIORSMODULE_API static class UScriptStruct* StaticStruct();


struct FAgentGameplayBehaviors;
// ********** End ScriptStruct FAgentGameplayBehaviors *********************************************

// ********** Begin Class UGameplayBehaviorSubsystem ***********************************************
struct Z_Construct_UClass_UGameplayBehaviorSubsystem_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehaviorSubsystem(); \
	friend struct ::Z_Construct_UClass_UGameplayBehaviorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehaviorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehaviorSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehaviorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehaviorSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehaviorSubsystem(UGameplayBehaviorSubsystem&&) = delete; \
	UGameplayBehaviorSubsystem(const UGameplayBehaviorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehaviorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehaviorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayBehaviorSubsystem) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehaviorSubsystem();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehaviorSubsystem;

// ********** End Class UGameplayBehaviorSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
