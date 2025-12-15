// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneParticleSection.h"

#ifdef MOVIESCENETRACKS_MovieSceneParticleSection_generated_h
#error "MovieSceneParticleSection.generated.h already included, missing '#pragma once' in MovieSceneParticleSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneParticleChannel ****************************************
struct Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics;
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneByteChannel Super;


struct FMovieSceneParticleChannel;
// ********** End ScriptStruct FMovieSceneParticleChannel ******************************************

// ********** Begin Class UMovieSceneParticleSection ***********************************************
struct Z_Construct_UClass_UMovieSceneParticleSection_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneParticleSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneParticleSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneParticleSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneParticleSection(UMovieSceneParticleSection&&) = delete; \
	UMovieSceneParticleSection(const UMovieSceneParticleSection&) = delete; \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParticleSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_66_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_70_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneParticleSection;

// ********** End Class UMovieSceneParticleSection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h

// ********** Begin Enum EParticleKey **************************************************************
#define FOREACH_ENUM_EPARTICLEKEY(op) \
	op(EParticleKey::Activate) \
	op(EParticleKey::Deactivate) \
	op(EParticleKey::Trigger) 

enum class EParticleKey : uint8;
template<> struct TIsUEnumClass<EParticleKey> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EParticleKey>();
// ********** End Enum EParticleKey ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
