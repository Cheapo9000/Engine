// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehavior.h"

#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_generated_h
#error "GameplayBehavior.generated.h already included, missing '#pragma once' in GameplayBehavior.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class APawn;
class UGameplayBehaviorConfig;

// ********** Begin Class UGameplayBehavior ********************************************************
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetNextActorIndexInSequence); \
	DECLARE_FUNCTION(execK2_TriggerBehavior); \
	DECLARE_FUNCTION(execK2_AbortBehavior); \
	DECLARE_FUNCTION(execK2_EndBehavior);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGameplayBehavior_Statics;
GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehavior(); \
	friend struct ::Z_Construct_UClass_UGameplayBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYBEHAVIORSMODULE_API UClass* ::Z_Construct_UClass_UGameplayBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayBehavior, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), Z_Construct_UClass_UGameplayBehavior_NoRegister) \
	DECLARE_SERIALIZER(UGameplayBehavior) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayBehavior*>(this); }


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayBehavior(UGameplayBehavior&&) = delete; \
	UGameplayBehavior(const UGameplayBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYBEHAVIORSMODULE_API, UGameplayBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior) \
	GAMEPLAYBEHAVIORSMODULE_API virtual ~UGameplayBehavior();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_35_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayBehavior;

// ********** End Class UGameplayBehavior **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h

// ********** Begin Enum EGameplayBehaviorInstantiationPolicy **************************************
#define FOREACH_ENUM_EGAMEPLAYBEHAVIORINSTANTIATIONPOLICY(op) \
	op(EGameplayBehaviorInstantiationPolicy::Instantiate) \
	op(EGameplayBehaviorInstantiationPolicy::ConditionallyInstantiate) \
	op(EGameplayBehaviorInstantiationPolicy::DontInstantiate) 

enum class EGameplayBehaviorInstantiationPolicy : uint8;
template<> struct TIsUEnumClass<EGameplayBehaviorInstantiationPolicy> { enum { Value = true }; };
template<> GAMEPLAYBEHAVIORSMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayBehaviorInstantiationPolicy>();
// ********** End Enum EGameplayBehaviorInstantiationPolicy ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
