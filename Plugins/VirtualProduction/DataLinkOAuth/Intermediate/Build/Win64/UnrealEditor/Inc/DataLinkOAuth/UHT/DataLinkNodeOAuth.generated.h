// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkNodeOAuth.h"

#ifdef DATALINKOAUTH_DataLinkNodeOAuth_generated_h
#error "DataLinkNodeOAuth.generated.h already included, missing '#pragma once' in DataLinkNodeOAuth.h"
#endif
#define DATALINKOAUTH_DataLinkNodeOAuth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataLinkOAuthSettingsWrapper *************************************
struct Z_Construct_UScriptStruct_FDataLinkOAuthSettingsWrapper_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkOAuthSettingsWrapper_Statics; \
	DATALINKOAUTH_API static class UScriptStruct* StaticStruct();


struct FDataLinkOAuthSettingsWrapper;
// ********** End ScriptStruct FDataLinkOAuthSettingsWrapper ***************************************

// ********** Begin Class UDataLinkNodeOAuth *******************************************************
struct Z_Construct_UClass_UDataLinkNodeOAuth_Statics;
DATALINKOAUTH_API UClass* Z_Construct_UClass_UDataLinkNodeOAuth_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkNodeOAuth(); \
	friend struct ::Z_Construct_UClass_UDataLinkNodeOAuth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKOAUTH_API UClass* ::Z_Construct_UClass_UDataLinkNodeOAuth_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkNodeOAuth, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkOAuth"), Z_Construct_UClass_UDataLinkNodeOAuth_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkNodeOAuth)


#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkNodeOAuth(UDataLinkNodeOAuth&&) = delete; \
	UDataLinkNodeOAuth(const UDataLinkNodeOAuth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKOAUTH_API, UDataLinkNodeOAuth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkNodeOAuth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkNodeOAuth) \
	DATALINKOAUTH_API virtual ~UDataLinkNodeOAuth();


#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkNodeOAuth;

// ********** End Class UDataLinkNodeOAuth *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkNodeOAuth_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
