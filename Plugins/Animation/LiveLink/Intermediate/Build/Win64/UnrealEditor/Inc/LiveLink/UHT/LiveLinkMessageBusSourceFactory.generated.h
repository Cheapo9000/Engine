// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessageBusSourceFactory.h"

#ifdef LIVELINK_LiveLinkMessageBusSourceFactory_generated_h
#error "LiveLinkMessageBusSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkMessageBusSourceFactory.h"
#endif
#define LIVELINK_LiveLinkMessageBusSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkMessageBusSourceFactory *****************************************
struct Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkMessageBusSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusSourceFactory)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkMessageBusSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkMessageBusSourceFactory(ULiveLinkMessageBusSourceFactory&&) = delete; \
	ULiveLinkMessageBusSourceFactory(const ULiveLinkMessageBusSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkMessageBusSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMessageBusSourceFactory) \
	LIVELINK_API virtual ~ULiveLinkMessageBusSourceFactory();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkMessageBusSourceFactory;

// ********** End Class ULiveLinkMessageBusSourceFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
