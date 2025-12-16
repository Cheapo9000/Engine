// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recording/LiveLinkHubPlaybackSourceFactory.h"

#ifdef LIVELINKHUB_LiveLinkHubPlaybackSourceFactory_generated_h
#error "LiveLinkHubPlaybackSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkHubPlaybackSourceFactory.h"
#endif
#define LIVELINKHUB_LiveLinkHubPlaybackSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubPlaybackSourceFactory ****************************************
struct Z_Construct_UClass_ULiveLinkHubPlaybackSourceFactory_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkHubPlaybackSourceFactory_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubPlaybackSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubPlaybackSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkHubPlaybackSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubPlaybackSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkHubPlaybackSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubPlaybackSourceFactory)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubPlaybackSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubPlaybackSourceFactory(ULiveLinkHubPlaybackSourceFactory&&) = delete; \
	ULiveLinkHubPlaybackSourceFactory(const ULiveLinkHubPlaybackSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubPlaybackSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubPlaybackSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubPlaybackSourceFactory) \
	NO_API virtual ~ULiveLinkHubPlaybackSourceFactory();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubPlaybackSourceFactory;

// ********** End Class ULiveLinkHubPlaybackSourceFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
