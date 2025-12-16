// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehaviorConfig.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorConfig_generated_h
#error "GameplayBehaviorConfig.generated.h already included, missing '#pragma once' in GameplayBehaviorConfig.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayBehaviorConfig **************************************************
struct Z_Construct_UClass_UGameplayBehaviorConfig_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehaviorConfig(); \
	friend struct ::Z_Construct_UClass_UGameplayBehaviorConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehaviorConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehaviorConfig)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehaviorConfig(UGameplayBehaviorConfig&&) = delete; \
	UGameplayBehaviorConfig(const UGameplayBehaviorConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehaviorConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehaviorConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehaviorConfig) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehaviorConfig();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehaviorConfig;

// ********** End Class UGameplayBehaviorConfig ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
