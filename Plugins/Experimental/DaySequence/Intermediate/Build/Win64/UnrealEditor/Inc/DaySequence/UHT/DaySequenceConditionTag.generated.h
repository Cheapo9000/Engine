// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceConditionTag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAYSEQUENCE_DaySequenceConditionTag_generated_h
#error "DaySequenceConditionTag.generated.h already included, missing '#pragma once' in DaySequenceConditionTag.h"
#endif
#define DAYSEQUENCE_DaySequenceConditionTag_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupOnConditionValueChanged_Implementation() const; \
	virtual bool Evaluate_Implementation() const; \
	DECLARE_FUNCTION(execBroadcastOnConditionValueChanged); \
	DECLARE_FUNCTION(execSetupOnConditionValueChanged); \
	DECLARE_FUNCTION(execEvaluate);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceConditionTag(); \
	friend struct Z_Construct_UClass_UDaySequenceConditionTag_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceConditionTag, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceConditionTag)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceConditionTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceConditionTag(UDaySequenceConditionTag&&); \
	UDaySequenceConditionTag(const UDaySequenceConditionTag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceConditionTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceConditionTag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceConditionTag) \
	NO_API virtual ~UDaySequenceConditionTag();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceConditionTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceConditionTag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
