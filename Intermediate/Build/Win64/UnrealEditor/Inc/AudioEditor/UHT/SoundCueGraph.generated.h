// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraph.h"

#ifdef AUDIOEDITOR_SoundCueGraph_generated_h
#error "SoundCueGraph.generated.h already included, missing '#pragma once' in SoundCueGraph.h"
#endif
#define AUDIOEDITOR_SoundCueGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueGraph ***********************************************************
struct Z_Construct_UClass_USoundCueGraph_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraph_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraph(); \
	friend struct ::Z_Construct_UClass_USoundCueGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueGraph_NoRegister) \
	DECLARE_SERIALIZER(USoundCueGraph)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueGraph(USoundCueGraph&&) = delete; \
	USoundCueGraph(const USoundCueGraph&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueGraph();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_14_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueGraph;

// ********** End Class USoundCueGraph *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
