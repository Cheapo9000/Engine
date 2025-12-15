// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h"

#ifdef MOVIESCENE_MovieSceneTrackInstanceSystem_generated_h
#error "MovieSceneTrackInstanceSystem.generated.h already included, missing '#pragma once' in MovieSceneTrackInstanceSystem.h"
#endif
#define MOVIESCENE_MovieSceneTrackInstanceSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneTrackInstanceEntry *************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackInstanceEntry;
// ********** End ScriptStruct FMovieSceneTrackInstanceEntry ***************************************

// ********** Begin Class UMovieSceneTrackInstanceInstantiator *************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTrackInstanceInstantiator, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstanceInstantiator(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackInstanceInstantiator, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstanceInstantiator) \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackInstanceInstantiator(UMovieSceneTrackInstanceInstantiator&&) = delete; \
	UMovieSceneTrackInstanceInstantiator(const UMovieSceneTrackInstanceInstantiator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackInstanceInstantiator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstanceInstantiator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstanceInstantiator) \
	MOVIESCENE_API virtual ~UMovieSceneTrackInstanceInstantiator();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_39_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackInstanceInstantiator;

// ********** End Class UMovieSceneTrackInstanceInstantiator ***************************************

// ********** Begin Class UMovieSceneTrackInstanceSystem *******************************************
struct Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstanceSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneTrackInstanceSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneTrackInstanceSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstanceSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneTrackInstanceSystem(UMovieSceneTrackInstanceSystem&&) = delete; \
	UMovieSceneTrackInstanceSystem(const UMovieSceneTrackInstanceSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackInstanceSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstanceSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstanceSystem) \
	MOVIESCENE_API virtual ~UMovieSceneTrackInstanceSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_79_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneTrackInstanceSystem;

// ********** End Class UMovieSceneTrackInstanceSystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
