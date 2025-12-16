// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowActor.h"

#ifdef DATAFLOWENGINEPLUGIN_DataflowActor_generated_h
#error "DataflowActor.generated.h already included, missing '#pragma once' in DataflowActor.h"
#endif
#define DATAFLOWENGINEPLUGIN_DataflowActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADataflowActor ***********************************************************
struct Z_Construct_UClass_ADataflowActor_Statics;
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_ADataflowActor_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADataflowActor(); \
	friend struct ::Z_Construct_UClass_ADataflowActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINEPLUGIN_API UClass* ::Z_Construct_UClass_ADataflowActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADataflowActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEnginePlugin"), Z_Construct_UClass_ADataflowActor_NoRegister) \
	DECLARE_SERIALIZER(ADataflowActor)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINEPLUGIN_API ADataflowActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADataflowActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINEPLUGIN_API, ADataflowActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataflowActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADataflowActor(ADataflowActor&&) = delete; \
	ADataflowActor(const ADataflowActor&) = delete; \
	DATAFLOWENGINEPLUGIN_API virtual ~ADataflowActor();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADataflowActor;

// ********** End Class ADataflowActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
