// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineSessionClient.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h
#error "OnlineSessionClient.generated.h already included, missing '#pragma once' in OnlineSessionClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineSessionClient *****************************************************
struct Z_Construct_UClass_UOnlineSessionClient_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionClient(); \
	friend struct ::Z_Construct_UClass_UOnlineSessionClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlineSessionClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineSessionClient, UOnlineSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlineSessionClient_NoRegister) \
	DECLARE_SERIALIZER(UOnlineSessionClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UOnlineSessionClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UOnlineSessionClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionClient); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineSessionClient(UOnlineSessionClient&&) = delete; \
	UOnlineSessionClient(const UOnlineSessionClient&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UOnlineSessionClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_22_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineSessionClient;

// ********** End Class UOnlineSessionClient *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
