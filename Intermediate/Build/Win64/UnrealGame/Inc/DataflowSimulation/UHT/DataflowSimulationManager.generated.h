// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSimulationManager.h"

#ifdef DATAFLOWSIMULATION_DataflowSimulationManager_generated_h
#error "DataflowSimulationManager.generated.h already included, missing '#pragma once' in DataflowSimulationManager.h"
#endif
#define DATAFLOWSIMULATION_DataflowSimulationManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowSimulationManager ***********************************************
struct Z_Construct_UClass_UDataflowSimulationManager_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationManager_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSimulationManager(); \
	friend struct ::Z_Construct_UClass_UDataflowSimulationManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowSimulationManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSimulationManager, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowSimulationManager_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSimulationManager)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSimulationManager(UDataflowSimulationManager&&) = delete; \
	UDataflowSimulationManager(const UDataflowSimulationManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowSimulationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSimulationManager)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_50_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSimulationManager;

// ********** End Class UDataflowSimulationManager *************************************************

// ********** Begin Interface UDataflowSimulationActor *********************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PostDataflowSimulationTick_Implementation(const float SimulationTime, const float DeltaTime) {}; \
	virtual void PreDataflowSimulationTick_Implementation(const float SimulationTime, const float DeltaTime) {}; \
	DECLARE_FUNCTION(execPostDataflowSimulationTick); \
	DECLARE_FUNCTION(execPreDataflowSimulationTick);


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataflowSimulationActor_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowSimulationActor_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowSimulationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSimulationActor(UDataflowSimulationActor&&) = delete; \
	UDataflowSimulationActor(const UDataflowSimulationActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowSimulationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSimulationActor) \
	virtual ~UDataflowSimulationActor() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowSimulationActor(); \
	friend struct ::Z_Construct_UClass_UDataflowSimulationActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowSimulationActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSimulationActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowSimulationActor_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSimulationActor)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowSimulationActor() {} \
public: \
	typedef UDataflowSimulationActor UClassType; \
	typedef IDataflowSimulationActor ThisClass; \
	static void Execute_PostDataflowSimulationTick(UObject* O, const float SimulationTime, const float DeltaTime); \
	static void Execute_PreDataflowSimulationTick(UObject* O, const float SimulationTime, const float DeltaTime); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_157_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h_160_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSimulationActor;

// ********** End Interface UDataflowSimulationActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
