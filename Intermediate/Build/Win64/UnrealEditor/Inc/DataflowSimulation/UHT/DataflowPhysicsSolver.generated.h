// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowPhysicsSolver.h"

#ifdef DATAFLOWSIMULATION_DataflowPhysicsSolver_generated_h
#error "DataflowPhysicsSolver.generated.h already included, missing '#pragma once' in DataflowPhysicsSolver.h"
#endif
#define DATAFLOWSIMULATION_DataflowPhysicsSolver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowPhysicsSolverProxy ***************************************
struct Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics; \
	DATAFLOWSIMULATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


struct FDataflowPhysicsSolverProxy;
// ********** End ScriptStruct FDataflowPhysicsSolverProxy *****************************************

// ********** Begin Interface UDataflowPhysicsSolverInterface **************************************
struct Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsSolverInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowPhysicsSolverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowPhysicsSolverInterface(UDataflowPhysicsSolverInterface&&) = delete; \
	UDataflowPhysicsSolverInterface(const UDataflowPhysicsSolverInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowPhysicsSolverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowPhysicsSolverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowPhysicsSolverInterface) \
	virtual ~UDataflowPhysicsSolverInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowPhysicsSolverInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowPhysicsSolverInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowPhysicsSolverInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowPhysicsSolverInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowPhysicsSolverInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowPhysicsSolverInterface() {} \
public: \
	typedef UDataflowPhysicsSolverInterface UClassType; \
	typedef IDataflowPhysicsSolverInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_37_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowPhysicsSolverInterface;

// ********** End Interface UDataflowPhysicsSolverInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
