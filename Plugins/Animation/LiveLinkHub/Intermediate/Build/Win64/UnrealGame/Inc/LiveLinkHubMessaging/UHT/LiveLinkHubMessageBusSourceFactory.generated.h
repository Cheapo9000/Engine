// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubMessageBusSourceFactory.h"

#ifdef LIVELINKHUBMESSAGING_LiveLinkHubMessageBusSourceFactory_generated_h
#error "LiveLinkHubMessageBusSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkHubMessageBusSourceFactory.h"
#endif
#define LIVELINKHUBMESSAGING_LiveLinkHubMessageBusSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubMessageBusSourceFactory **************************************
struct Z_Construct_UClass_ULiveLinkHubMessageBusSourceFactory_Statics;
LIVELINKHUBMESSAGING_API UClass* Z_Construct_UClass_ULiveLinkHubMessageBusSourceFactory_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubMessageBusSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubMessageBusSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUBMESSAGING_API UClass* ::Z_Construct_UClass_ULiveLinkHubMessageBusSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubMessageBusSourceFactory, ULiveLinkMessageBusSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkHubMessaging"), Z_Construct_UClass_ULiveLinkHubMessageBusSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubMessageBusSourceFactory)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKHUBMESSAGING_API ULiveLinkHubMessageBusSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubMessageBusSourceFactory(ULiveLinkHubMessageBusSourceFactory&&) = delete; \
	ULiveLinkHubMessageBusSourceFactory(const ULiveLinkHubMessageBusSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKHUBMESSAGING_API, ULiveLinkHubMessageBusSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubMessageBusSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubMessageBusSourceFactory) \
	LIVELINKHUBMESSAGING_API virtual ~ULiveLinkHubMessageBusSourceFactory();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubMessageBusSourceFactory;

// ********** End Class ULiveLinkHubMessageBusSourceFactory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Private_LiveLinkHubMessageBusSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
