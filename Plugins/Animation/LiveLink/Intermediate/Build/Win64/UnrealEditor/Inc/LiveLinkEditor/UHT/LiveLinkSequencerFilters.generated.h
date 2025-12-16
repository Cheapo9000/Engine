// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/LiveLinkSequencerFilters.h"

#ifdef LIVELINKEDITOR_LiveLinkSequencerFilters_generated_h
#error "LiveLinkSequencerFilters.generated.h already included, missing '#pragma once' in LiveLinkSequencerFilters.h"
#endif
#define LIVELINKEDITOR_LiveLinkSequencerFilters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkSequencerTrackFilter ********************************************
struct Z_Construct_UClass_ULiveLinkSequencerTrackFilter_Statics;
LIVELINKEDITOR_API UClass* Z_Construct_UClass_ULiveLinkSequencerTrackFilter_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSequencerTrackFilter(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSequencerTrackFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKEDITOR_API UClass* ::Z_Construct_UClass_ULiveLinkSequencerTrackFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSequencerTrackFilter, USequencerTrackFilterExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkEditor"), Z_Construct_UClass_ULiveLinkSequencerTrackFilter_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSequencerTrackFilter)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkSequencerTrackFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSequencerTrackFilter(ULiveLinkSequencerTrackFilter&&) = delete; \
	ULiveLinkSequencerTrackFilter(const ULiveLinkSequencerTrackFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSequencerTrackFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSequencerTrackFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSequencerTrackFilter) \
	NO_API virtual ~ULiveLinkSequencerTrackFilter();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_8_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSequencerTrackFilter;

// ********** End Class ULiveLinkSequencerTrackFilter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_Sequencer_LiveLinkSequencerFilters_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
