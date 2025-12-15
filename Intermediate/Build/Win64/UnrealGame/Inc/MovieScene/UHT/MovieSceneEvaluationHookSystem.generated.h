// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEvaluationHookSystem.h"

#ifdef MOVIESCENE_MovieSceneEvaluationHookSystem_generated_h
#error "MovieSceneEvaluationHookSystem.generated.h already included, missing '#pragma once' in MovieSceneEvaluationHookSystem.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationHookSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneEvaluationHookEvent ************************************
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEvaluationHookEvent;
// ********** End ScriptStruct FMovieSceneEvaluationHookEvent **************************************

// ********** Begin ScriptStruct FMovieSceneEvaluationHookEventContainer ***************************
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEvaluationHookEventContainer;
// ********** End ScriptStruct FMovieSceneEvaluationHookEventContainer *****************************

// ********** Begin ScriptStruct FMovieSceneEvaluationInstanceKey **********************************
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEvaluationInstanceKey;
// ********** End ScriptStruct FMovieSceneEvaluationInstanceKey ************************************

// ********** Begin Class UMovieSceneEvaluationHookSystem ******************************************
struct Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEvaluationHookSystem(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEvaluationHookSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEvaluationHookSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_83_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEvaluationHookSystem(UMovieSceneEvaluationHookSystem&&) = delete; \
	UMovieSceneEvaluationHookSystem(const UMovieSceneEvaluationHookSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEvaluationHookSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEvaluationHookSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEvaluationHookSystem) \
	MOVIESCENE_API virtual ~UMovieSceneEvaluationHookSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_79_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_83_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEvaluationHookSystem;

// ********** End Class UMovieSceneEvaluationHookSystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
