// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanAudioBaseLiveLinkSubjectSettings.h"

#ifdef METAHUMANLOCALLIVELINKSOURCE_MetaHumanAudioBaseLiveLinkSubjectSettings_generated_h
#error "MetaHumanAudioBaseLiveLinkSubjectSettings.generated.h already included, missing '#pragma once' in MetaHumanAudioBaseLiveLinkSubjectSettings.h"
#endif
#define METAHUMANLOCALLIVELINKSOURCE_MetaHumanAudioBaseLiveLinkSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioDrivenAnimationMood : uint8;

// ********** Begin Class UMetaHumanAudioBaseLiveLinkSubjectSettings *******************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLookahead); \
	DECLARE_FUNCTION(execSetLookahead); \
	DECLARE_FUNCTION(execGetMoodIntensity); \
	DECLARE_FUNCTION(execSetMoodIntensity); \
	DECLARE_FUNCTION(execGetMood); \
	DECLARE_FUNCTION(execSetMood);


struct Z_Construct_UClass_UMetaHumanAudioBaseLiveLinkSubjectSettings_Statics;
METAHUMANLOCALLIVELINKSOURCE_API UClass* Z_Construct_UClass_UMetaHumanAudioBaseLiveLinkSubjectSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanAudioBaseLiveLinkSubjectSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanAudioBaseLiveLinkSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANLOCALLIVELINKSOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanAudioBaseLiveLinkSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanAudioBaseLiveLinkSubjectSettings, UMetaHumanLocalLiveLinkSubjectSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanLocalLiveLinkSource"), Z_Construct_UClass_UMetaHumanAudioBaseLiveLinkSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanAudioBaseLiveLinkSubjectSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanAudioBaseLiveLinkSubjectSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanAudioBaseLiveLinkSubjectSettings(UMetaHumanAudioBaseLiveLinkSubjectSettings&&) = delete; \
	UMetaHumanAudioBaseLiveLinkSubjectSettings(const UMetaHumanAudioBaseLiveLinkSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanAudioBaseLiveLinkSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanAudioBaseLiveLinkSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanAudioBaseLiveLinkSubjectSettings) \
	NO_API virtual ~UMetaHumanAudioBaseLiveLinkSubjectSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_12_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanAudioBaseLiveLinkSubjectSettings;

// ********** End Class UMetaHumanAudioBaseLiveLinkSubjectSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanAudioBaseLiveLinkSubjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
