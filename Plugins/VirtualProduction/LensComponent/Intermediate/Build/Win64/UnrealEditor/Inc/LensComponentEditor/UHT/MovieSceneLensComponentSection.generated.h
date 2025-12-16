// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneLensComponentSection.h"

#ifdef LENSCOMPONENTEDITOR_MovieSceneLensComponentSection_generated_h
#error "MovieSceneLensComponentSection.generated.h already included, missing '#pragma once' in MovieSceneLensComponentSection.h"
#endif
#define LENSCOMPONENTEDITOR_MovieSceneLensComponentSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneLensComponentSection ******************************************
struct Z_Construct_UClass_UMovieSceneLensComponentSection_Statics;
LENSCOMPONENTEDITOR_API UClass* Z_Construct_UClass_UMovieSceneLensComponentSection_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLensComponentSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneLensComponentSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LENSCOMPONENTEDITOR_API UClass* ::Z_Construct_UClass_UMovieSceneLensComponentSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneLensComponentSection, UMovieSceneHookSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensComponentEditor"), Z_Construct_UClass_UMovieSceneLensComponentSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneLensComponentSection)


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneLensComponentSection(UMovieSceneLensComponentSection&&) = delete; \
	UMovieSceneLensComponentSection(const UMovieSceneLensComponentSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSCOMPONENTEDITOR_API, UMovieSceneLensComponentSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLensComponentSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLensComponentSection) \
	LENSCOMPONENTEDITOR_API virtual ~UMovieSceneLensComponentSection();


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneLensComponentSection;

// ********** End Class UMovieSceneLensComponentSection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponentEditor_Public_MovieScene_MovieSceneLensComponentSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
