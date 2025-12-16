// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialPartyChatRoom.h"

#ifdef PARTY_SocialPartyChatRoom_generated_h
#error "SocialPartyChatRoom.generated.h already included, missing '#pragma once' in SocialPartyChatRoom.h"
#endif
#define PARTY_SocialPartyChatRoom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialPartyChatRoom *****************************************************
struct Z_Construct_UClass_USocialPartyChatRoom_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialPartyChatRoom_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialPartyChatRoom(); \
	friend struct ::Z_Construct_UClass_USocialPartyChatRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialPartyChatRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialPartyChatRoom, USocialChatRoom, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialPartyChatRoom_NoRegister) \
	DECLARE_SERIALIZER(USocialPartyChatRoom)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PARTY_API USocialPartyChatRoom(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialPartyChatRoom(USocialPartyChatRoom&&) = delete; \
	USocialPartyChatRoom(const USocialPartyChatRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialPartyChatRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialPartyChatRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialPartyChatRoom) \
	PARTY_API virtual ~USocialPartyChatRoom();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_17_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialPartyChatRoom;

// ********** End Class USocialPartyChatRoom *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
