// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphNode_Root.h"

#ifdef AUDIOEDITOR_SoundCueGraphNode_Root_generated_h
#error "SoundCueGraphNode_Root.generated.h already included, missing '#pragma once' in SoundCueGraphNode_Root.h"
#endif
#define AUDIOEDITOR_SoundCueGraphNode_Root_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueGraphNode_Root **************************************************
struct Z_Construct_UClass_USoundCueGraphNode_Root_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Root_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode_Root(); \
	friend struct ::Z_Construct_UClass_USoundCueGraphNode_Root_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueGraphNode_Root_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueGraphNode_Root, USoundCueGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueGraphNode_Root_NoRegister) \
	DECLARE_SERIALIZER(USoundCueGraphNode_Root)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode_Root); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode_Root); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueGraphNode_Root(USoundCueGraphNode_Root&&) = delete; \
	USoundCueGraphNode_Root(const USoundCueGraphNode_Root&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueGraphNode_Root();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_17_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_20_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueGraphNode_Root;

// ********** End Class USoundCueGraphNode_Root ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
