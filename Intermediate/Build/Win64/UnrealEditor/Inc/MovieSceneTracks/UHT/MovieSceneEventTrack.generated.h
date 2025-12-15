// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneEventTrack.h"

#ifdef MOVIESCENETRACKS_MovieSceneEventTrack_generated_h
#error "MovieSceneEventTrack.generated.h already included, missing '#pragma once' in MovieSceneEventTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneEventTrack ****************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventTrack, MOVIESCENETRACKS_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UMovieSceneEventTrack_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneEventTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneEventTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneEventTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneEventTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneEventTrack) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEventTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneEventTrack(UMovieSceneEventTrack&&) = delete; \
	UMovieSceneEventTrack(const UMovieSceneEventTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_31_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneEventTrack;

// ********** End Class UMovieSceneEventTrack ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h

// ********** Begin Enum EFireEventsAtPosition *****************************************************
#define FOREACH_ENUM_EFIREEVENTSATPOSITION(op) \
	op(EFireEventsAtPosition::AtStartOfEvaluation) \
	op(EFireEventsAtPosition::AtEndOfEvaluation) \
	op(EFireEventsAtPosition::AfterSpawn) 

enum class EFireEventsAtPosition : uint8;
template<> struct TIsUEnumClass<EFireEventsAtPosition> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EFireEventsAtPosition>();
// ********** End Enum EFireEventsAtPosition *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
