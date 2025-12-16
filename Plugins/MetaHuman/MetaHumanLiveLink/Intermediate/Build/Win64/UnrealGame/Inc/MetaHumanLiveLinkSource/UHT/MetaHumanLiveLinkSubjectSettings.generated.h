// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanLiveLinkSubjectSettings.h"

#ifdef METAHUMANLIVELINKSOURCE_MetaHumanLiveLinkSubjectSettings_generated_h
#error "MetaHumanLiveLinkSubjectSettings.generated.h already included, missing '#pragma once' in MetaHumanLiveLinkSubjectSettings.h"
#endif
#define METAHUMANLIVELINKSOURCE_MetaHumanLiveLinkSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanRealtimeSmoothingParams;

// ********** Begin Class UMetaHumanLiveLinkSubjectSettings ****************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureNeutralHeadPose); \
	DECLARE_FUNCTION(execCaptureNeutralFrame); \
	DECLARE_FUNCTION(execCaptureNeutrals); \
	DECLARE_FUNCTION(execGetNeutralHeadOrientation); \
	DECLARE_FUNCTION(execSetNeutralHeadOrientation); \
	DECLARE_FUNCTION(execGetNeutralHeadTranslation); \
	DECLARE_FUNCTION(execSetNeutralHeadTranslation); \
	DECLARE_FUNCTION(execGetSmoothing); \
	DECLARE_FUNCTION(execSetSmoothing); \
	DECLARE_FUNCTION(execGetCalibrationNeutralFrame); \
	DECLARE_FUNCTION(execSetCalibrationNeutralFrame); \
	DECLARE_FUNCTION(execGetCalibrationAlpha); \
	DECLARE_FUNCTION(execSetCalibrationAlpha); \
	DECLARE_FUNCTION(execGetCalibrationProperties); \
	DECLARE_FUNCTION(execSetCalibrationProperties);


struct Z_Construct_UClass_UMetaHumanLiveLinkSubjectSettings_Statics;
METAHUMANLIVELINKSOURCE_API UClass* Z_Construct_UClass_UMetaHumanLiveLinkSubjectSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanLiveLinkSubjectSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanLiveLinkSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANLIVELINKSOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanLiveLinkSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanLiveLinkSubjectSettings, ULiveLinkHubSubjectSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanLiveLinkSource"), Z_Construct_UClass_UMetaHumanLiveLinkSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanLiveLinkSubjectSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanLiveLinkSubjectSettings(UMetaHumanLiveLinkSubjectSettings&&) = delete; \
	UMetaHumanLiveLinkSubjectSettings(const UMetaHumanLiveLinkSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanLiveLinkSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanLiveLinkSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanLiveLinkSubjectSettings) \
	NO_API virtual ~UMetaHumanLiveLinkSubjectSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_14_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanLiveLinkSubjectSettings;

// ********** End Class UMetaHumanLiveLinkSubjectSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLiveLinkSource_Public_MetaHumanLiveLinkSubjectSettings_h

// ********** Begin Enum EMetaHumanLiveLinkHeadPoseMode ********************************************
#define FOREACH_ENUM_EMETAHUMANLIVELINKHEADPOSEMODE(op) \
	op(EMetaHumanLiveLinkHeadPoseMode::None) \
	op(EMetaHumanLiveLinkHeadPoseMode::CameraRelativeTranslation) \
	op(EMetaHumanLiveLinkHeadPoseMode::Orientation) 

enum class EMetaHumanLiveLinkHeadPoseMode : uint8;
template<> struct TIsUEnumClass<EMetaHumanLiveLinkHeadPoseMode> { enum { Value = true }; };
template<> METAHUMANLIVELINKSOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanLiveLinkHeadPoseMode>();
// ********** End Enum EMetaHumanLiveLinkHeadPoseMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
