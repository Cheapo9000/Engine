// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGGraphCompilationData.h"

#ifdef PCG_PCGGraphCompilationData_generated_h
#error "PCGGraphCompilationData.generated.h already included, missing '#pragma once' in PCGGraphCompilationData.h"
#endif
#define PCG_PCGGraphCompilationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGGraphTasks ****************************************************
struct Z_Construct_UScriptStruct_FPCGGraphTasks_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGGraphTasks_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGGraphTasks;
// ********** End ScriptStruct FPCGGraphTasks ******************************************************

// ********** Begin ScriptStruct FPCGComputeGraphs *************************************************
struct Z_Construct_UScriptStruct_FPCGComputeGraphs_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGComputeGraphs_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGComputeGraphs;
// ********** End ScriptStruct FPCGComputeGraphs ***************************************************

// ********** Begin Class UPCGGraphCompilationData *************************************************
struct Z_Construct_UClass_UPCGGraphCompilationData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphCompilationData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphCompilationData(); \
	friend struct ::Z_Construct_UClass_UPCGGraphCompilationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphCompilationData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphCompilationData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphCompilationData_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphCompilationData)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphCompilationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphCompilationData(UPCGGraphCompilationData&&) = delete; \
	UPCGGraphCompilationData(const UPCGGraphCompilationData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphCompilationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphCompilationData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphCompilationData) \
	NO_API virtual ~UPCGGraphCompilationData();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_45_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphCompilationData;

// ********** End Class UPCGGraphCompilationData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphCompilationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
