// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkBlueprintLibrary.h"

#ifdef LIVELINK_LiveLinkBlueprintLibrary_generated_h
#error "LiveLinkBlueprintLibrary.generated.h already included, missing '#pragma once' in LiveLinkBlueprintLibrary.h"
#endif
#define LIVELINK_LiveLinkBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULiveLinkRole;
enum class ELiveLinkSubjectState : uint8;
struct FGuid;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkBaseBlueprintData;
struct FLiveLinkBasicBlueprintData;
struct FLiveLinkSkeletonStaticData;
struct FLiveLinkSourceHandle;
struct FLiveLinkSubjectKey;
struct FLiveLinkSubjectName;
struct FLiveLinkSubjectRepresentation;
struct FLiveLinkTransform;
struct FSubjectFrameHandle;
struct FSubjectMetadata;
struct FTimecode;

// ********** Begin Class ULiveLinkBlueprintLibrary ************************************************
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnpauseSubject); \
	DECLARE_FUNCTION(execPauseSubject); \
	DECLARE_FUNCTION(execGetLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execGetSpecificLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execSetLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execGetLiveLinkSubjectState); \
	DECLARE_FUNCTION(execIsLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execIsSpecificLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execGetLiveLinkSubjects); \
	DECLARE_FUNCTION(execGetLiveLinkEnabledSubjectNames); \
	DECLARE_FUNCTION(execGetSourceTypeFromGuid); \
	DECLARE_FUNCTION(execGetSourceMachineName); \
	DECLARE_FUNCTION(execGetSourceType); \
	DECLARE_FUNCTION(execGetSourceStatus); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execIsSourceStillValid); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execChildCount); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execHasParent); \
	DECLARE_FUNCTION(execComponentSpaceTransform); \
	DECLARE_FUNCTION(execParentBoneSpaceTransform); \
	DECLARE_FUNCTION(execTransformName); \
	DECLARE_FUNCTION(execGetAnimationFrameData); \
	DECLARE_FUNCTION(execGetAnimationStaticData); \
	DECLARE_FUNCTION(execGetBasicData); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetTransformByName); \
	DECLARE_FUNCTION(execGetTransformByIndex); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execTransformNames); \
	DECLARE_FUNCTION(execNumberOfTransforms); \
	DECLARE_FUNCTION(execGetCurves); \
	DECLARE_FUNCTION(execGetPropertyValue);


struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics;
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics; \
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics; \
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics; \
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics; \
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics; \
	friend struct ::Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintLibrary)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary&&) = delete; \
	ULiveLinkBlueprintLibrary(const ULiveLinkBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBlueprintLibrary) \
	LIVELINK_API virtual ~ULiveLinkBlueprintLibrary();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkBlueprintLibrary;

// ********** End Class ULiveLinkBlueprintLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
