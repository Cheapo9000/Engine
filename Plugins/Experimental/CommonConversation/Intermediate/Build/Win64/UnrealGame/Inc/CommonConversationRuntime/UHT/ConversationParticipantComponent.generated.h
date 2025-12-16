// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationParticipantComponent.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationParticipantComponent_generated_h
#error "ConversationParticipantComponent.generated.h already included, missing '#pragma once' in ConversationParticipantComponent.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationParticipantComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UConversationDatabase;
struct FAdvanceConversationRequest;
struct FClientConversationMessagePayload;
struct FClientConversationOptionEntry;
struct FConversationNodeHandle;
struct FConversationParticipants;
struct FGameplayTag;

// ********** Begin Delegate FOnConversationStatusChanged ******************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_15_DELEGATE \
COMMONCONVERSATIONRUNTIME_API void FOnConversationStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConversationStatusChanged, bool bIsInConversation);


// ********** End Delegate FOnConversationStatusChanged ********************************************

// ********** Begin Class UConversationParticipantComponent ****************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientExitConversation_Implementation(FConversationParticipants const& InParticipants); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientStartConversation_Implementation(FConversationParticipants const& InParticipants); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientUpdateConversations_Implementation(int32 InConversationsActive); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientUpdateConversationTaskChoiceData_Implementation(FConversationNodeHandle Handle, FClientConversationOptionEntry const& OptionEntry); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientUpdateConversation_Implementation(FClientConversationMessagePayload const& Message); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientExecuteTaskAndSideEffects_Implementation(FConversationNodeHandle Handle, const UConversationDatabase* Graph); \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientUpdateParticipants_Implementation(FConversationParticipants const& InParticipants); \
	COMMONCONVERSATIONRUNTIME_API virtual void ServerAdvanceConversation_Implementation(FAdvanceConversationRequest const& InChoicePicked); \
	DECLARE_FUNCTION(execOnRep_ConversationsActive); \
	DECLARE_FUNCTION(execClientExitConversation); \
	DECLARE_FUNCTION(execClientStartConversation); \
	DECLARE_FUNCTION(execClientUpdateConversations); \
	DECLARE_FUNCTION(execClientUpdateConversationTaskChoiceData); \
	DECLARE_FUNCTION(execClientUpdateConversation); \
	DECLARE_FUNCTION(execClientExecuteTaskAndSideEffects); \
	DECLARE_FUNCTION(execClientUpdateParticipants); \
	DECLARE_FUNCTION(execServerAdvanceConversation); \
	DECLARE_FUNCTION(execGetOtherParticipantActors); \
	DECLARE_FUNCTION(execGetParticipantActor); \
	DECLARE_FUNCTION(execIsInActiveConversation); \
	DECLARE_FUNCTION(execGetParticipantDisplayName); \
	DECLARE_FUNCTION(execRequestServerAdvanceConversation);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UConversationParticipantComponent_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationParticipantComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationParticipantComponent(); \
	friend struct ::Z_Construct_UClass_UConversationParticipantComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationParticipantComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationParticipantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationParticipantComponent_NoRegister) \
	DECLARE_SERIALIZER(UConversationParticipantComponent) \
	COMMONCONVERSATIONRUNTIME_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ConversationsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=ConversationsActive	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(COMMONCONVERSATIONRUNTIME_API)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationParticipantComponent(UConversationParticipantComponent&&) = delete; \
	UConversationParticipantComponent(const UConversationParticipantComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationParticipantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationParticipantComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationParticipantComponent) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationParticipantComponent();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationParticipantComponent;

// ********** End Class UConversationParticipantComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
