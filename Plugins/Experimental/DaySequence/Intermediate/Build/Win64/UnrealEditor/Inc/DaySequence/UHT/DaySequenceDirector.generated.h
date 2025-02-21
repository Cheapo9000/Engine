// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceDirector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMovieSceneSequence;
class UObject;
struct FMovieSceneObjectBindingID;
struct FQualifiedFrameTime;
#ifdef DAYSEQUENCE_DaySequenceDirector_generated_h
#error "DaySequenceDirector.generated.h already included, missing '#pragma once' in DaySequenceDirector.h"
#endif
#define DAYSEQUENCE_DaySequenceDirector_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetRootSequenceTime);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceDirector(); \
	friend struct Z_Construct_UClass_UDaySequenceDirector_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceDirector)


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceDirector(UDaySequenceDirector&&); \
	UDaySequenceDirector(const UDaySequenceDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceDirector) \
	NO_API virtual ~UDaySequenceDirector();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
