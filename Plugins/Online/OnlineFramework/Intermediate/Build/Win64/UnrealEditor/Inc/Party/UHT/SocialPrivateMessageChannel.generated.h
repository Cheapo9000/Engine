// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialPrivateMessageChannel.h"

#ifdef PARTY_SocialPrivateMessageChannel_generated_h
#error "SocialPrivateMessageChannel.generated.h already included, missing '#pragma once' in SocialPrivateMessageChannel.h"
#endif
#define PARTY_SocialPrivateMessageChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialPrivateMessageChannel *********************************************
struct Z_Construct_UClass_USocialPrivateMessageChannel_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialPrivateMessageChannel(); \
	friend struct ::Z_Construct_UClass_USocialPrivateMessageChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialPrivateMessageChannel, USocialChatChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister) \
	DECLARE_SERIALIZER(USocialPrivateMessageChannel)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARTY_API USocialPrivateMessageChannel(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialPrivateMessageChannel(USocialPrivateMessageChannel&&) = delete; \
	USocialPrivateMessageChannel(const USocialPrivateMessageChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialPrivateMessageChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialPrivateMessageChannel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialPrivateMessageChannel) \
	PARTY_API virtual ~USocialPrivateMessageChannel();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_14_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialPrivateMessageChannel;

// ********** End Class USocialPrivateMessageChannel ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
