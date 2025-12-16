// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RewindDebugger/SequenceInfoTrack.h"

#ifdef UAFANIMGRAPHEDITOR_SequenceInfoTrack_generated_h
#error "SequenceInfoTrack.generated.h already included, missing '#pragma once' in SequenceInfoTrack.h"
#endif
#define UAFANIMGRAPHEDITOR_SequenceInfoTrack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNextSyncMarkerTraceInfo **************************************
struct Z_Construct_UScriptStruct_FAnimNextSyncMarkerTraceInfo_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextSyncMarkerTraceInfo_Statics; \
	UAFANIMGRAPHEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimNextSyncMarkerTraceInfo;
// ********** End ScriptStruct FAnimNextSyncMarkerTraceInfo ****************************************

// ********** Begin ScriptStruct FAnimNextSequenceTraceInfo ****************************************
struct Z_Construct_UScriptStruct_FAnimNextSequenceTraceInfo_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNextSequenceTraceInfo_Statics; \
	UAFANIMGRAPHEDITOR_API static class UScriptStruct* StaticStruct();


struct FAnimNextSequenceTraceInfo;
// ********** End ScriptStruct FAnimNextSequenceTraceInfo ******************************************

// ********** Begin Class USequenceInfoDetailsObject ***********************************************
struct Z_Construct_UClass_USequenceInfoDetailsObject_Statics;
UAFANIMGRAPHEDITOR_API UClass* Z_Construct_UClass_USequenceInfoDetailsObject_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceInfoDetailsObject(); \
	friend struct ::Z_Construct_UClass_USequenceInfoDetailsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPHEDITOR_API UClass* ::Z_Construct_UClass_USequenceInfoDetailsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceInfoDetailsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraphEditor"), Z_Construct_UClass_USequenceInfoDetailsObject_NoRegister) \
	DECLARE_SERIALIZER(USequenceInfoDetailsObject)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceInfoDetailsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceInfoDetailsObject(USequenceInfoDetailsObject&&) = delete; \
	USequenceInfoDetailsObject(const USequenceInfoDetailsObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceInfoDetailsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceInfoDetailsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceInfoDetailsObject) \
	NO_API virtual ~USequenceInfoDetailsObject();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceInfoDetailsObject;

// ********** End Class USequenceInfoDetailsObject *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraphEditor_Private_RewindDebugger_SequenceInfoTrack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
