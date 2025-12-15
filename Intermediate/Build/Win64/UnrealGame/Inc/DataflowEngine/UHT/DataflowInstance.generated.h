// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowInstance.h"

#ifdef DATAFLOWENGINE_DataflowInstance_generated_h
#error "DataflowInstance.generated.h already included, missing '#pragma once' in DataflowInstance.h"
#endif
#define DATAFLOWENGINE_DataflowInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowVariableOverrides ****************************************
struct Z_Construct_UScriptStruct_FDataflowVariableOverrides_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowVariableOverrides_Statics; \
	DATAFLOWENGINE_API static class UScriptStruct* StaticStruct();


struct FDataflowVariableOverrides;
// ********** End ScriptStruct FDataflowVariableOverrides ******************************************

// ********** Begin ScriptStruct FDataflowInstance *************************************************
struct Z_Construct_UScriptStruct_FDataflowInstance_Statics;
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowInstance_Statics; \
	DATAFLOWENGINE_API static class UScriptStruct* StaticStruct();


struct FDataflowInstance;
// ********** End ScriptStruct FDataflowInstance ***************************************************

// ********** Begin Interface UDataflowInstanceInterface *******************************************
struct Z_Construct_UClass_UDataflowInstanceInterface_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowInstanceInterface_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowInstanceInterface(UDataflowInstanceInterface&&) = delete; \
	UDataflowInstanceInterface(const UDataflowInstanceInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowInstanceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowInstanceInterface) \
	virtual ~UDataflowInstanceInterface() = default;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowInstanceInterface(); \
	friend struct ::Z_Construct_UClass_UDataflowInstanceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowInstanceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowInstanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowInstanceInterface_NoRegister) \
	DECLARE_SERIALIZER(UDataflowInstanceInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowInstanceInterface() {} \
public: \
	typedef UDataflowInstanceInterface UClassType; \
	typedef IDataflowInstanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_278_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h_281_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowInstanceInterface;

// ********** End Interface UDataflowInstanceInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
