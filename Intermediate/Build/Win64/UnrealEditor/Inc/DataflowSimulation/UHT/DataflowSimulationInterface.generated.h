// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSimulationInterface.h"

#ifdef DATAFLOWSIMULATION_DataflowSimulationInterface_generated_h
#error "DataflowSimulationInterface.generated.h already included, missing '#pragma once' in DataflowSimulationInterface.h"
#endif
#define DATAFLOWSIMULATION_DataflowSimulationInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowSimulationAsset ******************************************
struct Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics; \
	DATAFLOWSIMULATION_API static class UScriptStruct* StaticStruct();


struct FDataflowSimulationAsset;
// ********** End ScriptStruct FDataflowSimulationAsset ********************************************

// ********** Begin Interface UDataflowSimulationInterface *****************************************
struct Z_Construct_UClass_UDataflowSimulationInterface_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowSimulationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSimulationInterface(UDataflowSimulationInterface&&) = delete; \
	UDataflowSimulationInterface(const UDataflowSimulationInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowSimulationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSimulationInterface) \
	virtual ~UDataflowSimulationInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowSimulationInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowSimulationInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowSimulationInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSimulationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowSimulationInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSimulationInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowSimulationInterface() {} \
public: \
	typedef UDataflowSimulationInterface UClassType; \
	typedef IDataflowSimulationInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_32_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSimulationInterface;

// ********** End Interface UDataflowSimulationInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
