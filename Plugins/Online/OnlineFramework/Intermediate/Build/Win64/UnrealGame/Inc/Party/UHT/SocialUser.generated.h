// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "User/SocialUser.h"

#ifdef PARTY_SocialUser_generated_h
#error "SocialUser.generated.h already included, missing '#pragma once' in SocialUser.h"
#endif
#define PARTY_SocialUser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialUser **************************************************************
struct Z_Construct_UClass_USocialUser_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialUser(); \
	friend struct ::Z_Construct_UClass_USocialUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialUser_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialUser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialUser_NoRegister) \
	DECLARE_SERIALIZER(USocialUser) \
	DECLARE_WITHIN(USocialToolkit)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialUser(USocialUser&&) = delete; \
	USocialUser(const USocialUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialUser) \
	PARTY_API virtual ~USocialUser();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_38_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialUser;

// ********** End Class USocialUser ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
