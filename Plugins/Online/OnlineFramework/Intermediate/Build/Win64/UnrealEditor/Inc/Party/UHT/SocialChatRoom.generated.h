// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialChatRoom.h"

#ifdef PARTY_SocialChatRoom_generated_h
#error "SocialChatRoom.generated.h already included, missing '#pragma once' in SocialChatRoom.h"
#endif
#define PARTY_SocialChatRoom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialChatRoom **********************************************************
struct Z_Construct_UClass_USocialChatRoom_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialChatRoom_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatRoom(); \
	friend struct ::Z_Construct_UClass_USocialChatRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialChatRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialChatRoom, USocialChatChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialChatRoom_NoRegister) \
	DECLARE_SERIALIZER(USocialChatRoom)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARTY_API USocialChatRoom(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialChatRoom(USocialChatRoom&&) = delete; \
	USocialChatRoom(const USocialChatRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialChatRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialChatRoom) \
	PARTY_API virtual ~USocialChatRoom();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialChatRoom;

// ********** End Class USocialChatRoom ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
