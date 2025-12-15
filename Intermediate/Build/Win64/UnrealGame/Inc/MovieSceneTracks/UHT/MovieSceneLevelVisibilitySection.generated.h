// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneLevelVisibilitySection.h"

#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h
#error "MovieSceneLevelVisibilitySection.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilitySection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELevelVisibility : uint8;

// ********** Begin Class UMovieSceneLevelVisibilitySection ****************************************
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLevelNames); \
	DECLARE_FUNCTION(execGetLevelNames); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility);


struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLevelVisibilitySection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneLevelVisibilitySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&) = delete; \
	UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneLevelVisibilitySection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLevelVisibilitySection;

// ********** End Class UMovieSceneLevelVisibilitySection ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h

// ********** Begin Enum ELevelVisibility **********************************************************
#define FOREACH_ENUM_ELEVELVISIBILITY(op) \
	op(ELevelVisibility::Visible) \
	op(ELevelVisibility::Hidden) 

enum class ELevelVisibility : uint8;
template<> struct TIsUEnumClass<ELevelVisibility> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELevelVisibility>();
// ********** End Enum ELevelVisibility ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
