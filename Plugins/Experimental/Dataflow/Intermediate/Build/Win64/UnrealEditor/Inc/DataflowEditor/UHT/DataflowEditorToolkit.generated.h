// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEditorToolkit.h"

#ifdef DATAFLOWEDITOR_DataflowEditorToolkit_generated_h
#error "DataflowEditorToolkit.generated.h already included, missing '#pragma once' in DataflowEditorToolkit.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorToolkit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowEvaluationSettings **********************************************
struct Z_Construct_UClass_UDataflowEvaluationSettings_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEvaluationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowEvaluationSettings(); \
	friend struct ::Z_Construct_UClass_UDataflowEvaluationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEvaluationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEvaluationSettings, UDataflowEditorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEvaluationSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEvaluationSettings)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEvaluationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEvaluationSettings(UDataflowEvaluationSettings&&) = delete; \
	UDataflowEvaluationSettings(const UDataflowEvaluationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEvaluationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEvaluationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEvaluationSettings) \
	DATAFLOWEDITOR_API virtual ~UDataflowEvaluationSettings();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h_56_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEvaluationSettings;

// ********** End Class UDataflowEvaluationSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorToolkit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
