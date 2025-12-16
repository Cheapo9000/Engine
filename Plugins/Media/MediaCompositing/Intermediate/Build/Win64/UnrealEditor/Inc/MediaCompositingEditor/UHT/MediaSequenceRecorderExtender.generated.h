// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MediaSequenceRecorderExtender.h"

#ifdef MEDIACOMPOSITINGEDITOR_MediaSequenceRecorderExtender_generated_h
#error "MediaSequenceRecorderExtender.generated.h already included, missing '#pragma once' in MediaSequenceRecorderExtender.h"
#endif
#define MEDIACOMPOSITINGEDITOR_MediaSequenceRecorderExtender_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaSequenceRecorderSettings *******************************************
struct Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics;
MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaSequenceRecorderSettings_NoRegister();

#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSequenceRecorderSettings(); \
	friend struct ::Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIACOMPOSITINGEDITOR_API UClass* ::Z_Construct_UClass_UMediaSequenceRecorderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaSequenceRecorderSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaCompositingEditor"), Z_Construct_UClass_UMediaSequenceRecorderSettings_NoRegister) \
	DECLARE_SERIALIZER(UMediaSequenceRecorderSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSequenceRecorderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSequenceRecorderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSequenceRecorderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSequenceRecorderSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaSequenceRecorderSettings(UMediaSequenceRecorderSettings&&) = delete; \
	UMediaSequenceRecorderSettings(const UMediaSequenceRecorderSettings&) = delete; \
	NO_API virtual ~UMediaSequenceRecorderSettings();


#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_22_PROLOG
#define FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_25_INCLASS \
	FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaSequenceRecorderSettings;

// ********** End Class UMediaSequenceRecorderSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
