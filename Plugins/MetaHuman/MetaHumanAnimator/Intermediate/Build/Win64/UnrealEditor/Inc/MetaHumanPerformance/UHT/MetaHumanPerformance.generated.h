// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanPerformance.h"

#ifdef METAHUMANPERFORMANCE_MetaHumanPerformance_generated_h
#error "MetaHumanPerformance.generated.h already included, missing '#pragma once' in MetaHumanPerformance.h"
#endif
#define METAHUMANPERFORMANCE_MetaHumanPerformance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPerformanceExportRange : uint8;
enum class EStartPipelineErrorType : uint8;
struct FFrameAnimationData;

// ********** Begin Delegate FOnProcessingFinishedDynamic ******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_98_DELEGATE \
static METAHUMANPERFORMANCE_API void FOnProcessingFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnProcessingFinishedDynamic);


// ********** End Delegate FOnProcessingFinishedDynamic ********************************************

// ********** Begin Class UMetaHumanPerformance ****************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumberOfProcessedFrames); \
	DECLARE_FUNCTION(execGetAnimationData); \
	DECLARE_FUNCTION(execContainsAnimationData); \
	DECLARE_FUNCTION(execSetBlockingProcessing); \
	DECLARE_FUNCTION(execCanProcess); \
	DECLARE_FUNCTION(execIsProcessing); \
	DECLARE_FUNCTION(execCancelPipeline); \
	DECLARE_FUNCTION(execStartPipeline); \
	DECLARE_FUNCTION(execDiagnosticsIndicatesProcessingIssue); \
	DECLARE_FUNCTION(execExportAnimation); \
	DECLARE_FUNCTION(execCanExportAnimation);


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaHumanPerformance, METAHUMANPERFORMANCE_API)


struct Z_Construct_UClass_UMetaHumanPerformance_Statics;
METAHUMANPERFORMANCE_API UClass* Z_Construct_UClass_UMetaHumanPerformance_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPerformance(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPerformance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANPERFORMANCE_API UClass* ::Z_Construct_UClass_UMetaHumanPerformance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPerformance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanPerformance"), Z_Construct_UClass_UMetaHumanPerformance_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPerformance) \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_ARCHIVESERIALIZER


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPerformance(UMetaHumanPerformance&&) = delete; \
	UMetaHumanPerformance(const UMetaHumanPerformance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANPERFORMANCE_API, UMetaHumanPerformance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPerformance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanPerformance) \
	METAHUMANPERFORMANCE_API virtual ~UMetaHumanPerformance();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_75_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPerformance;

// ********** End Class UMetaHumanPerformance ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Public_MetaHumanPerformance_h

// ********** Begin Enum EDataInputType ************************************************************
#define FOREACH_ENUM_EDATAINPUTTYPE(op) \
	op(EDataInputType::DepthFootage) \
	op(EDataInputType::Audio) \
	op(EDataInputType::MonoFootage) 

enum class EDataInputType : uint8;
template<> struct TIsUEnumClass<EDataInputType> { enum { Value = true }; };
template<> METAHUMANPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataInputType>();
// ********** End Enum EDataInputType **************************************************************

// ********** Begin Enum ESolveType ****************************************************************
#define FOREACH_ENUM_ESOLVETYPE(op) \
	op(ESolveType::Preview) \
	op(ESolveType::Standard) \
	op(ESolveType::AdditionalTweakers) 

enum class ESolveType : uint8;
template<> struct TIsUEnumClass<ESolveType> { enum { Value = true }; };
template<> METAHUMANPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESolveType>();
// ********** End Enum ESolveType ******************************************************************

// ********** Begin Enum EPerformanceHeadMovementMode **********************************************
#define FOREACH_ENUM_EPERFORMANCEHEADMOVEMENTMODE(op) \
	op(EPerformanceHeadMovementMode::TransformTrack) \
	op(EPerformanceHeadMovementMode::ControlRig) \
	op(EPerformanceHeadMovementMode::Disabled) 

enum class EPerformanceHeadMovementMode : uint8;
template<> struct TIsUEnumClass<EPerformanceHeadMovementMode> { enum { Value = true }; };
template<> METAHUMANPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceHeadMovementMode>();
// ********** End Enum EPerformanceHeadMovementMode ************************************************

// ********** Begin Enum EStartPipelineErrorType ***************************************************
#define FOREACH_ENUM_ESTARTPIPELINEERRORTYPE(op) \
	op(EStartPipelineErrorType::None) \
	op(EStartPipelineErrorType::NoFrames) \
	op(EStartPipelineErrorType::Disabled) 

enum class EStartPipelineErrorType : uint8;
template<> struct TIsUEnumClass<EStartPipelineErrorType> { enum { Value = true }; };
template<> METAHUMANPERFORMANCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStartPipelineErrorType>();
// ********** End Enum EStartPipelineErrorType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
