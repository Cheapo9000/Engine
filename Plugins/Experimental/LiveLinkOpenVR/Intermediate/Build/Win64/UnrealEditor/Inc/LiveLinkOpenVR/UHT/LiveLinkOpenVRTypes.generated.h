// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkOpenVRTypes.h"

#ifdef LIVELINKOPENVR_LiveLinkOpenVRTypes_generated_h
#error "LiveLinkOpenVRTypes.generated.h already included, missing '#pragma once' in LiveLinkOpenVRTypes.h"
#endif
#define LIVELINKOPENVR_LiveLinkOpenVRTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkOpenVRCommonSettings *************************************
struct Z_Construct_UScriptStruct_FLiveLinkOpenVRCommonSettings_Statics;
#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkOpenVRCommonSettings_Statics; \
	LIVELINKOPENVR_API static class UScriptStruct* StaticStruct();


struct FLiveLinkOpenVRCommonSettings;
// ********** End ScriptStruct FLiveLinkOpenVRCommonSettings ***************************************

// ********** Begin ScriptStruct FLiveLinkOpenVRConnectionSettings *********************************
struct Z_Construct_UScriptStruct_FLiveLinkOpenVRConnectionSettings_Statics;
#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkOpenVRConnectionSettings_Statics; \
	LIVELINKOPENVR_API static class UScriptStruct* StaticStruct();


struct FLiveLinkOpenVRConnectionSettings;
// ********** End ScriptStruct FLiveLinkOpenVRConnectionSettings ***********************************

// ********** Begin Class ULiveLinkOpenVRSourceSettings ********************************************
struct Z_Construct_UClass_ULiveLinkOpenVRSourceSettings_Statics;
LIVELINKOPENVR_API UClass* Z_Construct_UClass_ULiveLinkOpenVRSourceSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkOpenVRSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkOpenVRSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKOPENVR_API UClass* ::Z_Construct_UClass_ULiveLinkOpenVRSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkOpenVRSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkOpenVR"), Z_Construct_UClass_ULiveLinkOpenVRSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkOpenVRSourceSettings)


#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkOpenVRSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkOpenVRSourceSettings(ULiveLinkOpenVRSourceSettings&&) = delete; \
	ULiveLinkOpenVRSourceSettings(const ULiveLinkOpenVRSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkOpenVRSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkOpenVRSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkOpenVRSourceSettings) \
	NO_API virtual ~ULiveLinkOpenVRSourceSettings();


#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkOpenVRSourceSettings;

// ********** End Class ULiveLinkOpenVRSourceSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkOpenVR_Source_LiveLinkOpenVR_Private_LiveLinkOpenVRTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
