// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerCurveEditorObject.h"

#ifdef SEQUENCERSCRIPTINGEDITOR_SequencerCurveEditorObject_generated_h
#error "SequencerCurveEditorObject.generated.h already included, missing '#pragma once' in SequencerCurveEditorObject.h"
#endif
#define SEQUENCERSCRIPTINGEDITOR_SequencerCurveEditorObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UCurveEditorFilterBase;
class UObject;
struct FLinearColor;
struct FSequencerChannelProxy;

// ********** Begin ScriptStruct FSequencerChannelProxy ********************************************
struct Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics;
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FSequencerChannelProxy;
// ********** End ScriptStruct FSequencerChannelProxy **********************************************

// ********** Begin Class USequencerCurveEditorObject **********************************************
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteColorForChannels); \
	DECLARE_FUNCTION(execSetRandomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannel); \
	DECLARE_FUNCTION(execGetCustomColorForChannel); \
	DECLARE_FUNCTION(execHasCustomColorForChannel); \
	DECLARE_FUNCTION(execEmptySelection); \
	DECLARE_FUNCTION(execSelectKeys); \
	DECLARE_FUNCTION(execIsCurveShown); \
	DECLARE_FUNCTION(execShowCurve); \
	DECLARE_FUNCTION(execGetSelectedKeys); \
	DECLARE_FUNCTION(execGetChannelsWithSelectedKeys); \
	DECLARE_FUNCTION(execApplyFilter); \
	DECLARE_FUNCTION(execCloseCurveEditor); \
	DECLARE_FUNCTION(execIsCurveEditorOpen); \
	DECLARE_FUNCTION(execOpenCurveEditor);


struct Z_Construct_UClass_USequencerCurveEditorObject_Statics;
SEQUENCERSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_USequencerCurveEditorObject_NoRegister();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerCurveEditorObject(); \
	friend struct ::Z_Construct_UClass_USequencerCurveEditorObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_USequencerCurveEditorObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerCurveEditorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScriptingEditor"), Z_Construct_UClass_USequencerCurveEditorObject_NoRegister) \
	DECLARE_SERIALIZER(USequencerCurveEditorObject)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERSCRIPTINGEDITOR_API USequencerCurveEditorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerCurveEditorObject(USequencerCurveEditorObject&&) = delete; \
	USequencerCurveEditorObject(const USequencerCurveEditorObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERSCRIPTINGEDITOR_API, USequencerCurveEditorObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerCurveEditorObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerCurveEditorObject) \
	SEQUENCERSCRIPTINGEDITOR_API virtual ~USequencerCurveEditorObject();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_44_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h_49_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerCurveEditorObject;

// ********** End Class USequencerCurveEditorObject ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerCurveEditorObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
