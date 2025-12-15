// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowObject.h"

#ifdef DATAFLOWENGINE_DataflowObject_generated_h
#error "DataflowObject.generated.h already included, missing '#pragma once' in DataflowObject.h"
#endif
#define DATAFLOWENGINE_DataflowObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflow ****************************************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflow, DATAFLOWENGINE_API)


struct Z_Construct_UClass_UDataflow_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUDataflow(); \
	friend struct ::Z_Construct_UClass_UDataflow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflow_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflow, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflow_NoRegister) \
	DECLARE_SERIALIZER(UDataflow) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDataflow*>(this); }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflow); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflow(UDataflow&&) = delete; \
	UDataflow(const UDataflow&) = delete; \
	DATAFLOWENGINE_API virtual ~UDataflow();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_104_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflow;

// ********** End Class UDataflow ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h

// ********** Begin Enum EDataflowType *************************************************************
#define FOREACH_ENUM_EDATAFLOWTYPE(op) \
	op(EDataflowType::Construction) \
	op(EDataflowType::Simulation) 

enum class EDataflowType : uint8;
template<> struct TIsUEnumClass<EDataflowType> { enum { Value = true }; };
template<> DATAFLOWENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowType>();
// ********** End Enum EDataflowType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
