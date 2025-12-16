// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSimulationScene.h"

#ifdef DATAFLOWEDITOR_DataflowSimulationScene_generated_h
#error "DataflowSimulationScene.generated.h already included, missing '#pragma once' in DataflowSimulationScene.h"
#endif
#define DATAFLOWEDITOR_DataflowSimulationScene_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowSimulationSettings **********************************************
struct Z_Construct_UClass_UDataflowSimulationSettings_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowSimulationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSimulationSettings(); \
	friend struct ::Z_Construct_UClass_UDataflowSimulationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowSimulationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSimulationSettings, UDataflowEditorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowSimulationSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSimulationSettings)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowSimulationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSimulationSettings(UDataflowSimulationSettings&&) = delete; \
	UDataflowSimulationSettings(const UDataflowSimulationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowSimulationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSimulationSettings) \
	DATAFLOWEDITOR_API virtual ~UDataflowSimulationSettings();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSimulationSettings;

// ********** End Class UDataflowSimulationSettings ************************************************

// ********** Begin Class UDataflowSimulationSceneDescription **************************************
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNewGeometryCache); \
	DECLARE_FUNCTION(execGenerateGeometryCache);


struct Z_Construct_UClass_UDataflowSimulationSceneDescription_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowSimulationSceneDescription_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSimulationSceneDescription(); \
	friend struct ::Z_Construct_UClass_UDataflowSimulationSceneDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowSimulationSceneDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSimulationSceneDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowSimulationSceneDescription_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSimulationSceneDescription)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSimulationSceneDescription(UDataflowSimulationSceneDescription&&) = delete; \
	UDataflowSimulationSceneDescription(const UDataflowSimulationSceneDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowSimulationSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationSceneDescription); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSimulationSceneDescription) \
	DATAFLOWEDITOR_API virtual ~UDataflowSimulationSceneDescription();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_46_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSimulationSceneDescription;

// ********** End Class UDataflowSimulationSceneDescription ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
