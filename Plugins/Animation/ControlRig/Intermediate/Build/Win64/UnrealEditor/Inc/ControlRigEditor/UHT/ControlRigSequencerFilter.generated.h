// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/ControlRigSequencerFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGEDITOR_ControlRigSequencerFilter_generated_h
#error "ControlRigSequencerFilter.generated.h already included, missing '#pragma once' in ControlRigSequencerFilter.h"
#endif
#define CONTROLRIGEDITOR_ControlRigSequencerFilter_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigTrackFilter(); \
	friend struct Z_Construct_UClass_UControlRigTrackFilter_Statics; \
public: \
	DECLARE_CLASS(UControlRigTrackFilter, USequencerTrackFilterExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigTrackFilter)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigTrackFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigTrackFilter(UControlRigTrackFilter&&); \
	UControlRigTrackFilter(const UControlRigTrackFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigTrackFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigTrackFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigTrackFilter) \
	NO_API virtual ~UControlRigTrackFilter();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_8_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigTrackFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequencerFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
