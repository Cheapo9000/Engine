// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehaviorsBlueprintFunctionLibrary.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorsBlueprintFunctionLibrary_generated_h
#error "GameplayBehaviorsBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayBehaviorsBlueprintFunctionLibrary.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorsBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardComponent;
class UBTNode;
class UObject;
struct FBlackboardKeySelector;
struct FGameplayTagContainer;

// ********** Begin Class UGameplayBehaviorsBlueprintFunctionLibrary *******************************
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetValueAsGameplayTagForBlackboardComp); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTagFromBlackboardComp); \
	DECLARE_FUNCTION(execAddGameplayTagFilterToBlackboardKeySelector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsGameplayTag); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTag);


struct Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehaviorsBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehaviorsBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehaviorsBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehaviorsBlueprintFunctionLibrary(UGameplayBehaviorsBlueprintFunctionLibrary&&) = delete; \
	UGameplayBehaviorsBlueprintFunctionLibrary(const UGameplayBehaviorsBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehaviorsBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehaviorsBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehaviorsBlueprintFunctionLibrary) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehaviorsBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehaviorsBlueprintFunctionLibrary;

// ********** End Class UGameplayBehaviorsBlueprintFunctionLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
