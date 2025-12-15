// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowInterfaceGeometryCachable.h"

#ifdef DATAFLOWSIMULATION_DataflowInterfaceGeometryCachable_generated_h
#error "DataflowInterfaceGeometryCachable.generated.h already included, missing '#pragma once' in DataflowInterfaceGeometryCachable.h"
#endif
#define DATAFLOWSIMULATION_DataflowInterfaceGeometryCachable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataflowGeometryCachable ********************************************
struct Z_Construct_UClass_UDataflowGeometryCachable_Statics;
DATAFLOWSIMULATION_API UClass* Z_Construct_UClass_UDataflowGeometryCachable_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowGeometryCachable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowGeometryCachable(UDataflowGeometryCachable&&) = delete; \
	UDataflowGeometryCachable(const UDataflowGeometryCachable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowGeometryCachable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowGeometryCachable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowGeometryCachable) \
	virtual ~UDataflowGeometryCachable() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowGeometryCachable(); \
	friend struct ::Z_Construct_UClass_UDataflowGeometryCachable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWSIMULATION_API UClass* ::Z_Construct_UClass_UDataflowGeometryCachable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowGeometryCachable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), Z_Construct_UClass_UDataflowGeometryCachable_NoRegister) \
	DECLARE_SERIALIZER(UDataflowGeometryCachable)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowGeometryCachable() {} \
public: \
	typedef UDataflowGeometryCachable UClassType; \
	typedef IDataflowGeometryCachable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_16_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowGeometryCachable;

// ********** End Interface UDataflowGeometryCachable **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
