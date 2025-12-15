// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TimelineComponent.h"

#ifdef ENGINE_TimelineComponent_generated_h
#error "TimelineComponent.generated.h already included, missing '#pragma once' in TimelineComponent.h"
#endif
#define ENGINE_TimelineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UCurveLinearColor;
class UCurveVector;
struct FLinearColor;
struct FTimeline;

// ********** Begin Delegate FOnTimelineEvent ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_15_DELEGATE \
ENGINE_API void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent);


// ********** End Delegate FOnTimelineEvent ********************************************************

// ********** Begin Delegate FOnTimelineFloat ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_17_DELEGATE \
ENGINE_API void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output);


// ********** End Delegate FOnTimelineFloat ********************************************************

// ********** Begin Delegate FOnTimelineVector *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_19_DELEGATE \
ENGINE_API void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output);


// ********** End Delegate FOnTimelineVector *******************************************************

// ********** Begin Delegate FOnTimelineLinearColor ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_21_DELEGATE \
ENGINE_API void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output);


// ********** End Delegate FOnTimelineLinearColor **************************************************

// ********** Begin ScriptStruct FTimelineEventEntry ***********************************************
struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimelineEventEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimelineEventEntry;
// ********** End ScriptStruct FTimelineEventEntry *************************************************

// ********** Begin ScriptStruct FTimelineVectorTrack **********************************************
struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimelineVectorTrack;
// ********** End ScriptStruct FTimelineVectorTrack ************************************************

// ********** Begin ScriptStruct FTimelineFloatTrack ***********************************************
struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimelineFloatTrack;
// ********** End ScriptStruct FTimelineFloatTrack *************************************************

// ********** Begin ScriptStruct FTimelineLinearColorTrack *****************************************
struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimelineLinearColorTrack;
// ********** End ScriptStruct FTimelineLinearColorTrack *******************************************

// ********** Begin ScriptStruct FTimeline *********************************************************
struct Z_Construct_UScriptStruct_FTimeline_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimeline_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimeline;
// ********** End ScriptStruct FTimeline ***********************************************************

// ********** Begin Class UTimelineComponent *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetTimelineFinishedFunc); \
	DECLARE_FUNCTION(execSetTimelinePostUpdateFunc); \
	DECLARE_FUNCTION(execAddInterpLinearColor); \
	DECLARE_FUNCTION(execAddInterpFloat); \
	DECLARE_FUNCTION(execAddInterpVector); \
	DECLARE_FUNCTION(execAddEvent); \
	DECLARE_FUNCTION(execOnRep_Timeline); \
	DECLARE_FUNCTION(execSetLinearColorCurve); \
	DECLARE_FUNCTION(execSetVectorCurve); \
	DECLARE_FUNCTION(execSetFloatCurve); \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetTimelineLengthMode); \
	DECLARE_FUNCTION(execSetTimelineLength); \
	DECLARE_FUNCTION(execGetScaledTimelineLength); \
	DECLARE_FUNCTION(execGetTimelineLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_UTimelineComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct ::Z_Construct_UClass_UTimelineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTimelineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTimelineComponent_NoRegister) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TheTimeline=NETFIELD_REP_START, \
		NETFIELD_REP_END=TheTimeline	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimelineComponent(UTimelineComponent&&) = delete; \
	UTimelineComponent(const UTimelineComponent&) = delete; \
	ENGINE_API virtual ~UTimelineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_436_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_439_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimelineComponent;

// ********** End Class UTimelineComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h

// ********** Begin Enum ETimelineLengthMode *******************************************************
#define FOREACH_ENUM_ETIMELINELENGTHMODE(op) \
	op(TL_TimelineLength) \
	op(TL_LastKeyFrame) 

enum ETimelineLengthMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimelineLengthMode>();
// ********** End Enum ETimelineLengthMode *********************************************************

// ********** Begin Enum ETimelineDirection ********************************************************
#define FOREACH_ENUM_ETIMELINEDIRECTION(op) \
	op(ETimelineDirection::Forward) \
	op(ETimelineDirection::Backward) 

namespace ETimelineDirection { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimelineDirection::Type>();
// ********** End Enum ETimelineDirection **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
