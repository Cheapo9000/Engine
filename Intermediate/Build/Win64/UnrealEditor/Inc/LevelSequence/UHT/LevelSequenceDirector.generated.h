// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceDirector.h"

#ifdef LEVELSEQUENCE_LevelSequenceDirector_generated_h
#error "LevelSequenceDirector.generated.h already included, missing '#pragma once' in LevelSequenceDirector.h"
#endif
#define LEVELSEQUENCE_LevelSequenceDirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMovieSceneClock;
class UMovieSceneSequence;
class UObject;
struct FMovieSceneObjectBindingID;
struct FQualifiedFrameTime;

// ********** Begin Class ULevelSequenceDirector ***************************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetRootSequenceTime); \
	DECLARE_FUNCTION(execGetSequenceCustomClock); \
	DECLARE_FUNCTION(execGetRootSequenceCustomClock);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULevelSequenceDirector_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceDirector(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceDirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceDirector_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceDirector_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceDirector)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceDirector(ULevelSequenceDirector&&) = delete; \
	ULevelSequenceDirector(const ULevelSequenceDirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceDirector) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceDirector();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceDirector;

// ********** End Class ULevelSequenceDirector *****************************************************

// ********** Begin Class ULegacyLevelSequenceDirectorBlueprint ************************************
struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint(); \
	friend struct ::Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(ULegacyLevelSequenceDirectorBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister) \
	DECLARE_SERIALIZER(ULegacyLevelSequenceDirectorBlueprint)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_142_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULegacyLevelSequenceDirectorBlueprint(ULegacyLevelSequenceDirectorBlueprint&&) = delete; \
	ULegacyLevelSequenceDirectorBlueprint(const ULegacyLevelSequenceDirectorBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelSequenceDirectorBlueprint) \
	NO_API virtual ~ULegacyLevelSequenceDirectorBlueprint();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_139_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULegacyLevelSequenceDirectorBlueprint;

// ********** End Class ULegacyLevelSequenceDirectorBlueprint **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
