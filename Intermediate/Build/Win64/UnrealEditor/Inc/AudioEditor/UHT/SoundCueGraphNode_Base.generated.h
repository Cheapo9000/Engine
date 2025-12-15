// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphNode_Base.h"

#ifdef AUDIOEDITOR_SoundCueGraphNode_Base_generated_h
#error "SoundCueGraphNode_Base.generated.h already included, missing '#pragma once' in SoundCueGraphNode_Base.h"
#endif
#define AUDIOEDITOR_SoundCueGraphNode_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueGraphNode_Base **************************************************
struct Z_Construct_UClass_USoundCueGraphNode_Base_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode_Base(); \
	friend struct ::Z_Construct_UClass_USoundCueGraphNode_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundCueGraphNode_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundCueGraphNode_Base_NoRegister) \
	DECLARE_SERIALIZER(USoundCueGraphNode_Base)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueGraphNode_Base(USoundCueGraphNode_Base&&) = delete; \
	USoundCueGraphNode_Base(const USoundCueGraphNode_Base&) = delete; \
	AUDIOEDITOR_API virtual ~USoundCueGraphNode_Base();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_20_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueGraphNode_Base;

// ********** End Class USoundCueGraphNode_Base ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
