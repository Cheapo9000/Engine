// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DialogueVoiceFactory.h"

#ifdef AUDIOEDITOR_DialogueVoiceFactory_generated_h
#error "DialogueVoiceFactory.generated.h already included, missing '#pragma once' in DialogueVoiceFactory.h"
#endif
#define AUDIOEDITOR_DialogueVoiceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDialogueVoiceFactory ****************************************************
struct Z_Construct_UClass_UDialogueVoiceFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueVoiceFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueVoiceFactory(); \
	friend struct ::Z_Construct_UClass_UDialogueVoiceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UDialogueVoiceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDialogueVoiceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UDialogueVoiceFactory_NoRegister) \
	DECLARE_SERIALIZER(UDialogueVoiceFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UDialogueVoiceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueVoiceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UDialogueVoiceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueVoiceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDialogueVoiceFactory(UDialogueVoiceFactory&&) = delete; \
	UDialogueVoiceFactory(const UDialogueVoiceFactory&) = delete; \
	AUDIOEDITOR_API virtual ~UDialogueVoiceFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDialogueVoiceFactory;

// ********** End Class UDialogueVoiceFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
