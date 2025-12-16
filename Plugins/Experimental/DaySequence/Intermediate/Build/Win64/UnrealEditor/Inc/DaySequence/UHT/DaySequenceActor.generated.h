// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceActor.h"

#ifdef DAYSEQUENCE_DaySequenceActor_generated_h
#error "DaySequenceActor.generated.h already included, missing '#pragma once' in DaySequenceActor.h"
#endif
#define DAYSEQUENCE_DaySequenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDaySequence;

// ********** Begin Delegate FOnTimeOfDayPreviewChanged ********************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_79_DELEGATE \
DAYSEQUENCE_API void FOnTimeOfDayPreviewChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTimeOfDayPreviewChanged, float Time);


// ********** End Delegate FOnTimeOfDayPreviewChanged **********************************************

// ********** Begin Class ADaySequenceActor ********************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DAYSEQUENCE_API virtual void Multicast_SetTimePerCycle_Implementation(float InHours); \
	DAYSEQUENCE_API virtual void SetPlayRate_Implementation(float NewRate); \
	DECLARE_FUNCTION(execStopDaySequenceUpdateTimer); \
	DECLARE_FUNCTION(execStartDaySequenceUpdateTimer); \
	DECLARE_FUNCTION(execGetStaticTimeOfDay); \
	DECLARE_FUNCTION(execHasStaticTimeOfDay); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetTimeOfDay); \
	DECLARE_FUNCTION(execGetApparentTimeOfDay); \
	DECLARE_FUNCTION(execGetTimeOfDay); \
	DECLARE_FUNCTION(execGetInitialTimeOfDay); \
	DECLARE_FUNCTION(execMulticast_SetTimePerCycle); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execGetTimePerCycle); \
	DECLARE_FUNCTION(execGetDayLength); \
	DECLARE_FUNCTION(execSetTimeOfDayPreview); \
	DECLARE_FUNCTION(execGetTimeOfDayPreview); \
	DECLARE_FUNCTION(execSetReplicatePlayback); \
	DECLARE_FUNCTION(execContainsDaySequence);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ACCESSORS \
static void GetbRunDayCycle_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRunDayCycle_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ADaySequenceActor, DAYSEQUENCE_API)


struct Z_Construct_UClass_ADaySequenceActor_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_ADaySequenceActor_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADaySequenceActor(); \
	friend struct ::Z_Construct_UClass_ADaySequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_ADaySequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADaySequenceActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_ADaySequenceActor_NoRegister) \
	DECLARE_SERIALIZER(ADaySequenceActor) \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ADaySequenceActor*>(this); } \
	DAYSEQUENCE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DayInterpCurve=NETFIELD_REP_START, \
		SequencePlayer, \
		bUseInterpCurve, \
		NETFIELD_REP_END=bUseInterpCurve	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(DAYSEQUENCE_API)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADaySequenceActor(ADaySequenceActor&&) = delete; \
	ADaySequenceActor(const ADaySequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, ADaySequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADaySequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADaySequenceActor) \
	DAYSEQUENCE_API virtual ~ADaySequenceActor();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ACCESSORS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADaySequenceActor;

// ********** End Class ADaySequenceActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
