// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialChatManager.h"

#ifdef PARTY_SocialChatManager_generated_h
#error "SocialChatManager.generated.h already included, missing '#pragma once' in SocialChatManager.h"
#endif
#define PARTY_SocialChatManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSocialChatChannelConfig ******************************************
struct Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FSocialChatChannelConfig;
// ********** End ScriptStruct FSocialChatChannelConfig ********************************************

// ********** Begin Class USocialChatManager *******************************************************
struct Z_Construct_UClass_USocialChatManager_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialChatManager_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatManager(); \
	friend struct ::Z_Construct_UClass_USocialChatManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialChatManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialChatManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialChatManager_NoRegister) \
	DECLARE_SERIALIZER(USocialChatManager) \
	DECLARE_WITHIN(USocialToolkit) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARTY_API USocialChatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialChatManager(USocialChatManager&&) = delete; \
	USocialChatManager(const USocialChatManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialChatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocialChatManager) \
	PARTY_API virtual ~USocialChatManager();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_48_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialChatManager;

// ********** End Class USocialChatManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
