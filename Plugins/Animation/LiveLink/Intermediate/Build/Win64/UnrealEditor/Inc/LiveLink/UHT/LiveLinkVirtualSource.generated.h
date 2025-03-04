// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkVirtualSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkVirtualSource_generated_h
#error "LiveLinkVirtualSource.generated.h already included, missing '#pragma once' in LiveLinkVirtualSource.h"
#endif
#define LIVELINK_LiveLinkVirtualSource_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkVirtualSubjectSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkVirtualSubjectSourceSettings)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkVirtualSubjectSourceSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkVirtualSubjectSourceSettings(ULiveLinkVirtualSubjectSourceSettings&&); \
	ULiveLinkVirtualSubjectSourceSettings(const ULiveLinkVirtualSubjectSourceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkVirtualSubjectSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkVirtualSubjectSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkVirtualSubjectSourceSettings) \
	NO_API virtual ~ULiveLinkVirtualSubjectSourceSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_39_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkVirtualSubjectSourceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
