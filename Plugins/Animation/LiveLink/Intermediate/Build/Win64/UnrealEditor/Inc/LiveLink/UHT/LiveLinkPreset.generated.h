// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkPreset.h"

#ifdef LIVELINK_LiveLinkPreset_generated_h
#error "LiveLinkPreset.generated.h already included, missing '#pragma once' in LiveLinkPreset.h"
#endif
#define LIVELINK_LiveLinkPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;

// ********** Begin Class ULiveLinkPreset **********************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildFromClient); \
	DECLARE_FUNCTION(execAddToClient); \
	DECLARE_FUNCTION(execApplyToClientLatent); \
	DECLARE_FUNCTION(execApplyToClient);


struct Z_Construct_UClass_ULiveLinkPreset_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkPreset(); \
	friend struct ::Z_Construct_UClass_ULiveLinkPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkPreset_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkPreset)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkPreset(ULiveLinkPreset&&) = delete; \
	ULiveLinkPreset(const ULiveLinkPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkPreset)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkPreset;

// ********** End Class ULiveLinkPreset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
