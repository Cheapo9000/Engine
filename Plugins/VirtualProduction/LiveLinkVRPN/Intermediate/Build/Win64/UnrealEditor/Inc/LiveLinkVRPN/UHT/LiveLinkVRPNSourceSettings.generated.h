// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkVRPNSourceSettings.h"

#ifdef LIVELINKVRPN_LiveLinkVRPNSourceSettings_generated_h
#error "LiveLinkVRPNSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkVRPNSourceSettings.h"
#endif
#define LIVELINKVRPN_LiveLinkVRPNSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkVRPNSourceSettings **********************************************
struct Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics;
LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkVRPNSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKVRPN_API UClass* ::Z_Construct_UClass_ULiveLinkVRPNSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkVRPNSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkVRPN"), Z_Construct_UClass_ULiveLinkVRPNSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkVRPNSourceSettings)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkVRPNSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkVRPNSourceSettings(ULiveLinkVRPNSourceSettings&&) = delete; \
	ULiveLinkVRPNSourceSettings(const ULiveLinkVRPNSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkVRPNSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkVRPNSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkVRPNSourceSettings) \
	NO_API virtual ~ULiveLinkVRPNSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkVRPNSourceSettings;

// ********** End Class ULiveLinkVRPNSourceSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
