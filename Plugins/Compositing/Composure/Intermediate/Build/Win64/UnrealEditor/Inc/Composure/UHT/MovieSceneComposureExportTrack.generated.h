// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneComposureExportTrack.h"

#ifdef COMPOSURE_MovieSceneComposureExportTrack_generated_h
#error "MovieSceneComposureExportTrack.generated.h already included, missing '#pragma once' in MovieSceneComposureExportTrack.h"
#endif
#define COMPOSURE_MovieSceneComposureExportTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneComposureExportPass ************************************
struct Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics;
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneComposureExportPass_Statics; \
	COMPOSURE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneComposureExportPass;
// ********** End ScriptStruct FMovieSceneComposureExportPass **************************************

// ********** Begin Class UMovieSceneComposureExportTrack ******************************************
struct Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportTrack_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneComposureExportTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneComposureExportTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UMovieSceneComposureExportTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneComposureExportTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UMovieSceneComposureExportTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneComposureExportTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComposureExportTrack*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneComposureExportTrack(UMovieSceneComposureExportTrack&&) = delete; \
	UMovieSceneComposureExportTrack(const UMovieSceneComposureExportTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UMovieSceneComposureExportTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportTrack) \
	COMPOSURE_API virtual ~UMovieSceneComposureExportTrack();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_36_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneComposureExportTrack;

// ********** End Class UMovieSceneComposureExportTrack ********************************************

// ********** Begin Class UMovieSceneComposureExportSection ****************************************
struct Z_Construct_UClass_UMovieSceneComposureExportSection_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportSection_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneComposureExportSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneComposureExportSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UMovieSceneComposureExportSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneComposureExportSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UMovieSceneComposureExportSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneComposureExportSection)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_78_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneComposureExportSection(UMovieSceneComposureExportSection&&) = delete; \
	UMovieSceneComposureExportSection(const UMovieSceneComposureExportSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UMovieSceneComposureExportSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportSection) \
	COMPOSURE_API virtual ~UMovieSceneComposureExportSection();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_74_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h_78_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneComposureExportSection;

// ********** End Class UMovieSceneComposureExportSection ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposureExportTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
