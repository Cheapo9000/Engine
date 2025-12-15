// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceRecorderBlueprintLibrary.h"

#ifdef SEQUENCERECORDER_SequenceRecorderBlueprintLibrary_generated_h
#error "SequenceRecorderBlueprintLibrary.generated.h already included, missing '#pragma once' in SequenceRecorderBlueprintLibrary.h"
#endif
#define SEQUENCERECORDER_SequenceRecorderBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class USequenceRecorderBlueprintLibrary ****************************************
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopRecordingSequence); \
	DECLARE_FUNCTION(execIsRecordingSequence); \
	DECLARE_FUNCTION(execStartRecordingSequence);


struct Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics;
SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceRecorderBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERECORDER_API UClass* ::Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USequenceRecorderBlueprintLibrary)


#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API USequenceRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceRecorderBlueprintLibrary(USequenceRecorderBlueprintLibrary&&) = delete; \
	USequenceRecorderBlueprintLibrary(const USequenceRecorderBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, USequenceRecorderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecorderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecorderBlueprintLibrary) \
	SEQUENCERECORDER_API virtual ~USequenceRecorderBlueprintLibrary();


#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceRecorderBlueprintLibrary;

// ********** End Class USequenceRecorderBlueprintLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
