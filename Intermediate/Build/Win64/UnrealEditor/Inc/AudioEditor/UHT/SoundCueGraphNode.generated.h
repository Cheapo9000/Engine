// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphNode.h"

#ifdef AUDIOEDITOR_SoundCueGraphNode_generated_h
#error "SoundCueGraphNode.generated.h already included, missing '#pragma once' in SoundCueGraphNode.h"
#endif
#define AUDIOEDITOR_SoundCueGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueGraphNode *******************************************************
struct Z_Construct_UClass_USoundCueGraphNode_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode(); \
	friend struct ::Z_Construct_UClass_USoundCueGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueGraphNode, USoundCueGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueGraphNode_NoRegister) \
	DECLARE_SERIALIZER(USoundCueGraphNode)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueGraphNode(USoundCueGraphNode&&) = delete; \
	USoundCueGraphNode(const USoundCueGraphNode&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueGraphNode();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueGraphNode;

// ********** End Class USoundCueGraphNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
