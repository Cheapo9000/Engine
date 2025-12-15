// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowMesh.h"

#ifdef DATAFLOWENGINE_DataflowMesh_generated_h
#error "DataflowMesh.generated.h already included, missing '#pragma once' in DataflowMesh.h"
#endif
#define DATAFLOWENGINE_DataflowMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowMesh ************************************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowMesh, DATAFLOWENGINE_API)


struct Z_Construct_UClass_UDataflowMesh_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowMesh_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowMesh(); \
	friend struct ::Z_Construct_UClass_UDataflowMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowMesh_NoRegister) \
	DECLARE_SERIALIZER(UDataflowMesh) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowMesh(UDataflowMesh&&) = delete; \
	UDataflowMesh(const UDataflowMesh&) = delete; \
	DATAFLOWENGINE_API virtual ~UDataflowMesh();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_16_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowMesh;

// ********** End Class UDataflowMesh **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
