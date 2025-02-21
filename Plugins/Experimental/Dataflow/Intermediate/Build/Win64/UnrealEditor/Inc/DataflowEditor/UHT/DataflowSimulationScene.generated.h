// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSimulationScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWEDITOR_DataflowSimulationScene_generated_h
#error "DataflowSimulationScene.generated.h already included, missing '#pragma once' in DataflowSimulationScene.h"
#endif
#define DATAFLOWEDITOR_DataflowSimulationScene_generated_h

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNewGeometryCache); \
	DECLARE_FUNCTION(execGenerateGeometryCache);


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSimulationSceneDescription(); \
	friend struct Z_Construct_UClass_UDataflowSimulationSceneDescription_Statics; \
public: \
	DECLARE_CLASS(UDataflowSimulationSceneDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataflowSimulationSceneDescription)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowSimulationSceneDescription(UDataflowSimulationSceneDescription&&); \
	UDataflowSimulationSceneDescription(const UDataflowSimulationSceneDescription&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowSimulationSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationSceneDescription); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSimulationSceneDescription) \
	NO_API virtual ~UDataflowSimulationSceneDescription();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowSimulationSceneDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSimulationScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
