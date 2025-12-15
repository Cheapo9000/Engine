// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/SequencerTrackFilterExtension.h"

#ifdef SEQUENCER_SequencerTrackFilterExtension_generated_h
#error "SequencerTrackFilterExtension.generated.h already included, missing '#pragma once' in SequencerTrackFilterExtension.h"
#endif
#define SEQUENCER_SequencerTrackFilterExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerTrackFilterExtension *******************************************
struct Z_Construct_UClass_USequencerTrackFilterExtension_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerTrackFilterExtension_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerTrackFilterExtension(); \
	friend struct ::Z_Construct_UClass_USequencerTrackFilterExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerTrackFilterExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerTrackFilterExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerTrackFilterExtension_NoRegister) \
	DECLARE_SERIALIZER(USequencerTrackFilterExtension)


#define FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCER_API USequencerTrackFilterExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerTrackFilterExtension(USequencerTrackFilterExtension&&) = delete; \
	USequencerTrackFilterExtension(const USequencerTrackFilterExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, USequencerTrackFilterExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerTrackFilterExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerTrackFilterExtension) \
	SEQUENCER_API virtual ~USequencerTrackFilterExtension();


#define FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_14_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerTrackFilterExtension;

// ********** End Class USequencerTrackFilterExtension *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Filters_SequencerTrackFilterExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
