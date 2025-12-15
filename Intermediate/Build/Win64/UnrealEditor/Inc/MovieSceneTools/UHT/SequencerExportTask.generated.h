// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerExportTask.h"

#ifdef MOVIESCENETOOLS_SequencerExportTask_generated_h
#error "SequencerExportTask.generated.h already included, missing '#pragma once' in SequencerExportTask.h"
#endif
#define MOVIESCENETOOLS_SequencerExportTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequencerExportTask *****************************************************
struct Z_Construct_UClass_USequencerExportTask_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_USequencerExportTask_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerExportTask(); \
	friend struct ::Z_Construct_UClass_USequencerExportTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_USequencerExportTask_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerExportTask, UAssetExportTask, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_USequencerExportTask_NoRegister) \
	DECLARE_SERIALIZER(USequencerExportTask)


#define FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerExportTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerExportTask(USequencerExportTask&&) = delete; \
	USequencerExportTask(const USequencerExportTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerExportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerExportTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerExportTask) \
	NO_API virtual ~USequencerExportTask();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_14_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerExportTask;

// ********** End Class USequencerExportTask *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_SequencerExportTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
