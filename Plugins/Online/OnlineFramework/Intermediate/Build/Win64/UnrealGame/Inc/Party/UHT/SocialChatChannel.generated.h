// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialChatChannel.h"

#ifdef PARTY_SocialChatChannel_generated_h
#error "SocialChatChannel.generated.h already included, missing '#pragma once' in SocialChatChannel.h"
#endif
#define PARTY_SocialChatChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialChatChannel *******************************************************
struct Z_Construct_UClass_USocialChatChannel_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatChannel(); \
	friend struct ::Z_Construct_UClass_USocialChatChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialChatChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialChatChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialChatChannel_NoRegister) \
	DECLARE_SERIALIZER(USocialChatChannel) \
	DECLARE_WITHIN(USocialChatManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialChatChannel(USocialChatChannel&&) = delete; \
	USocialChatChannel(const USocialChatChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialChatChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatChannel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USocialChatChannel) \
	PARTY_API virtual ~USocialChatChannel();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_29_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialChatChannel;

// ********** End Class USocialChatChannel *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h

// ********** Begin Enum ESocialChannelType ********************************************************
#define FOREACH_ENUM_ESOCIALCHANNELTYPE(op) \
	op(ESocialChannelType::General) \
	op(ESocialChannelType::Founder) \
	op(ESocialChannelType::Party) \
	op(ESocialChannelType::Team) \
	op(ESocialChannelType::System) \
	op(ESocialChannelType::Private) 

enum class ESocialChannelType : uint8;
template<> struct TIsUEnumClass<ESocialChannelType> { enum { Value = true }; };
template<> PARTY_NON_ATTRIBUTED_API UEnum* StaticEnum<ESocialChannelType>();
// ********** End Enum ESocialChannelType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
