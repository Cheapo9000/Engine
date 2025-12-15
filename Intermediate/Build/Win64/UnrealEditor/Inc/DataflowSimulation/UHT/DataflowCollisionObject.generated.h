// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowCollisionObject.h"

#ifdef DATAFLOWSIMULATION_DataflowCollisionObject_generated_h
#error "DataflowCollisionObject.generated.h already included, missing '#pragma once' in DataflowCollisionObject.h"
#endif
#define DATAFLOWSIMULATION_DataflowCollisionObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowCollisionObjectProxy *************************************
struct Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy_Statics; \
	DATAFLOWSIMULATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


struct FDataflowCollisionObjectProxy;
// ********** End ScriptStruct FDataflowCollisionObjectProxy ***************************************

// ********** Begin Interface UDataflowCollisionObjectInterface ************************************
struct Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowCollisionObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowCollisionObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowCollisionObjectInterface(UDataflowCollisionObjectInterface&&) = delete; \
	UDataflowCollisionObjectInterface(const UDataflowCollisionObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowCollisionObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowCollisionObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowCollisionObjectInterface) \
	virtual ~UDataflowCollisionObjectInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowCollisionObjectInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowCollisionObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowCollisionObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowCollisionObjectInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowCollisionObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowCollisionObjectInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowCollisionObjectInterface() {} \
public: \
	typedef UDataflowCollisionObjectInterface UClassType; \
	typedef IDataflowCollisionObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_28_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowCollisionObjectInterface;

// ********** End Interface UDataflowCollisionObjectInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowCollisionObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
