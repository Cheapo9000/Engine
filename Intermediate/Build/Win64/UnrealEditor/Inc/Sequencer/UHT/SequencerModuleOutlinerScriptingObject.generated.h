// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/SequencerModuleOutlinerScriptingObject.h"

#ifdef SEQUENCER_SequencerModuleOutlinerScriptingObject_generated_h
#error "SequencerModuleOutlinerScriptingObject.generated.h already included, missing '#pragma once' in SequencerModuleOutlinerScriptingObject.h"
#endif
#define SEQUENCER_SequencerModuleOutlinerScriptingObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSection;
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FSequencerViewModelScriptingStruct;

// ********** Begin Class USequencerModuleOutlinerScriptingObject **********************************
#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBindingTags); \
	DECLARE_FUNCTION(execRemoveBindingTags); \
	DECLARE_FUNCTION(execAddBindingTags); \
	DECLARE_FUNCTION(execGetPreviousKey); \
	DECLARE_FUNCTION(execGetNextKey); \
	DECLARE_FUNCTION(execGetSections);


struct Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerModuleOutlinerScriptingObject(); \
	friend struct ::Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerModuleOutlinerScriptingObject, USequencerOutlinerScriptingObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_NoRegister) \
	DECLARE_SERIALIZER(USequencerModuleOutlinerScriptingObject)


#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerModuleOutlinerScriptingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerModuleOutlinerScriptingObject(USequencerModuleOutlinerScriptingObject&&) = delete; \
	USequencerModuleOutlinerScriptingObject(const USequencerModuleOutlinerScriptingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerModuleOutlinerScriptingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerModuleOutlinerScriptingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerModuleOutlinerScriptingObject) \
	NO_API virtual ~USequencerModuleOutlinerScriptingObject();


#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_18_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerModuleOutlinerScriptingObject;

// ********** End Class USequencerModuleOutlinerScriptingObject ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
