// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneDMXLibraryTrack.h"

#ifdef DMXRUNTIME_MovieSceneDMXLibraryTrack_generated_h
#error "MovieSceneDMXLibraryTrack.generated.h already included, missing '#pragma once' in MovieSceneDMXLibraryTrack.h"
#endif
#define DMXRUNTIME_MovieSceneDMXLibraryTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneDMXLibraryTrack ***********************************************
struct Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrack_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDMXLibraryTrack(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UMovieSceneDMXLibraryTrack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDMXLibraryTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UMovieSceneDMXLibraryTrack_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDMXLibraryTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneDMXLibraryTrack*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDMXLibraryTrack(UMovieSceneDMXLibraryTrack&&) = delete; \
	UMovieSceneDMXLibraryTrack(const UMovieSceneDMXLibraryTrack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDMXLibraryTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDMXLibraryTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneDMXLibraryTrack) \
	NO_API virtual ~UMovieSceneDMXLibraryTrack();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDMXLibraryTrack;

// ********** End Class UMovieSceneDMXLibraryTrack *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
