// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerPlayerManager.h"

#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerPlayerManager_generated_h
#error "GameplayDebuggerPlayerManager.generated.h already included, missing '#pragma once' in GameplayDebuggerPlayerManager.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerPlayerManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayDebuggerPlayerData ***************************************
struct Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics;
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


struct FGameplayDebuggerPlayerData;
// ********** End ScriptStruct FGameplayDebuggerPlayerData *****************************************

// ********** Begin Class AGameplayDebuggerPlayerManager *******************************************
struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics;
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerPlayerManager(); \
	friend struct ::Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYDEBUGGER_API UClass* ::Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayDebuggerPlayerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister) \
	DECLARE_SERIALIZER(AGameplayDebuggerPlayerManager)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYDEBUGGER_API AGameplayDebuggerPlayerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerPlayerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYDEBUGGER_API, AGameplayDebuggerPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerPlayerManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayDebuggerPlayerManager(AGameplayDebuggerPlayerManager&&) = delete; \
	AGameplayDebuggerPlayerManager(const AGameplayDebuggerPlayerManager&) = delete; \
	GAMEPLAYDEBUGGER_API virtual ~AGameplayDebuggerPlayerManager();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_32_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayDebuggerPlayerManager;

// ********** End Class AGameplayDebuggerPlayerManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
