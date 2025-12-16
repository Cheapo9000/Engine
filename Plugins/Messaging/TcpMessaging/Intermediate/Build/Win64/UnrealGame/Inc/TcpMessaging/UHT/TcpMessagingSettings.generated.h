// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/TcpMessagingSettings.h"

#ifdef TCPMESSAGING_TcpMessagingSettings_generated_h
#error "TcpMessagingSettings.generated.h already included, missing '#pragma once' in TcpMessagingSettings.h"
#endif
#define TCPMESSAGING_TcpMessagingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTcpMessagingSettings ****************************************************
struct Z_Construct_UClass_UTcpMessagingSettings_Statics;
TCPMESSAGING_API UClass* Z_Construct_UClass_UTcpMessagingSettings_NoRegister();

#define FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTcpMessagingSettings(); \
	friend struct ::Z_Construct_UClass_UTcpMessagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TCPMESSAGING_API UClass* ::Z_Construct_UClass_UTcpMessagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTcpMessagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TcpMessaging"), Z_Construct_UClass_UTcpMessagingSettings_NoRegister) \
	DECLARE_SERIALIZER(UTcpMessagingSettings)


#define FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTcpMessagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTcpMessagingSettings(UTcpMessagingSettings&&) = delete; \
	UTcpMessagingSettings(const UTcpMessagingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpMessagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpMessagingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTcpMessagingSettings) \
	NO_API virtual ~UTcpMessagingSettings();


#define FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_8_PROLOG
#define FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTcpMessagingSettings;

// ********** End Class UTcpMessagingSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
