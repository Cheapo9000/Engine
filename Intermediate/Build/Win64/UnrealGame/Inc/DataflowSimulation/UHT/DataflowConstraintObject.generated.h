// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowConstraintObject.h"

#ifdef DATAFLOWSIMULATION_DataflowConstraintObject_generated_h
#error "DataflowConstraintObject.generated.h already included, missing '#pragma once' in DataflowConstraintObject.h"
#endif
#define DATAFLOWSIMULATION_DataflowConstraintObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowConstraintObjectProxy ************************************
struct Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics; \
	DATAFLOWSIMULATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


struct FDataflowConstraintObjectProxy;
// ********** End ScriptStruct FDataflowConstraintObjectProxy **************************************

// ********** Begin Interface UDataflowConstraintObjectInterface ***********************************
struct Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowConstraintObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowConstraintObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowConstraintObjectInterface(UDataflowConstraintObjectInterface&&) = delete; \
	UDataflowConstraintObjectInterface(const UDataflowConstraintObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowConstraintObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowConstraintObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowConstraintObjectInterface) \
	virtual ~UDataflowConstraintObjectInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowConstraintObjectInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowConstraintObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowConstraintObjectInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowConstraintObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowConstraintObjectInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowConstraintObjectInterface() {} \
public: \
	typedef UDataflowConstraintObjectInterface UClassType; \
	typedef IDataflowConstraintObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_28_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowConstraintObjectInterface;

// ********** End Interface UDataflowConstraintObjectInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
