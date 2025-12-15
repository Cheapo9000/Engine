// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSubmixGraph/SoundSubmixGraph.h"

#ifdef AUDIOEDITOR_SoundSubmixGraph_generated_h
#error "SoundSubmixGraph.generated.h already included, missing '#pragma once' in SoundSubmixGraph.h"
#endif
#define AUDIOEDITOR_SoundSubmixGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundSubmixGraph ********************************************************
struct Z_Construct_UClass_USoundSubmixGraph_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraph_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixGraph(); \
	friend struct ::Z_Construct_UClass_USoundSubmixGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundSubmixGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSubmixGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundSubmixGraph_NoRegister) \
	DECLARE_SERIALIZER(USoundSubmixGraph)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSubmixGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSubmixGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSubmixGraph(USoundSubmixGraph&&) = delete; \
	USoundSubmixGraph(const USoundSubmixGraph&) = delete; \
	AUDIOEDITOR_API virtual ~USoundSubmixGraph();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_22_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_25_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSubmixGraph;

// ********** End Class USoundSubmixGraph **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
