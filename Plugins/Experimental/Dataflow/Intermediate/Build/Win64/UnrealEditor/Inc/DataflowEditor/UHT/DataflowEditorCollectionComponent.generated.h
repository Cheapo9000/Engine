// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEditorCollectionComponent.h"

#ifdef DATAFLOWEDITOR_DataflowEditorCollectionComponent_generated_h
#error "DataflowEditorCollectionComponent.generated.h already included, missing '#pragma once' in DataflowEditorCollectionComponent.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorCollectionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowEditorCollectionComponent ***************************************
struct Z_Construct_UClass_UDataflowEditorCollectionComponent_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEditorCollectionComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowEditorCollectionComponent(); \
	friend struct ::Z_Construct_UClass_UDataflowEditorCollectionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEditorCollectionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEditorCollectionComponent, UDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEditorCollectionComponent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEditorCollectionComponent)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEditorCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEditorCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorCollectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorCollectionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEditorCollectionComponent(UDataflowEditorCollectionComponent&&) = delete; \
	UDataflowEditorCollectionComponent(const UDataflowEditorCollectionComponent&) = delete; \
	DATAFLOWEDITOR_API virtual ~UDataflowEditorCollectionComponent();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEditorCollectionComponent;

// ********** End Class UDataflowEditorCollectionComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorCollectionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
