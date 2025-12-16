// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEditorMode.h"

#ifdef DATAFLOWEDITOR_DataflowEditorMode_generated_h
#error "DataflowEditorMode.generated.h already included, missing '#pragma once' in DataflowEditorMode.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowEditorMode ******************************************************
struct Z_Construct_UClass_UDataflowEditorMode_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEditorMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowEditorMode(); \
	friend struct ::Z_Construct_UClass_UDataflowEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEditorMode, UBaseCharacterFXEditorMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEditorMode_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEditorMode)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEditorMode(UDataflowEditorMode&&) = delete; \
	UDataflowEditorMode(const UDataflowEditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowEditorMode) \
	DATAFLOWEDITOR_API virtual ~UDataflowEditorMode();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEditorMode;

// ********** End Class UDataflowEditorMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
