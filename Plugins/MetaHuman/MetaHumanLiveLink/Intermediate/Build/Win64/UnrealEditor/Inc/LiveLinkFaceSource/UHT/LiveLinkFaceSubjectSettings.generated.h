// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceSubjectSettings.h"

#ifdef LIVELINKFACESOURCE_LiveLinkFaceSubjectSettings_generated_h
#error "LiveLinkFaceSubjectSettings.generated.h already included, missing '#pragma once' in LiveLinkFaceSubjectSettings.h"
#endif
#define LIVELINKFACESOURCE_LiveLinkFaceSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkFaceSubjectSettings *********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeadTranslation); \
	DECLARE_FUNCTION(execSetHeadTranslation); \
	DECLARE_FUNCTION(execGetHeadOrientation); \
	DECLARE_FUNCTION(execSetHeadOrientation);


struct Z_Construct_UClass_ULiveLinkFaceSubjectSettings_Statics;
LIVELINKFACESOURCE_API UClass* Z_Construct_UClass_ULiveLinkFaceSubjectSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceSubjectSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKFACESOURCE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceSubjectSettings, UMetaHumanLiveLinkSubjectSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkFaceSource"), Z_Construct_UClass_ULiveLinkFaceSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceSubjectSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceSubjectSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceSubjectSettings(ULiveLinkFaceSubjectSettings&&) = delete; \
	ULiveLinkFaceSubjectSettings(const ULiveLinkFaceSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkFaceSubjectSettings) \
	NO_API virtual ~ULiveLinkFaceSubjectSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_9_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceSubjectSettings;

// ********** End Class ULiveLinkFaceSubjectSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_LiveLinkFaceSource_Private_LiveLinkFaceSubjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
