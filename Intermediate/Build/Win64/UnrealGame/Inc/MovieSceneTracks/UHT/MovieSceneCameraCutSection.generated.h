// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneCameraCutSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h
#error "MovieSceneCameraCutSection.generated.h already included, missing '#pragma once' in MovieSceneCameraCutSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;

// ********** Begin Class UMovieSceneCameraCutSection **********************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCameraBindingID); \
	DECLARE_FUNCTION(execGetCameraBindingID);


struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneCameraCutSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneCameraCutSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCameraCutSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneCameraCutSection(UMovieSceneCameraCutSection&&) = delete; \
	UMovieSceneCameraCutSection(const UMovieSceneCameraCutSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraCutSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCameraCutSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_23_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneCameraCutSection;

// ********** End Class UMovieSceneCameraCutSection ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
