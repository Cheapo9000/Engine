// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ComputeGraph.h"

#ifdef COMPUTEFRAMEWORK_ComputeGraph_generated_h
#error "ComputeGraph.generated.h already included, missing '#pragma once' in ComputeGraph.h"
#endif
#define COMPUTEFRAMEWORK_ComputeGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FComputeGraphEdge *************************************************
struct Z_Construct_UScriptStruct_FComputeGraphEdge_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComputeGraphEdge_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FComputeGraphEdge;
// ********** End ScriptStruct FComputeGraphEdge ***************************************************

// ********** Begin Class UComputeGraph ************************************************************
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UComputeGraph, COMPUTEFRAMEWORK_API)


struct Z_Construct_UClass_UComputeGraph_Statics;
COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComputeGraph(); \
	friend struct ::Z_Construct_UClass_UComputeGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPUTEFRAMEWORK_API UClass* ::Z_Construct_UClass_UComputeGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UComputeGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComputeFramework"), Z_Construct_UClass_UComputeGraph_NoRegister) \
	DECLARE_SERIALIZER(UComputeGraph) \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComputeGraph(UComputeGraph&&) = delete; \
	UComputeGraph(const UComputeGraph&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComputeGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComputeGraph) \
	COMPUTEFRAMEWORK_API virtual ~UComputeGraph();


#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_70_PROLOG
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComputeGraph;

// ********** End Class UComputeGraph **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
