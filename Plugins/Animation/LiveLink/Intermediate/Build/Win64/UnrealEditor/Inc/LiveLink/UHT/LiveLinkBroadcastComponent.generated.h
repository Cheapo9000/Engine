// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkBroadcastComponent.h"

#ifdef LIVELINK_LiveLinkBroadcastComponent_generated_h
#error "LiveLinkBroadcastComponent.generated.h already included, missing '#pragma once' in LiveLinkBroadcastComponent.h"
#endif
#define LIVELINK_LiveLinkBroadcastComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkBroadcastComponent **********************************************
struct Z_Construct_UClass_ULiveLinkBroadcastComponent_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBroadcastComponent_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBroadcastComponent(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBroadcastComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkBroadcastComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBroadcastComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkBroadcastComponent_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBroadcastComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBroadcastComponent(ULiveLinkBroadcastComponent&&) = delete; \
	ULiveLinkBroadcastComponent(const ULiveLinkBroadcastComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBroadcastComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBroadcastComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkBroadcastComponent) \
	NO_API virtual ~ULiveLinkBroadcastComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_16_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBroadcastComponent;

// ********** End Class ULiveLinkBroadcastComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBroadcastComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
