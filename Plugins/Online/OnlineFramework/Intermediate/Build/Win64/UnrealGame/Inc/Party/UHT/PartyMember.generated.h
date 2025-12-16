// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Party/PartyMember.h"

#ifdef PARTY_PartyMember_generated_h
#error "PartyMember.generated.h already included, missing '#pragma once' in PartyMember.h"
#endif
#define PARTY_PartyMember_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPartyMemberPlatformData ******************************************
struct Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FPartyMemberPlatformData;
// ********** End ScriptStruct FPartyMemberPlatformData ********************************************

// ********** Begin ScriptStruct FPartyMemberJoinInProgressRequest *********************************
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FPartyMemberJoinInProgressRequest;
// ********** End ScriptStruct FPartyMemberJoinInProgressRequest ***********************************

// ********** Begin ScriptStruct FPartyMemberJoinInProgressResponse ********************************
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FPartyMemberJoinInProgressResponse;
// ********** End ScriptStruct FPartyMemberJoinInProgressResponse **********************************

// ********** Begin ScriptStruct FPartyMemberJoinInProgressData ************************************
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FPartyMemberJoinInProgressData;
// ********** End ScriptStruct FPartyMemberJoinInProgressData **************************************

// ********** Begin ScriptStruct FPartyMemberRepData ***********************************************
struct Z_Construct_UScriptStruct_FPartyMemberRepData_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyMemberRepData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct(); \
	typedef FOnlinePartyRepDataBase Super;


struct FPartyMemberRepData;
// ********** End ScriptStruct FPartyMemberRepData *************************************************

// ********** Begin Class UPartyMember *************************************************************
struct Z_Construct_UClass_UPartyMember_Statics;
PARTY_API UClass* Z_Construct_UClass_UPartyMember_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartyMember(); \
	friend struct ::Z_Construct_UClass_UPartyMember_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_UPartyMember_NoRegister(); \
public: \
	DECLARE_CLASS2(UPartyMember, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_UPartyMember_NoRegister) \
	DECLARE_SERIALIZER(UPartyMember) \
	DECLARE_WITHIN(USocialParty) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_187_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPartyMember(UPartyMember&&) = delete; \
	UPartyMember(const UPartyMember&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, UPartyMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyMember); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPartyMember) \
	PARTY_API virtual ~UPartyMember();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_184_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPartyMember;

// ********** End Class UPartyMember ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
