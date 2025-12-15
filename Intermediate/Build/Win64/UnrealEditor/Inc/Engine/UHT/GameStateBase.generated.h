// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameStateBase.h"

#ifdef ENGINE_GameStateBase_generated_h
#error "GameStateBase.generated.h already included, missing '#pragma once' in GameStateBase.h"
#endif
#define ENGINE_GameStateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;

// ********** Begin Class AGameStateBase ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_ReplicatedWorldTimeSecondsDouble); \
	DECLARE_FUNCTION(execOnRep_ReplicatedHasBegunPlay); \
	DECLARE_FUNCTION(execOnRep_SpectatorClass); \
	DECLARE_FUNCTION(execOnRep_GameModeClass); \
	DECLARE_FUNCTION(execGetPlayerRespawnDelay); \
	DECLARE_FUNCTION(execGetPlayerStartTime); \
	DECLARE_FUNCTION(execHasMatchEnded); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execHasBegunPlay); \
	DECLARE_FUNCTION(execGetServerWorldTimeSeconds);


struct Z_Construct_UClass_AGameStateBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAGameStateBase(); \
	friend struct ::Z_Construct_UClass_AGameStateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AGameStateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameStateBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AGameStateBase_NoRegister) \
	DECLARE_SERIALIZER(AGameStateBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameModeClass=NETFIELD_REP_START, \
		SpectatorClass, \
		bReplicatedHasBegunPlay, \
		ReplicatedWorldTimeSecondsDouble, \
		NETFIELD_REP_END=ReplicatedWorldTimeSecondsDouble	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameStateBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameStateBase(AGameStateBase&&) = delete; \
	AGameStateBase(const AGameStateBase&) = delete; \
	ENGINE_API virtual ~AGameStateBase();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameStateBase;

// ********** End Class AGameStateBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
