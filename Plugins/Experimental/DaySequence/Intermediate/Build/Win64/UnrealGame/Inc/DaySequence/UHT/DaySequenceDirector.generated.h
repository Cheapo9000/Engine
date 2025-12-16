// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceDirector.h"

#ifdef DAYSEQUENCE_DaySequenceDirector_generated_h
#error "DaySequenceDirector.generated.h already included, missing '#pragma once' in DaySequenceDirector.h"
#endif
#define DAYSEQUENCE_DaySequenceDirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMovieSceneSequence;
class UObject;
struct FMovieSceneObjectBindingID;
struct FQualifiedFrameTime;

// ********** Begin Class UDaySequenceDirector *****************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetRootSequenceTime);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDaySequenceDirector_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceDirector_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceDirector(); \
	friend struct ::Z_Construct_UClass_UDaySequenceDirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceDirector_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceDirector_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceDirector)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DAYSEQUENCE_API UDaySequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceDirector(UDaySequenceDirector&&) = delete; \
	UDaySequenceDirector(const UDaySequenceDirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceDirector) \
	DAYSEQUENCE_API virtual ~UDaySequenceDirector();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceDirector;

// ********** End Class UDaySequenceDirector *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
