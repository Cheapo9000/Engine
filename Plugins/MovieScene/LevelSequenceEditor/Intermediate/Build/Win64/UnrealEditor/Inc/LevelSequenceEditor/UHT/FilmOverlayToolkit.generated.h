// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FilmOverlayToolkit.h"

#ifdef LEVELSEQUENCEEDITOR_FilmOverlayToolkit_generated_h
#error "FilmOverlayToolkit.generated.h already included, missing '#pragma once' in FilmOverlayToolkit.h"
#endif
#define LEVELSEQUENCEEDITOR_FilmOverlayToolkit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFilmOverlayToolkit ******************************************************
struct Z_Construct_UClass_UFilmOverlayToolkit_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UFilmOverlayToolkit_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilmOverlayToolkit(); \
	friend struct ::Z_Construct_UClass_UFilmOverlayToolkit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UFilmOverlayToolkit_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilmOverlayToolkit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_UFilmOverlayToolkit_NoRegister) \
	DECLARE_SERIALIZER(UFilmOverlayToolkit)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCEEDITOR_API UFilmOverlayToolkit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilmOverlayToolkit(UFilmOverlayToolkit&&) = delete; \
	UFilmOverlayToolkit(const UFilmOverlayToolkit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, UFilmOverlayToolkit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilmOverlayToolkit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilmOverlayToolkit) \
	LEVELSEQUENCEEDITOR_API virtual ~UFilmOverlayToolkit();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilmOverlayToolkit;

// ********** End Class UFilmOverlayToolkit ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
