// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundClassGraph/SoundClassGraph.h"

#ifdef AUDIOEDITOR_SoundClassGraph_generated_h
#error "SoundClassGraph.generated.h already included, missing '#pragma once' in SoundClassGraph.h"
#endif
#define AUDIOEDITOR_SoundClassGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundClassGraph *********************************************************
struct Z_Construct_UClass_USoundClassGraph_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraph_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClassGraph(); \
	friend struct ::Z_Construct_UClass_USoundClassGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundClassGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundClassGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundClassGraph_NoRegister) \
	DECLARE_SERIALIZER(USoundClassGraph)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundClassGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClassGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundClassGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClassGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundClassGraph(USoundClassGraph&&) = delete; \
	USoundClassGraph(const USoundClassGraph&) = delete; \
	AUDIOEDITOR_API virtual ~USoundClassGraph();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundClassGraph;

// ********** End Class USoundClassGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
