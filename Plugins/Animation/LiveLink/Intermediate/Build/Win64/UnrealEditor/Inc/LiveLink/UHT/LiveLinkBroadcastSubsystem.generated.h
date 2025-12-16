// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkBroadcastSubsystem.h"

#ifdef LIVELINK_LiveLinkBroadcastSubsystem_generated_h
#error "LiveLinkBroadcastSubsystem.generated.h already included, missing '#pragma once' in LiveLinkBroadcastSubsystem.h"
#endif
#define LIVELINK_LiveLinkBroadcastSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkBroadcastSubsystem **********************************************
struct Z_Construct_UClass_ULiveLinkBroadcastSubsystem_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBroadcastSubsystem_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBroadcastSubsystem(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBroadcastSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkBroadcastSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBroadcastSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkBroadcastSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBroadcastSubsystem)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkBroadcastSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBroadcastSubsystem(ULiveLinkBroadcastSubsystem&&) = delete; \
	ULiveLinkBroadcastSubsystem(const ULiveLinkBroadcastSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBroadcastSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBroadcastSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkBroadcastSubsystem) \
	NO_API virtual ~ULiveLinkBroadcastSubsystem();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBroadcastSubsystem;

// ********** End Class ULiveLinkBroadcastSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkBroadcastSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
