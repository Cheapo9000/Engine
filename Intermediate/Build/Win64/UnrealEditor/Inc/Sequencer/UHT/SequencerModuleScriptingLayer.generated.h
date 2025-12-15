// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/SequencerModuleScriptingLayer.h"

#ifdef SEQUENCER_SequencerModuleScriptingLayer_generated_h
#error "SequencerModuleScriptingLayer.generated.h already included, missing '#pragma once' in SequencerModuleScriptingLayer.h"
#endif
#define SEQUENCER_SequencerModuleScriptingLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USequencerModuleOutlinerScriptingObject;

// ********** Begin Class USequencerModuleScriptingLayer *******************************************
#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOutliner);


struct Z_Construct_UClass_USequencerModuleScriptingLayer_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerModuleScriptingLayer_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerModuleScriptingLayer(); \
	friend struct ::Z_Construct_UClass_USequencerModuleScriptingLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerModuleScriptingLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerModuleScriptingLayer, USequencerScriptingLayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerModuleScriptingLayer_NoRegister) \
	DECLARE_SERIALIZER(USequencerModuleScriptingLayer)


#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCER_API USequencerModuleScriptingLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerModuleScriptingLayer(USequencerModuleScriptingLayer&&) = delete; \
	USequencerModuleScriptingLayer(const USequencerModuleScriptingLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, USequencerModuleScriptingLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerModuleScriptingLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerModuleScriptingLayer) \
	SEQUENCER_API virtual ~USequencerModuleScriptingLayer();


#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_10_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerModuleScriptingLayer;

// ********** End Class USequencerModuleScriptingLayer *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
