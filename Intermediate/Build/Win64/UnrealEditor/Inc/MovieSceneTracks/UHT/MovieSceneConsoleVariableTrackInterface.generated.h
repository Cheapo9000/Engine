// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneConsoleVariableTrackInterface.h"

#ifdef MOVIESCENETRACKS_MovieSceneConsoleVariableTrackInterface_generated_h
#error "MovieSceneConsoleVariableTrackInterface.generated.h already included, missing '#pragma once' in MovieSceneConsoleVariableTrackInterface.h"
#endif
#define MOVIESCENETRACKS_MovieSceneConsoleVariableTrackInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMovieSceneConsoleVariableTrackInterface *****************************
struct Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneConsoleVariableTrackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneConsoleVariableTrackInterface(UMovieSceneConsoleVariableTrackInterface&&) = delete; \
	UMovieSceneConsoleVariableTrackInterface(const UMovieSceneConsoleVariableTrackInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneConsoleVariableTrackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneConsoleVariableTrackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneConsoleVariableTrackInterface) \
	virtual ~UMovieSceneConsoleVariableTrackInterface() = default;


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneConsoleVariableTrackInterface(); \
	friend struct ::Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneConsoleVariableTrackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneConsoleVariableTrackInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneConsoleVariableTrackInterface)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneConsoleVariableTrackInterface() {} \
public: \
	typedef UMovieSceneConsoleVariableTrackInterface UClassType; \
	typedef IMovieSceneConsoleVariableTrackInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneConsoleVariableTrackInterface;

// ********** End Interface UMovieSceneConsoleVariableTrackInterface *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConsoleVariableTrackInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
