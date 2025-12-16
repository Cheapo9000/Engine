// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanVideoBaseLiveLinkSubjectSettings.h"

#ifdef METAHUMANLOCALLIVELINKSOURCE_MetaHumanVideoBaseLiveLinkSubjectSettings_generated_h
#error "MetaHumanVideoBaseLiveLinkSubjectSettings.generated.h already included, missing '#pragma once' in MetaHumanVideoBaseLiveLinkSubjectSettings.h"
#endif
#define METAHUMANLOCALLIVELINKSOURCE_MetaHumanVideoBaseLiveLinkSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHyprsenseRealtimeNodeDebugImage : uint8;
enum class EMetaHumanVideoRotation : uint8;

// ********** Begin Class UMetaHumanVideoBaseLiveLinkSubjectSettings *******************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetMonitorImage); \
	DECLARE_FUNCTION(execSetMonitorImage); \
	DECLARE_FUNCTION(execGetHeadStabilization); \
	DECLARE_FUNCTION(execSetHeadStabilization); \
	DECLARE_FUNCTION(execGetHeadTranslation); \
	DECLARE_FUNCTION(execSetHeadTranslation); \
	DECLARE_FUNCTION(execGetHeadOrientation); \
	DECLARE_FUNCTION(execSetHeadOrientation);


struct Z_Construct_UClass_UMetaHumanVideoBaseLiveLinkSubjectSettings_Statics;
METAHUMANLOCALLIVELINKSOURCE_API UClass* Z_Construct_UClass_UMetaHumanVideoBaseLiveLinkSubjectSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanVideoBaseLiveLinkSubjectSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanVideoBaseLiveLinkSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANLOCALLIVELINKSOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanVideoBaseLiveLinkSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanVideoBaseLiveLinkSubjectSettings, UMetaHumanLocalLiveLinkSubjectSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanLocalLiveLinkSource"), Z_Construct_UClass_UMetaHumanVideoBaseLiveLinkSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanVideoBaseLiveLinkSubjectSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanVideoBaseLiveLinkSubjectSettings(UMetaHumanVideoBaseLiveLinkSubjectSettings&&) = delete; \
	UMetaHumanVideoBaseLiveLinkSubjectSettings(const UMetaHumanVideoBaseLiveLinkSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanVideoBaseLiveLinkSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanVideoBaseLiveLinkSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanVideoBaseLiveLinkSubjectSettings) \
	NO_API virtual ~UMetaHumanVideoBaseLiveLinkSubjectSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_22_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanVideoBaseLiveLinkSubjectSettings;

// ********** End Class UMetaHumanVideoBaseLiveLinkSubjectSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanLiveLink_Source_MetaHumanLocalLiveLinkSource_Public_MetaHumanVideoBaseLiveLinkSubjectSettings_h

// ********** Begin Enum EMetaHumanVideoRotation ***************************************************
#define FOREACH_ENUM_EMETAHUMANVIDEOROTATION(op) \
	op(EMetaHumanVideoRotation::Zero) \
	op(EMetaHumanVideoRotation::Ninety) \
	op(EMetaHumanVideoRotation::OneEighty) \
	op(EMetaHumanVideoRotation::TwoSeventy) 

enum class EMetaHumanVideoRotation : uint8;
template<> struct TIsUEnumClass<EMetaHumanVideoRotation> { enum { Value = true }; };
template<> METAHUMANLOCALLIVELINKSOURCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanVideoRotation>();
// ********** End Enum EMetaHumanVideoRotation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
