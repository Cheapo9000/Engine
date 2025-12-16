// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessageBusFinder.h"

#ifdef LIVELINK_LiveLinkMessageBusFinder_generated_h
#error "LiveLinkMessageBusFinder.generated.h already included, missing '#pragma once' in LiveLinkMessageBusFinder.h"
#endif
#define LIVELINK_LiveLinkMessageBusFinder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkMessageBusFinder;
class UObject;
struct FLatentActionInfo;
struct FLiveLinkSourceHandle;
struct FProviderPollResult;

// ********** Begin ScriptStruct FProviderPollResult ***********************************************
struct Z_Construct_UScriptStruct_FProviderPollResult_Statics;
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProviderPollResult_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


struct FProviderPollResult;
// ********** End ScriptStruct FProviderPollResult *************************************************

// ********** Begin Class ULiveLinkMessageBusFinder ************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct ::Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&) = delete; \
	ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkMessageBusFinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	LIVELINK_API virtual ~ULiveLinkMessageBusFinder();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_90_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkMessageBusFinder;

// ********** End Class ULiveLinkMessageBusFinder **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
