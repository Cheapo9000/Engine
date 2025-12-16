// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceConditionTag.h"

#ifdef DAYSEQUENCE_DaySequenceConditionTag_generated_h
#error "DaySequenceConditionTag.generated.h already included, missing '#pragma once' in DaySequenceConditionTag.h"
#endif
#define DAYSEQUENCE_DaySequenceConditionTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDaySequenceConditionTag *************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DAYSEQUENCE_API virtual void SetupOnConditionValueChanged_Implementation() const; \
	DAYSEQUENCE_API virtual bool Evaluate_Implementation() const; \
	DECLARE_FUNCTION(execBroadcastOnConditionValueChanged); \
	DECLARE_FUNCTION(execSetupOnConditionValueChanged); \
	DECLARE_FUNCTION(execEvaluate);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDaySequenceConditionTag_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceConditionTag_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceConditionTag(); \
	friend struct ::Z_Construct_UClass_UDaySequenceConditionTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceConditionTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceConditionTag, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceConditionTag_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceConditionTag)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UDaySequenceConditionTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceConditionTag(UDaySequenceConditionTag&&) = delete; \
	UDaySequenceConditionTag(const UDaySequenceConditionTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceConditionTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceConditionTag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceConditionTag) \
	DAYSEQUENCE_API virtual ~UDaySequenceConditionTag();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceConditionTag;

// ********** End Class UDaySequenceConditionTag ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h

// ********** Begin Enum EDaySequenceConditionTagInitializationPhase *******************************
#define FOREACH_ENUM_EDAYSEQUENCECONDITIONTAGINITIALIZATIONPHASE(op) \
	op(EDaySequenceConditionTagInitializationPhase::Immediate) \
	op(EDaySequenceConditionTagInitializationPhase::GameStateReady) 

enum class EDaySequenceConditionTagInitializationPhase : uint8;
template<> struct TIsUEnumClass<EDaySequenceConditionTagInitializationPhase> { enum { Value = true }; };
template<> DAYSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDaySequenceConditionTagInitializationPhase>();
// ********** End Enum EDaySequenceConditionTagInitializationPhase *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
