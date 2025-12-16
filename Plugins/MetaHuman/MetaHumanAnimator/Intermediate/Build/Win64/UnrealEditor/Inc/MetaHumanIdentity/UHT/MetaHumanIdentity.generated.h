// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanIdentity.h"

#ifdef METAHUMANIDENTITY_MetaHumanIdentity_generated_h
#error "MetaHumanIdentity.generated.h already included, missing '#pragma once' in MetaHumanIdentity.h"
#endif
#define METAHUMANIDENTITY_MetaHumanIdentity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMetaHumanIdentityPart;
class UMetaHumanIdentityPose;
class UMetaHumanIdentityPromotedFrame;
enum class EDNADataLayer : uint8;
enum class EIdentityErrorCode : uint8;
enum class EIdentityPoseType : uint8;
struct FColor;

// ********** Begin Class UMetaHumanIdentityThumbnailInfo ******************************************
struct Z_Construct_UClass_UMetaHumanIdentityThumbnailInfo_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentityThumbnailInfo_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentityThumbnailInfo(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentityThumbnailInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentityThumbnailInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentityThumbnailInfo, UThumbnailInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentityThumbnailInfo_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentityThumbnailInfo)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentityThumbnailInfo(UMetaHumanIdentityThumbnailInfo&&) = delete; \
	UMetaHumanIdentityThumbnailInfo(const UMetaHumanIdentityThumbnailInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentityThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentityThumbnailInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentityThumbnailInfo) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentityThumbnailInfo();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_33_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentityThumbnailInfo;

// ********** End Class UMetaHumanIdentityThumbnailInfo ********************************************

// ********** Begin Delegate FOnAutoRigServiceFinishedDynamicDelegate ******************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_81_DELEGATE \
static METAHUMANIDENTITY_API void FOnAutoRigServiceFinishedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAutoRigServiceFinishedDynamicDelegate, bool bInSuccess);


// ********** End Delegate FOnAutoRigServiceFinishedDynamicDelegate ********************************

// ********** Begin Class UMetaHumanIdentity *******************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleError); \
	DECLARE_FUNCTION(execDiagnosticsIndicatesProcessingIssue); \
	DECLARE_FUNCTION(execCreateDNAForIdentity); \
	DECLARE_FUNCTION(execIsAutoRiggingInProgress); \
	DECLARE_FUNCTION(execIsLoggedInToService); \
	DECLARE_FUNCTION(execLogInToAutoRigService); \
	DECLARE_FUNCTION(execIsFrameTrackingPipelineProcessing); \
	DECLARE_FUNCTION(execSetBlockingProcessing); \
	DECLARE_FUNCTION(execStartFrameTrackingPipeline); \
	DECLARE_FUNCTION(execCanAddPoseOfClass); \
	DECLARE_FUNCTION(execCanAddPartOfClass); \
	DECLARE_FUNCTION(execGetOrCreatePartOfClass); \
	DECLARE_FUNCTION(execFindPartOfClass);


#if WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execExportDNADataToFiles); \
	DECLARE_FUNCTION(execImportDNAFile);
#else // WITH_EDITOR
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMetaHumanIdentity_Statics;
METAHUMANIDENTITY_API UClass* Z_Construct_UClass_UMetaHumanIdentity_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanIdentity(); \
	friend struct ::Z_Construct_UClass_UMetaHumanIdentity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANIDENTITY_API UClass* ::Z_Construct_UClass_UMetaHumanIdentity_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanIdentity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanIdentity"), Z_Construct_UClass_UMetaHumanIdentity_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanIdentity)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanIdentity(UMetaHumanIdentity&&) = delete; \
	UMetaHumanIdentity(const UMetaHumanIdentity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANIDENTITY_API, UMetaHumanIdentity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanIdentity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanIdentity) \
	METAHUMANIDENTITY_API virtual ~UMetaHumanIdentity();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_65_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanIdentity;

// ********** End Class UMetaHumanIdentity *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanIdentity_Public_MetaHumanIdentity_h

// ********** Begin Enum EIdentityInvalidationState ************************************************
#define FOREACH_ENUM_EIDENTITYINVALIDATIONSTATE(op) \
	op(EIdentityInvalidationState::Solve) \
	op(EIdentityInvalidationState::AR) \
	op(EIdentityInvalidationState::FitTeeth) \
	op(EIdentityInvalidationState::PrepareForPerformance) \
	op(EIdentityInvalidationState::Valid) \
	op(EIdentityInvalidationState::None) 

enum class EIdentityInvalidationState : uint8;
template<> struct TIsUEnumClass<EIdentityInvalidationState> { enum { Value = true }; };
template<> METAHUMANIDENTITY_NON_ATTRIBUTED_API UEnum* StaticEnum<EIdentityInvalidationState>();
// ********** End Enum EIdentityInvalidationState **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
