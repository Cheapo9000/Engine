// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkXRSourceSettings.h"

#ifdef LIVELINKXR_LiveLinkXRSourceSettings_generated_h
#error "LiveLinkXRSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkXRSourceSettings.h"
#endif
#define LIVELINKXR_LiveLinkXRSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkXRSourceSettings ************************************************
struct Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics;
LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkXRSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKXR_API UClass* ::Z_Construct_UClass_ULiveLinkXRSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkXRSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkXR"), Z_Construct_UClass_ULiveLinkXRSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkXRSourceSettings)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkXRSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkXRSourceSettings(ULiveLinkXRSourceSettings&&) = delete; \
	ULiveLinkXRSourceSettings(const ULiveLinkXRSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkXRSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkXRSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkXRSourceSettings) \
	NO_API virtual ~ULiveLinkXRSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkXRSourceSettings;

// ********** End Class ULiveLinkXRSourceSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
