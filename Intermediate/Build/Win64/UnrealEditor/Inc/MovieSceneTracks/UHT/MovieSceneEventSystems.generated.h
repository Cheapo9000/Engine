// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneEventSystems.h"

#ifdef MOVIESCENETRACKS_MovieSceneEventSystems_generated_h
#error "MovieSceneEventSystems.generated.h already included, missing '#pragma once' in MovieSceneEventSystems.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventSystems_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneEventTriggerData ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEventTriggerData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEventTriggerData;
// ********** End ScriptStruct FMovieSceneEventTriggerData *****************************************

// ********** Begin Class UMovieSceneEventSystem ***************************************************
struct Z_Construct_UClass_UMovieSceneEventSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEventSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEventSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventSystem(UMovieSceneEventSystem&&) = delete; \
	UMovieSceneEventSystem(const UMovieSceneEventSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_39_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_43_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventSystem;

// ********** End Class UMovieSceneEventSystem *****************************************************

// ********** Begin Class UMovieScenePreSpawnEventSystem *******************************************
struct Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePreSpawnEventSystem(); \
	friend struct ::Z_Construct_UClass_UMovieScenePreSpawnEventSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePreSpawnEventSystem, UMovieSceneEventSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePreSpawnEventSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePreSpawnEventSystem(UMovieScenePreSpawnEventSystem&&) = delete; \
	UMovieScenePreSpawnEventSystem(const UMovieScenePreSpawnEventSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePreSpawnEventSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePreSpawnEventSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePreSpawnEventSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePreSpawnEventSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_71_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_75_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePreSpawnEventSystem;

// ********** End Class UMovieScenePreSpawnEventSystem *********************************************

// ********** Begin Class UMovieScenePostSpawnEventSystem ******************************************
struct Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePostSpawnEventSystem(); \
	friend struct ::Z_Construct_UClass_UMovieScenePostSpawnEventSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePostSpawnEventSystem, UMovieSceneEventSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePostSpawnEventSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_86_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePostSpawnEventSystem(UMovieScenePostSpawnEventSystem&&) = delete; \
	UMovieScenePostSpawnEventSystem(const UMovieScenePostSpawnEventSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePostSpawnEventSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePostSpawnEventSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePostSpawnEventSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePostSpawnEventSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_82_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_86_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePostSpawnEventSystem;

// ********** End Class UMovieScenePostSpawnEventSystem ********************************************

// ********** Begin Class UMovieScenePostEvalEventSystem *******************************************
struct Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePostEvalEventSystem(); \
	friend struct ::Z_Construct_UClass_UMovieScenePostEvalEventSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScenePostEvalEventSystem, UMovieSceneEventSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieScenePostEvalEventSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_96_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScenePostEvalEventSystem(UMovieScenePostEvalEventSystem&&) = delete; \
	UMovieScenePostEvalEventSystem(const UMovieScenePostEvalEventSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePostEvalEventSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePostEvalEventSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePostEvalEventSystem) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePostEvalEventSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_92_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h_96_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScenePostEvalEventSystem;

// ********** End Class UMovieScenePostEvalEventSystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneEventSystems_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
