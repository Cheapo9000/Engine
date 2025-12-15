// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceRecordingBase.h"

#ifdef SEQUENCERECORDER_SequenceRecordingBase_generated_h
#error "SequenceRecordingBase.generated.h already included, missing '#pragma once' in SequenceRecordingBase.h"
#endif
#define SEQUENCERECORDER_SequenceRecordingBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequenceRecordingBase ***************************************************
struct Z_Construct_UClass_USequenceRecordingBase_Statics;
SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase_NoRegister();

#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceRecordingBase(); \
	friend struct ::Z_Construct_UClass_USequenceRecordingBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERECORDER_API UClass* ::Z_Construct_UClass_USequenceRecordingBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceRecordingBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), Z_Construct_UClass_USequenceRecordingBase_NoRegister) \
	DECLARE_SERIALIZER(USequenceRecordingBase)


#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERECORDER_API USequenceRecordingBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceRecordingBase(USequenceRecordingBase&&) = delete; \
	USequenceRecordingBase(const USequenceRecordingBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERECORDER_API, USequenceRecordingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceRecordingBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceRecordingBase) \
	SEQUENCERECORDER_API virtual ~USequenceRecordingBase();


#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_14_PROLOG
#define FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceRecordingBase;

// ********** End Class USequenceRecordingBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
