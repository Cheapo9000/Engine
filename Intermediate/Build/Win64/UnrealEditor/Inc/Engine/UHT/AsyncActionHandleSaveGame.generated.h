// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/AsyncActionHandleSaveGame.h"

#ifdef ENGINE_AsyncActionHandleSaveGame_generated_h
#error "AsyncActionHandleSaveGame.generated.h already included, missing '#pragma once' in AsyncActionHandleSaveGame.h"
#endif
#define ENGINE_AsyncActionHandleSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncActionHandleSaveGame;
class UObject;
class USaveGame;

// ********** Begin Delegate FOnAsyncHandleSaveGame ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_13_DELEGATE \
ENGINE_API void FOnAsyncHandleSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncHandleSaveGame, USaveGame* SaveGame, bool bSuccess);


// ********** End Delegate FOnAsyncHandleSaveGame **************************************************

// ********** Begin Class UAsyncActionHandleSaveGame ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadGameFromSlot); \
	DECLARE_FUNCTION(execAsyncSaveGameToSlot);


struct Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionHandleSaveGame(); \
	friend struct ::Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncActionHandleSaveGame, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UAsyncActionHandleSaveGame)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAsyncActionHandleSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncActionHandleSaveGame(UAsyncActionHandleSaveGame&&) = delete; \
	UAsyncActionHandleSaveGame(const UAsyncActionHandleSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAsyncActionHandleSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionHandleSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionHandleSaveGame) \
	ENGINE_API virtual ~UAsyncActionHandleSaveGame();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncActionHandleSaveGame;

// ********** End Class UAsyncActionHandleSaveGame *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
