// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkTimeSynchronizationSource.h"

#ifdef LIVELINK_LiveLinkTimeSynchronizationSource_generated_h
#error "LiveLinkTimeSynchronizationSource.generated.h already included, missing '#pragma once' in LiveLinkTimeSynchronizationSource.h"
#endif
#define LIVELINK_LiveLinkTimeSynchronizationSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkTimeSynchronizationSource ***************************************
struct Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTimeSynchronizationSource(); \
	friend struct ::Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkTimeSynchronizationSource, UTimeSynchronizationSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkTimeSynchronizationSource)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkTimeSynchronizationSource(ULiveLinkTimeSynchronizationSource&&) = delete; \
	ULiveLinkTimeSynchronizationSource(const ULiveLinkTimeSynchronizationSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkTimeSynchronizationSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTimeSynchronizationSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkTimeSynchronizationSource) \
	LIVELINK_API virtual ~ULiveLinkTimeSynchronizationSource();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_13_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkTimeSynchronizationSource;

// ********** End Class ULiveLinkTimeSynchronizationSource *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimeSynchronizationSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
