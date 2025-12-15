// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimInstance.h"

#ifdef ENGINE_AnimInstance_generated_h
#error "AnimInstance.generated.h already included, missing '#pragma once' in AnimInstance.h"
#endif
#define ENGINE_AnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UAnimInstance;
class UAnimMontage;
class UAnimNotify;
class UAnimNotifyState;
class UAnimSequenceBase;
class UBlendProfile;
class UClass;
class USkeletalMeshComponent;
enum class EAnimCurveType : uint8;
enum class EMontagePlayReturnType : uint8;
enum class ETeleportType : uint8;
enum class ETransitionRequestOverwriteMode : uint8;
enum class ETransitionRequestQueueMode : uint8;
struct FAlphaBlendArgs;
struct FBranchingPointNotifyPayload;
struct FMarkerSyncAnimPosition;
struct FMontageBlendSettings;
struct FPoseSnapshot;

// ********** Begin Delegate FOnMontageStartedMCDelegate *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_84_DELEGATE \
ENGINE_API void FOnMontageStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageStartedMCDelegate, UAnimMontage* Montage);


// ********** End Delegate FOnMontageStartedMCDelegate *********************************************

// ********** Begin Delegate FOnMontageEndedMCDelegate *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_92_DELEGATE \
ENGINE_API void FOnMontageEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageEndedMCDelegate, UAnimMontage* Montage, bool bInterrupted);


// ********** End Delegate FOnMontageEndedMCDelegate ***********************************************

// ********** Begin Delegate FOnAllMontageInstancesEndedMCDelegate *********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_95_DELEGATE \
ENGINE_API void FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllMontageInstancesEndedMCDelegate);


// ********** End Delegate FOnAllMontageInstancesEndedMCDelegate ***********************************

// ********** Begin Delegate FOnMontageBlendingOutStartedMCDelegate ********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_103_DELEGATE \
ENGINE_API void FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendingOutStartedMCDelegate, UAnimMontage* Montage, bool bInterrupted);


// ********** End Delegate FOnMontageBlendingOutStartedMCDelegate **********************************

// ********** Begin Delegate FOnMontageBlendedInEndedMCDelegate ************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_106_DELEGATE \
ENGINE_API void FOnMontageBlendedInEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendedInEndedMCDelegate, UAnimMontage* Montage);


// ********** End Delegate FOnMontageBlendedInEndedMCDelegate **************************************

// ********** Begin Delegate FOnMontageSectionChangedMCDelegate ************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_109_DELEGATE \
ENGINE_API void FOnMontageSectionChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageSectionChangedMCDelegate, UAnimMontage* Montage, FName SectionName, bool bLooped);


// ********** End Delegate FOnMontageSectionChangedMCDelegate **************************************

// ********** Begin Delegate FPlayMontageAnimNotifyDelegate ****************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_121_DELEGATE \
ENGINE_API void FPlayMontageAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAnimNotifyDelegate, FName NotifyName, FBranchingPointNotifyPayload const& BranchingPointPayload);


// ********** End Delegate FPlayMontageAnimNotifyDelegate ******************************************

// ********** Begin ScriptStruct FA2Pose ***********************************************************
struct Z_Construct_UScriptStruct_FA2Pose_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FA2Pose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FA2Pose;
// ********** End ScriptStruct FA2Pose *************************************************************

// ********** Begin ScriptStruct FA2CSPose *********************************************************
struct Z_Construct_UScriptStruct_FA2CSPose_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FA2CSPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FA2Pose Super;


struct FA2CSPose;
// ********** End ScriptStruct FA2CSPose ***********************************************************

// ********** Begin Class UAnimInstance ************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDeltaSeconds); \
	DECLARE_FUNCTION(execGetLODLevel); \
	DECLARE_FUNCTION(execResetDynamics); \
	DECLARE_FUNCTION(execQueryAndMarkTransitionEvent); \
	DECLARE_FUNCTION(execQueryTransitionEvent); \
	DECLARE_FUNCTION(execClearAllTransitionEvents); \
	DECLARE_FUNCTION(execClearTransitionEvents); \
	DECLARE_FUNCTION(execRequestTransitionEvent); \
	DECLARE_FUNCTION(execGetSyncGroupPosition); \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers); \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame); \
	DECLARE_FUNCTION(execGetTimeToClosestMarker); \
	DECLARE_FUNCTION(execUnlockAIResources); \
	DECLARE_FUNCTION(execLockAIResources); \
	DECLARE_FUNCTION(execCalculateDirection); \
	DECLARE_FUNCTION(execClearMorphTargets); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execGetCurrentStateName); \
	DECLARE_FUNCTION(execGetAllCurveNames); \
	DECLARE_FUNCTION(execGetActiveCurveNames); \
	DECLARE_FUNCTION(execGetCurveValueWithDefault); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execGetBlendProfileByName); \
	DECLARE_FUNCTION(execWasAnimNotifyNameTriggeredInAnyState); \
	DECLARE_FUNCTION(execWasAnimNotifyTriggeredInAnyState); \
	DECLARE_FUNCTION(execWasAnimNotifyNameTriggeredInStateMachine); \
	DECLARE_FUNCTION(execWasAnimNotifyTriggeredInStateMachine); \
	DECLARE_FUNCTION(execWasAnimNotifyNameTriggeredInSourceState); \
	DECLARE_FUNCTION(execWasAnimNotifyTriggeredInSourceState); \
	DECLARE_FUNCTION(execWasAnimNotifyStateActiveInSourceState); \
	DECLARE_FUNCTION(execWasAnimNotifyStateActiveInStateMachine); \
	DECLARE_FUNCTION(execWasAnimNotifyStateActiveInAnyState); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTime); \
	DECLARE_FUNCTION(execGetRelevantAnimLength); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction); \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed); \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration); \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime); \
	DECLARE_FUNCTION(execGetInstanceStateWeight); \
	DECLARE_FUNCTION(execGetInstanceMachineWeight); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime); \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength); \
	DECLARE_FUNCTION(execSetRootMotionMode); \
	DECLARE_FUNCTION(execRequestSlotGroupInertialization); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroupAndClass); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstancesByGroup); \
	DECLARE_FUNCTION(execGetLinkedAnimLayerInstanceByGroup); \
	DECLARE_FUNCTION(execUnlinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimClassLayers); \
	DECLARE_FUNCTION(execLinkAnimGraphByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstancesByTag); \
	DECLARE_FUNCTION(execGetLinkedAnimGraphInstanceByTag); \
	DECLARE_FUNCTION(execGetCurrentActiveMontage); \
	DECLARE_FUNCTION(execIsAnyMontagePlaying); \
	DECLARE_FUNCTION(execMontageSync_StopFollowing); \
	DECLARE_FUNCTION(execMontageSync_Follow); \
	DECLARE_FUNCTION(execDynamicMontage_IsPlayingFrom); \
	DECLARE_FUNCTION(execMontage_GetEffectivePlayRate); \
	DECLARE_FUNCTION(execMontage_GetPlayRate); \
	DECLARE_FUNCTION(execMontage_GetBlendTime); \
	DECLARE_FUNCTION(execMontage_GetIsStopped); \
	DECLARE_FUNCTION(execMontage_SetPosition); \
	DECLARE_FUNCTION(execMontage_GetPosition); \
	DECLARE_FUNCTION(execMontage_GetCurrentSection); \
	DECLARE_FUNCTION(execMontage_IsPlaying); \
	DECLARE_FUNCTION(execMontage_IsActive); \
	DECLARE_FUNCTION(execMontage_SetPlayRate); \
	DECLARE_FUNCTION(execMontage_SetNextSection); \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd); \
	DECLARE_FUNCTION(execMontage_JumpToSection); \
	DECLARE_FUNCTION(execMontage_Resume); \
	DECLARE_FUNCTION(execMontage_Pause); \
	DECLARE_FUNCTION(execMontage_StopGroupByName); \
	DECLARE_FUNCTION(execMontage_StopWithBlendSettings); \
	DECLARE_FUNCTION(execMontage_StopWithBlendOut); \
	DECLARE_FUNCTION(execMontage_Stop); \
	DECLARE_FUNCTION(execMontage_PlayWithBlendSettings); \
	DECLARE_FUNCTION(execMontage_PlayWithBlendIn); \
	DECLARE_FUNCTION(execMontage_Play); \
	DECLARE_FUNCTION(execBlueprint_GetSlotMontageLocalWeight); \
	DECLARE_FUNCTION(execIsSlotActive); \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation); \
	DECLARE_FUNCTION(execStopSlotAnimation); \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage_WithBlendSettings); \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage_WithBlendArgs); \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage); \
	DECLARE_FUNCTION(execBlueprint_GetMainAnimInstance); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execSetUseMainInstanceMontageEvaluationData); \
	DECLARE_FUNCTION(execIsUsingMainInstanceMontageEvaluationData); \
	DECLARE_FUNCTION(execSetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execGetPropagateNotifiesToLinkedInstances); \
	DECLARE_FUNCTION(execSetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execGetReceiveNotifiesFromLinkedInstances); \
	DECLARE_FUNCTION(execSnapshotPose); \
	DECLARE_FUNCTION(execRemovePoseSnapshot); \
	DECLARE_FUNCTION(execSavePoseSnapshot); \
	DECLARE_FUNCTION(execTryGetPawnOwner);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimInstance, ENGINE_API)


struct Z_Construct_UClass_UAnimInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend struct ::Z_Construct_UClass_UAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UAnimInstance) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_ARCHIVESERIALIZER \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimInstance(UAnimInstance&&) = delete; \
	UAnimInstance(const UAnimInstance&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_351_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimInstance;

// ********** End Class UAnimInstance **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h

// ********** Begin Enum EMontagePlayReturnType ****************************************************
#define FOREACH_ENUM_EMONTAGEPLAYRETURNTYPE(op) \
	op(EMontagePlayReturnType::MontageLength) \
	op(EMontagePlayReturnType::Duration) 

enum class EMontagePlayReturnType : uint8;
template<> struct TIsUEnumClass<EMontagePlayReturnType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMontagePlayReturnType>();
// ********** End Enum EMontagePlayReturnType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
