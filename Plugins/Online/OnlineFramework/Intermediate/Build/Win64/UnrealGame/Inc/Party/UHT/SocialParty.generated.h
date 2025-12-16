// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Party/SocialParty.h"

#ifdef PARTY_SocialParty_generated_h
#error "SocialParty.generated.h already included, missing '#pragma once' in SocialParty.h"
#endif
#define PARTY_SocialParty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPartyRepData *****************************************************
struct Z_Construct_UScriptStruct_FPartyRepData_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyRepData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct(); \
	typedef FOnlinePartyRepDataBase Super;


struct FPartyRepData;
// ********** End ScriptStruct FPartyRepData *******************************************************

// ********** Begin Class USocialParty *************************************************************
struct Z_Construct_UClass_USocialParty_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialParty_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialParty(); \
	friend struct ::Z_Construct_UClass_USocialParty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialParty_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialParty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialParty_NoRegister) \
	DECLARE_SERIALIZER(USocialParty) \
	DECLARE_WITHIN(USocialManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialParty(USocialParty&&) = delete; \
	USocialParty(const USocialParty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialParty); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USocialParty) \
	PARTY_API virtual ~USocialParty();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_95_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialParty;

// ********** End Class USocialParty ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
