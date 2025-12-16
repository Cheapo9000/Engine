// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneRootMotionSection.h"

#ifdef MOVIESCENEANIMMIXER_MovieSceneRootMotionSection_generated_h
#error "MovieSceneRootMotionSection.generated.h already included, missing '#pragma once' in MovieSceneRootMotionSection.h"
#endif
#define MOVIESCENEANIMMIXER_MovieSceneRootMotionSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneRootMotionSection *********************************************
struct Z_Construct_UClass_UMovieSceneRootMotionSection_Statics;
MOVIESCENEANIMMIXER_API UClass* Z_Construct_UClass_UMovieSceneRootMotionSection_NoRegister();

#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRootMotionSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneRootMotionSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENEANIMMIXER_API UClass* ::Z_Construct_UClass_UMovieSceneRootMotionSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneRootMotionSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneAnimMixer"), Z_Construct_UClass_UMovieSceneRootMotionSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneRootMotionSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneRootMotionSection*>(this); }


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneRootMotionSection(UMovieSceneRootMotionSection&&) = delete; \
	UMovieSceneRootMotionSection(const UMovieSceneRootMotionSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENEANIMMIXER_API, UMovieSceneRootMotionSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRootMotionSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRootMotionSection) \
	MOVIESCENEANIMMIXER_API virtual ~UMovieSceneRootMotionSection();


#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneRootMotionSection;

// ********** End Class UMovieSceneRootMotionSection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MovieSceneAnimMixer_Source_MovieSceneAnimMixer_Internal_MovieSceneRootMotionSection_h

// ********** Begin Enum EMovieSceneRootMotionDestination ******************************************
#define FOREACH_ENUM_EMOVIESCENEROOTMOTIONDESTINATION(op) \
	op(EMovieSceneRootMotionDestination::Discard) \
	op(EMovieSceneRootMotionDestination::RootBone) \
	op(EMovieSceneRootMotionDestination::Component) \
	op(EMovieSceneRootMotionDestination::Actor) \
	op(EMovieSceneRootMotionDestination::Attribute) 

enum class EMovieSceneRootMotionDestination : uint8;
template<> struct TIsUEnumClass<EMovieSceneRootMotionDestination> { enum { Value = true }; };
template<> MOVIESCENEANIMMIXER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneRootMotionDestination>();
// ********** End Enum EMovieSceneRootMotionDestination ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
