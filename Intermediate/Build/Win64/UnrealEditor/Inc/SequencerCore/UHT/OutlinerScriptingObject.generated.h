// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/OutlinerScriptingObject.h"

#ifdef SEQUENCERCORE_OutlinerScriptingObject_generated_h
#error "OutlinerScriptingObject.generated.h already included, missing '#pragma once' in OutlinerScriptingObject.h"
#endif
#define SEQUENCERCORE_OutlinerScriptingObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSequencerViewModelScriptingStruct;

// ********** Begin Delegate FSequencerOutlinerSelectionChanged ************************************
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_16_DELEGATE \
SEQUENCERCORE_API void FSequencerOutlinerSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& SequencerOutlinerSelectionChanged);


// ********** End Delegate FSequencerOutlinerSelectionChanged **************************************

// ********** Begin Class USequencerOutlinerScriptingObject ****************************************
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPinnedNodes); \
	DECLARE_FUNCTION(execGetPinnedNodes); \
	DECLARE_FUNCTION(execSetLockedNodes); \
	DECLARE_FUNCTION(execGetLockedNodes); \
	DECLARE_FUNCTION(execSetDeactivatedNodes); \
	DECLARE_FUNCTION(execGetDeactivatedNodes); \
	DECLARE_FUNCTION(execSetSoloNodes); \
	DECLARE_FUNCTION(execGetSoloNodes); \
	DECLARE_FUNCTION(execSetMuteNodes); \
	DECLARE_FUNCTION(execGetMuteNodes); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execGetSelection); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetRootNode);


struct Z_Construct_UClass_USequencerOutlinerScriptingObject_Statics;
SEQUENCERCORE_API UClass* Z_Construct_UClass_USequencerOutlinerScriptingObject_NoRegister();

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerOutlinerScriptingObject(); \
	friend struct ::Z_Construct_UClass_USequencerOutlinerScriptingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERCORE_API UClass* ::Z_Construct_UClass_USequencerOutlinerScriptingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerOutlinerScriptingObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerCore"), Z_Construct_UClass_USequencerOutlinerScriptingObject_NoRegister) \
	DECLARE_SERIALIZER(USequencerOutlinerScriptingObject)


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERCORE_API USequencerOutlinerScriptingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerOutlinerScriptingObject(USequencerOutlinerScriptingObject&&) = delete; \
	USequencerOutlinerScriptingObject(const USequencerOutlinerScriptingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERCORE_API, USequencerOutlinerScriptingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerOutlinerScriptingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerOutlinerScriptingObject) \
	SEQUENCERCORE_API virtual ~USequencerOutlinerScriptingObject();


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_18_PROLOG
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerOutlinerScriptingObject;

// ********** End Class USequencerOutlinerScriptingObject ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
