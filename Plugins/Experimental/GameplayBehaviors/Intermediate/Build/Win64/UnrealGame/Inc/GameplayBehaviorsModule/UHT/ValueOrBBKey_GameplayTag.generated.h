// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/ValueOrBBKey_GameplayTag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTreeComponent;
struct FGameplayTagContainer;
struct FValueOrBBKey_GameplayTagContainer;
#ifdef GAMEPLAYBEHAVIORSMODULE_ValueOrBBKey_GameplayTag_generated_h
#error "ValueOrBBKey_GameplayTag.generated.h already included, missing '#pragma once' in ValueOrBBKey_GameplayTag.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_ValueOrBBKey_GameplayTag_generated_h

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValueOrBBKey_GameplayTagContainer_Statics; \
	GAMEPLAYBEHAVIORSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FValueOrBlackboardKeyBase Super;


template<> GAMEPLAYBEHAVIORSMODULE_API UScriptStruct* StaticStruct<struct FValueOrBBKey_GameplayTagContainer>();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTagContainer);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValueOrBBKey_GameplayTagBlueprintUtility(); \
	friend struct Z_Construct_UClass_UValueOrBBKey_GameplayTagBlueprintUtility_Statics; \
public: \
	DECLARE_CLASS(UValueOrBBKey_GameplayTagBlueprintUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UValueOrBBKey_GameplayTagBlueprintUtility)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValueOrBBKey_GameplayTagBlueprintUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UValueOrBBKey_GameplayTagBlueprintUtility(UValueOrBBKey_GameplayTagBlueprintUtility&&); \
	UValueOrBBKey_GameplayTagBlueprintUtility(const UValueOrBBKey_GameplayTagBlueprintUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValueOrBBKey_GameplayTagBlueprintUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValueOrBBKey_GameplayTagBlueprintUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValueOrBBKey_GameplayTagBlueprintUtility) \
	NO_API virtual ~UValueOrBBKey_GameplayTagBlueprintUtility();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_35_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<class UValueOrBBKey_GameplayTagBlueprintUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_ValueOrBBKey_GameplayTag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
