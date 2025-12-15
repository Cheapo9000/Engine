// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowGraph.h"

#ifdef DATAFLOWCORE_DataflowGraph_generated_h
#error "DataflowGraph.generated.h already included, missing '#pragma once' in DataflowGraph.h"
#endif
#define DATAFLOWCORE_DataflowGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataflowGraphInterface **********************************************
struct Z_Construct_UClass_UDataflowGraphInterface_Statics;
DATAFLOWCORE_API UClass* Z_Construct_UClass_UDataflowGraphInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWCORE_API UDataflowGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowGraphInterface(UDataflowGraphInterface&&) = delete; \
	UDataflowGraphInterface(const UDataflowGraphInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWCORE_API, UDataflowGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowGraphInterface) \
	virtual ~UDataflowGraphInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowGraphInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowGraphInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWCORE_API UClass* ::Z_Construct_UClass_UDataflowGraphInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowGraphInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowCore"), Z_Construct_UClass_UDataflowGraphInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowGraphInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowGraphInterface() {} \
public: \
	typedef UDataflowGraphInterface UClassType; \
	typedef IDataflowGraphInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_22_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowGraphInterface;

// ********** End Interface UDataflowGraphInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
