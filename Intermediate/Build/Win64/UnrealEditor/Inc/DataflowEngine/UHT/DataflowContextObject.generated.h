// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowContextObject.h"

#ifdef DATAFLOWENGINE_DataflowContextObject_generated_h
#error "DataflowContextObject.generated.h already included, missing '#pragma once' in DataflowContextObject.h"
#endif
#define DATAFLOWENGINE_DataflowContextObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowContextObject ***************************************************
struct Z_Construct_UClass_UDataflowContextObject_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowContextObject(); \
	friend struct ::Z_Construct_UClass_UDataflowContextObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowContextObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowContextObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowContextObject_NoRegister) \
	DECLARE_SERIALIZER(UDataflowContextObject)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowContextObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowContextObject(UDataflowContextObject&&) = delete; \
	UDataflowContextObject(const UDataflowContextObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowContextObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowContextObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowContextObject) \
	DATAFLOWENGINE_API virtual ~UDataflowContextObject();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_25_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowContextObject;

// ********** End Class UDataflowContextObject *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
