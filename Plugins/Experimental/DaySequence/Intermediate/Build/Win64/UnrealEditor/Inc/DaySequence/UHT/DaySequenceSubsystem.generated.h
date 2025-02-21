// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;
#ifdef DAYSEQUENCE_DaySequenceSubsystem_generated_h
#error "DaySequenceSubsystem.generated.h already included, missing '#pragma once' in DaySequenceSubsystem.h"
#endif
#define DAYSEQUENCE_DaySequenceSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_13_DELEGATE \
DAYSEQUENCE_API void FOnDaySequenceActorSet_DelegateWrapper(const FMulticastScriptDelegate& OnDaySequenceActorSet, ADaySequenceActor* NewActor);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDaySequenceActor); \
	DECLARE_FUNCTION(execGetDaySequenceActor);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceSubsystem(); \
	friend struct Z_Construct_UClass_UDaySequenceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceSubsystem)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceSubsystem(UDaySequenceSubsystem&&); \
	UDaySequenceSubsystem(const UDaySequenceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDaySequenceSubsystem) \
	NO_API virtual ~UDaySequenceSubsystem();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
