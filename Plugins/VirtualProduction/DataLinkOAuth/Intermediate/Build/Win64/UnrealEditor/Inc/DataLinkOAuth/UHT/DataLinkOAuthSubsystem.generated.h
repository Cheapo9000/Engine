// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkOAuthSubsystem.h"

#ifdef DATALINKOAUTH_DataLinkOAuthSubsystem_generated_h
#error "DataLinkOAuthSubsystem.generated.h already included, missing '#pragma once' in DataLinkOAuthSubsystem.h"
#endif
#define DATALINKOAUTH_DataLinkOAuthSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkOAuthSubsystem **************************************************
struct Z_Construct_UClass_UDataLinkOAuthSubsystem_Statics;
DATALINKOAUTH_API UClass* Z_Construct_UClass_UDataLinkOAuthSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkOAuthSubsystem(); \
	friend struct ::Z_Construct_UClass_UDataLinkOAuthSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKOAUTH_API UClass* ::Z_Construct_UClass_UDataLinkOAuthSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkOAuthSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkOAuth"), Z_Construct_UClass_UDataLinkOAuthSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkOAuthSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKOAUTH_API UDataLinkOAuthSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkOAuthSubsystem(UDataLinkOAuthSubsystem&&) = delete; \
	UDataLinkOAuthSubsystem(const UDataLinkOAuthSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKOAUTH_API, UDataLinkOAuthSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkOAuthSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkOAuthSubsystem) \
	DATALINKOAUTH_API virtual ~UDataLinkOAuthSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkOAuthSubsystem;

// ********** End Class UDataLinkOAuthSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLinkOAuth_Source_DataLinkOAuth_Public_DataLinkOAuthSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
