// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialGroupChannel.h"

#ifdef PARTY_SocialGroupChannel_generated_h
#error "SocialGroupChannel.generated.h already included, missing '#pragma once' in SocialGroupChannel.h"
#endif
#define PARTY_SocialGroupChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialGroupChannel ******************************************************
struct Z_Construct_UClass_USocialGroupChannel_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialGroupChannel(); \
	friend struct ::Z_Construct_UClass_USocialGroupChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialGroupChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialGroupChannel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialGroupChannel_NoRegister) \
	DECLARE_SERIALIZER(USocialGroupChannel)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialGroupChannel(USocialGroupChannel&&) = delete; \
	USocialGroupChannel(const USocialGroupChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialGroupChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialGroupChannel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialGroupChannel) \
	PARTY_API virtual ~USocialGroupChannel();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_16_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialGroupChannel;

// ********** End Class USocialGroupChannel ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
