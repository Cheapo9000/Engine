// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowComponent.h"

#ifdef DATAFLOWENGINEPLUGIN_DataflowComponent_generated_h
#error "DataflowComponent.generated.h already included, missing '#pragma once' in DataflowComponent.h"
#endif
#define DATAFLOWENGINEPLUGIN_DataflowComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowComponent *******************************************************
struct Z_Construct_UClass_UDataflowComponent_Statics;
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowComponent(); \
	friend struct ::Z_Construct_UClass_UDataflowComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINEPLUGIN_API UClass* ::Z_Construct_UClass_UDataflowComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEnginePlugin"), Z_Construct_UClass_UDataflowComponent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowComponent)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINEPLUGIN_API UDataflowComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINEPLUGIN_API, UDataflowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowComponent(UDataflowComponent&&) = delete; \
	UDataflowComponent(const UDataflowComponent&) = delete;


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowComponent;

// ********** End Class UDataflowComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
