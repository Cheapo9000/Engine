// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowDebugDrawComponent.h"

#ifdef DATAFLOWENGINE_DataflowDebugDrawComponent_generated_h
#error "DataflowDebugDrawComponent.generated.h already included, missing '#pragma once' in DataflowDebugDrawComponent.h"
#endif
#define DATAFLOWENGINE_DataflowDebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowDebugDrawComponent **********************************************
struct Z_Construct_UClass_UDataflowDebugDrawComponent_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowDebugDrawComponent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowDebugDrawComponent(); \
	friend struct ::Z_Construct_UClass_UDataflowDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowDebugDrawComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowDebugDrawComponent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowDebugDrawComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowDebugDrawComponent(UDataflowDebugDrawComponent&&) = delete; \
	UDataflowDebugDrawComponent(const UDataflowDebugDrawComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowDebugDrawComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowDebugDrawComponent) \
	DATAFLOWENGINE_API virtual ~UDataflowDebugDrawComponent();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowDebugDrawComponent;

// ********** End Class UDataflowDebugDrawComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowDebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
