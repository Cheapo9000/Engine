// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDaySequence;
#ifdef DAYSEQUENCE_DaySequenceActor_generated_h
#error "DaySequenceActor.generated.h already included, missing '#pragma once' in DaySequenceActor.h"
#endif
#define DAYSEQUENCE_DaySequenceActor_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_76_DELEGATE \
DAYSEQUENCE_API void FOnTimeOfDayPreviewChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTimeOfDayPreviewChanged, float Time);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetTimePerCycle_Implementation(float InHours); \
	DECLARE_FUNCTION(execStopDaySequenceUpdateTimer); \
	DECLARE_FUNCTION(execStartDaySequenceUpdateTimer); \
	DECLARE_FUNCTION(execGetStaticTimeOfDay); \
	DECLARE_FUNCTION(execHasStaticTimeOfDay); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetTimeOfDay); \
	DECLARE_FUNCTION(execGetTimeOfDay); \
	DECLARE_FUNCTION(execGetInitialTimeOfDay); \
	DECLARE_FUNCTION(execMulticast_SetTimePerCycle); \
	DECLARE_FUNCTION(execGetTimePerCycle); \
	DECLARE_FUNCTION(execGetDayLength); \
	DECLARE_FUNCTION(execSetTimeOfDayPreview); \
	DECLARE_FUNCTION(execGetTimeOfDayPreview); \
	DECLARE_FUNCTION(execSetReplicatePlayback); \
	DECLARE_FUNCTION(execContainsDaySequence);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADaySequenceActor(); \
	friend struct Z_Construct_UClass_ADaySequenceActor_Statics; \
public: \
	DECLARE_CLASS(ADaySequenceActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(ADaySequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADaySequenceActor*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DayInterpCurve=NETFIELD_REP_START, \
		SequencePlayer, \
		bUseInterpCurve, \
		NETFIELD_REP_END=bUseInterpCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADaySequenceActor(ADaySequenceActor&&); \
	ADaySequenceActor(const ADaySequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADaySequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADaySequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADaySequenceActor) \
	NO_API virtual ~ADaySequenceActor();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_78_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class ADaySequenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
