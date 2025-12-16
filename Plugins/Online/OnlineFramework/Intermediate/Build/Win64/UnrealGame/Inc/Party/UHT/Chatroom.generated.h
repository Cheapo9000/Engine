// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chatroom.h"

#ifdef PARTY_Chatroom_generated_h
#error "Chatroom.generated.h already included, missing '#pragma once' in Chatroom.h"
#endif
#define PARTY_Chatroom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChatroom ****************************************************************
struct Z_Construct_UClass_UChatroom_Statics;
PARTY_API UClass* Z_Construct_UClass_UChatroom_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatroom(); \
	friend struct ::Z_Construct_UClass_UChatroom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_UChatroom_NoRegister(); \
public: \
	DECLARE_CLASS2(UChatroom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_UChatroom_NoRegister) \
	DECLARE_SERIALIZER(UChatroom) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChatroom(UChatroom&&) = delete; \
	UChatroom(const UChatroom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, UChatroom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatroom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChatroom) \
	PARTY_API virtual ~UChatroom();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_32_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChatroom;

// ********** End Class UChatroom ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
