// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceSubsystem.h"

#ifdef DAYSEQUENCE_DaySequenceSubsystem_generated_h
#error "DaySequenceSubsystem.generated.h already included, missing '#pragma once' in DaySequenceSubsystem.h"
#endif
#define DAYSEQUENCE_DaySequenceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;

// ********** Begin Delegate FOnDaySequenceActorSet ************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_15_DELEGATE \
DAYSEQUENCE_API void FOnDaySequenceActorSet_DelegateWrapper(const FMulticastScriptDelegate& OnDaySequenceActorSet, ADaySequenceActor* NewActor);


// ********** End Delegate FOnDaySequenceActorSet **************************************************

// ********** Begin Class UDaySequenceSubsystem ****************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDaySequenceActor); \
	DECLARE_FUNCTION(execGetDaySequenceActor);


struct Z_Construct_UClass_UDaySequenceSubsystem_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceSubsystem(); \
	friend struct ::Z_Construct_UClass_UDaySequenceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceSubsystem)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UDaySequenceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceSubsystem(UDaySequenceSubsystem&&) = delete; \
	UDaySequenceSubsystem(const UDaySequenceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDaySequenceSubsystem) \
	DAYSEQUENCE_API virtual ~UDaySequenceSubsystem();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceSubsystem;

// ********** End Class UDaySequenceSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
