// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionTask_WaitForTargets.h"

#ifdef INTERACTABLEINTERFACE_InteractionTask_WaitForTargets_generated_h
#error "InteractionTask_WaitForTargets.generated.h already included, missing '#pragma once' in InteractionTask_WaitForTargets.h"
#endif
#define INTERACTABLEINTERFACE_InteractionTask_WaitForTargets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IInteractionTarget;
class UAbilityTask_GrantNearbyInteractionData;
class UGameplayAbility;

// ********** Begin Delegate FAvailableInteractionTargetsChanged ***********************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_26_DELEGATE \
INTERACTABLEINTERFACE_API void FAvailableInteractionTargetsChanged_DelegateWrapper(const FMulticastScriptDelegate& AvailableInteractionTargetsChanged, TArray<TScriptInterface<IInteractionTarget>> const& InteractableOptions);


// ********** End Delegate FAvailableInteractionTargetsChanged *************************************

// ********** Begin Class UAbilityTask_GrantNearbyInteractionData **********************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGrantAbilitiesForNearbyInteractionData);


struct Z_Construct_UClass_UAbilityTask_GrantNearbyInteractionData_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UAbilityTask_GrantNearbyInteractionData_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_GrantNearbyInteractionData(); \
	friend struct ::Z_Construct_UClass_UAbilityTask_GrantNearbyInteractionData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UAbilityTask_GrantNearbyInteractionData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAbilityTask_GrantNearbyInteractionData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UAbilityTask_GrantNearbyInteractionData_NoRegister) \
	DECLARE_SERIALIZER(UAbilityTask_GrantNearbyInteractionData)


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_GrantNearbyInteractionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAbilityTask_GrantNearbyInteractionData(UAbilityTask_GrantNearbyInteractionData&&) = delete; \
	UAbilityTask_GrantNearbyInteractionData(const UAbilityTask_GrantNearbyInteractionData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_GrantNearbyInteractionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_GrantNearbyInteractionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_GrantNearbyInteractionData) \
	NO_API virtual ~UAbilityTask_GrantNearbyInteractionData();


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_35_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAbilityTask_GrantNearbyInteractionData;

// ********** End Class UAbilityTask_GrantNearbyInteractionData ************************************

// ********** Begin Interface UInteractionAbilityInterface *****************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerInteraction); \
	DECLARE_FUNCTION(execOnAvailableInteractionsUpdated);


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInteractionAbilityInterface_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UInteractionAbilityInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionAbilityInterface(UInteractionAbilityInterface&&) = delete; \
	UInteractionAbilityInterface(const UInteractionAbilityInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionAbilityInterface) \
	virtual ~UInteractionAbilityInterface() = default;


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionAbilityInterface(); \
	friend struct ::Z_Construct_UClass_UInteractionAbilityInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UInteractionAbilityInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionAbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UInteractionAbilityInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractionAbilityInterface)


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionAbilityInterface() {} \
public: \
	typedef UInteractionAbilityInterface UClassType; \
	typedef IInteractionAbilityInterface ThisClass; \
	static void Execute_OnAvailableInteractionsUpdated(UObject* O); \
	static void Execute_OnTriggerInteraction(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_102_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_105_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionAbilityInterface;

// ********** End Interface UInteractionAbilityInterface *******************************************

// ********** Begin Class UGameplayAbility_Interact ************************************************
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerInteraction); \
	DECLARE_FUNCTION(execUpdateInteractions);


struct Z_Construct_UClass_UGameplayAbility_Interact_Statics;
INTERACTABLEINTERFACE_API UClass* Z_Construct_UClass_UGameplayAbility_Interact_NoRegister();

#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbility_Interact(); \
	friend struct ::Z_Construct_UClass_UGameplayAbility_Interact_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTABLEINTERFACE_API UClass* ::Z_Construct_UClass_UGameplayAbility_Interact_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbility_Interact, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractableInterface"), Z_Construct_UClass_UGameplayAbility_Interact_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbility_Interact) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility_Interact*>(this); }


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbility_Interact(UGameplayAbility_Interact&&) = delete; \
	UGameplayAbility_Interact(const UGameplayAbility_Interact&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility_Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility_Interact); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility_Interact) \
	NO_API virtual ~UGameplayAbility_Interact();


#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_145_PROLOG
#define FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbility_Interact;

// ********** End Class UGameplayAbility_Interact **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_InteractionInterface_Source_InteractableInterface_Public_InteractionTask_WaitForTargets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
