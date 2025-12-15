// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowPhysicsObject.h"

#ifdef DATAFLOWSIMULATION_DataflowPhysicsObject_generated_h
#error "DataflowPhysicsObject.generated.h already included, missing '#pragma once' in DataflowPhysicsObject.h"
#endif
#define DATAFLOWSIMULATION_DataflowPhysicsObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowPhysicsObjectProxy ***************************************
struct Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics; \
	DATAFLOWSIMULATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


struct FDataflowPhysicsObjectProxy;
// ********** End ScriptStruct FDataflowPhysicsObjectProxy *****************************************

// ********** Begin Interface UDataflowPhysicsObjectInterface **************************************
struct Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowPhysicsObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowPhysicsObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowPhysicsObjectInterface(UDataflowPhysicsObjectInterface&&) = delete; \
	UDataflowPhysicsObjectInterface(const UDataflowPhysicsObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowPhysicsObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowPhysicsObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowPhysicsObjectInterface) \
	virtual ~UDataflowPhysicsObjectInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowPhysicsObjectInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowPhysicsObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowPhysicsObjectInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowPhysicsObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowPhysicsObjectInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowPhysicsObjectInterface() {} \
public: \
	typedef UDataflowPhysicsObjectInterface UClassType; \
	typedef IDataflowPhysicsObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_28_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowPhysicsObjectInterface;

// ********** End Interface UDataflowPhysicsObjectInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
