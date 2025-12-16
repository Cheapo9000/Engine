// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AITask_UseGameplayInteraction.h"

#ifdef GAMEPLAYINTERACTIONSMODULE_AITask_UseGameplayInteraction_generated_h
#error "AITask_UseGameplayInteraction.generated.h already included, missing '#pragma once' in AITask_UseGameplayInteraction.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_AITask_UseGameplayInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UAITask_UseGameplayInteraction;
struct FSmartObjectClaimHandle;

// ********** Begin Class UAITask_UseGameplayInteraction *******************************************
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestAbort); \
	DECLARE_FUNCTION(execMoveToAndUseSmartObjectWithGameplayInteraction); \
	DECLARE_FUNCTION(execUseSmartObjectWithGameplayInteraction);


struct Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics;
GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_UseGameplayInteraction(); \
	friend struct ::Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYINTERACTIONSMODULE_API UClass* ::Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAITask_UseGameplayInteraction, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister) \
	DECLARE_SERIALIZER(UAITask_UseGameplayInteraction)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAITask_UseGameplayInteraction(UAITask_UseGameplayInteraction&&) = delete; \
	UAITask_UseGameplayInteraction(const UAITask_UseGameplayInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYINTERACTIONSMODULE_API, UAITask_UseGameplayInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_UseGameplayInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_UseGameplayInteraction) \
	GAMEPLAYINTERACTIONSMODULE_API virtual ~UAITask_UseGameplayInteraction();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAITask_UseGameplayInteraction;

// ********** End Class UAITask_UseGameplayInteraction *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
