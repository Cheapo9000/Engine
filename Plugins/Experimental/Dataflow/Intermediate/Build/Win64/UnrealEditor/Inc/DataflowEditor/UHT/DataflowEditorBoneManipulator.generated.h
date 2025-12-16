// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowEditorTools/DataflowEditorBoneManipulator.h"

#ifdef DATAFLOWEDITOR_DataflowEditorBoneManipulator_generated_h
#error "DataflowEditorBoneManipulator.generated.h already included, missing '#pragma once' in DataflowEditorBoneManipulator.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorBoneManipulator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowBoneManipulator *************************************************
struct Z_Construct_UClass_UDataflowBoneManipulator_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowBoneManipulator_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowBoneManipulator(); \
	friend struct ::Z_Construct_UClass_UDataflowBoneManipulator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowBoneManipulator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowBoneManipulator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowBoneManipulator_NoRegister) \
	DECLARE_SERIALIZER(UDataflowBoneManipulator)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowBoneManipulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowBoneManipulator(UDataflowBoneManipulator&&) = delete; \
	UDataflowBoneManipulator(const UDataflowBoneManipulator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowBoneManipulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowBoneManipulator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowBoneManipulator) \
	DATAFLOWEDITOR_API virtual ~UDataflowBoneManipulator();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowBoneManipulator;

// ********** End Class UDataflowBoneManipulator ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorBoneManipulator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
