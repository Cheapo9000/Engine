// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayInteractionSmartObjectBehaviorDefinition.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSmartObjectBehaviorDefinition_generated_h
#error "GameplayInteractionSmartObjectBehaviorDefinition.generated.h already included, missing '#pragma once' in GameplayInteractionSmartObjectBehaviorDefinition.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSmartObjectBehaviorDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStateTree;

// ********** Begin Class UGameplayInteractionSmartObjectBehaviorDefinition ************************
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStateTree); \
	DECLARE_FUNCTION(execSetStateTree);


struct Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics;
GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayInteractionSmartObjectBehaviorDefinition(); \
	friend struct ::Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYINTERACTIONSMODULE_API UClass* ::Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayInteractionSmartObjectBehaviorDefinition, USmartObjectBehaviorDefinition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), Z_Construct_UClass_UGameplayInteractionSmartObjectBehaviorDefinition_NoRegister) \
	DECLARE_SERIALIZER(UGameplayInteractionSmartObjectBehaviorDefinition)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYINTERACTIONSMODULE_API UGameplayInteractionSmartObjectBehaviorDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayInteractionSmartObjectBehaviorDefinition(UGameplayInteractionSmartObjectBehaviorDefinition&&) = delete; \
	UGameplayInteractionSmartObjectBehaviorDefinition(const UGameplayInteractionSmartObjectBehaviorDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYINTERACTIONSMODULE_API, UGameplayInteractionSmartObjectBehaviorDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayInteractionSmartObjectBehaviorDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayInteractionSmartObjectBehaviorDefinition) \
	GAMEPLAYINTERACTIONSMODULE_API virtual ~UGameplayInteractionSmartObjectBehaviorDefinition();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayInteractionSmartObjectBehaviorDefinition;

// ********** End Class UGameplayInteractionSmartObjectBehaviorDefinition **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionSmartObjectBehaviorDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
