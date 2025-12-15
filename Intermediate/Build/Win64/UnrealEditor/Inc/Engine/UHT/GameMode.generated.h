// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameMode.h"

#ifdef ENGINE_GameMode_generated_h
#error "GameMode.generated.h already included, missing '#pragma once' in GameMode.h"
#endif
#define ENGINE_GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameMode ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS \
	ENGINE_API virtual bool ReadyToEndMatch_Implementation(); \
	ENGINE_API virtual bool ReadyToStartMatch_Implementation(); \
	DECLARE_FUNCTION(execSay); \
	DECLARE_FUNCTION(execReadyToEndMatch); \
	DECLARE_FUNCTION(execReadyToStartMatch); \
	DECLARE_FUNCTION(execAbortMatch); \
	DECLARE_FUNCTION(execRestartGame); \
	DECLARE_FUNCTION(execEndMatch); \
	DECLARE_FUNCTION(execStartMatch); \
	DECLARE_FUNCTION(execIsMatchInProgress); \
	DECLARE_FUNCTION(execGetMatchState);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGameMode_Statics;
ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAGameMode(); \
	friend struct ::Z_Construct_UClass_AGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGameMode)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameMode(AGameMode&&) = delete; \
	AGameMode(const AGameMode&) = delete; \
	ENGINE_API virtual ~AGameMode();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_34_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameMode;

// ********** End Class AGameMode ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
