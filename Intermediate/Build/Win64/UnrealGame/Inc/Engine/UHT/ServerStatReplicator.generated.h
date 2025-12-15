// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ServerStatReplicator.h"

#ifdef ENGINE_ServerStatReplicator_generated_h
#error "ServerStatReplicator.generated.h already included, missing '#pragma once' in ServerStatReplicator.h"
#endif
#define ENGINE_ServerStatReplicator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AServerStatReplicator ****************************************************
struct Z_Construct_UClass_AServerStatReplicator_Statics;
ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAServerStatReplicator(); \
	friend struct ::Z_Construct_UClass_AServerStatReplicator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AServerStatReplicator_NoRegister(); \
public: \
	DECLARE_CLASS2(AServerStatReplicator, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AServerStatReplicator_NoRegister) \
	DECLARE_SERIALIZER(AServerStatReplicator) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Channels=NETFIELD_REP_START, \
		InRate, \
		OutRate, \
		MaxPacketOverhead, \
		InRateClientMax, \
		InRateClientMin, \
		InRateClientAvg, \
		InPacketsClientMax, \
		InPacketsClientMin, \
		InPacketsClientAvg, \
		OutRateClientMax, \
		OutRateClientMin, \
		OutRateClientAvg, \
		OutPacketsClientMax, \
		OutPacketsClientMin, \
		OutPacketsClientAvg, \
		NetNumClients, \
		InPackets, \
		OutPackets, \
		InBunches, \
		OutBunches, \
		OutLoss, \
		InLoss, \
		VoiceBytesSent, \
		VoiceBytesRecv, \
		VoicePacketsSent, \
		VoicePacketsRecv, \
		PercentInVoice, \
		PercentOutVoice, \
		NumActorChannels, \
		NumConsideredActors, \
		PrioritizedActors, \
		NumRelevantActors, \
		NumRelevantDeletedActors, \
		NumReplicatedActorAttempts, \
		NumReplicatedActors, \
		NumActors, \
		NumNetActors, \
		NumDormantActors, \
		NumInitiallyDormantActors, \
		NumNetGUIDsAckd, \
		NumNetGUIDsPending, \
		NumNetGUIDsUnAckd, \
		ObjPathBytes, \
		NetGUIDOutRate, \
		NetGUIDInRate, \
		NetSaturated, \
		NETFIELD_REP_END=NetSaturated	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AServerStatReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerStatReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AServerStatReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerStatReplicator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AServerStatReplicator(AServerStatReplicator&&) = delete; \
	AServerStatReplicator(const AServerStatReplicator&) = delete; \
	ENGINE_API virtual ~AServerStatReplicator();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AServerStatReplicator;

// ********** End Class AServerStatReplicator ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
