// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraGraph.h"

#ifdef NIAGARAEDITOR_NiagaraGraph_generated_h
#error "NiagaraGraph.generated.h already included, missing '#pragma once' in NiagaraGraph.h"
#endif
#define NIAGARAEDITOR_NiagaraGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraGraphParameterReference ***********************************
struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraGraphParameterReference_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraGraphParameterReference;
// ********** End ScriptStruct FNiagaraGraphParameterReference *************************************

// ********** Begin ScriptStruct FNiagaraGraphParameterReferenceCollection *************************
struct Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraGraphParameterReferenceCollection_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraGraphParameterReferenceCollection;
// ********** End ScriptStruct FNiagaraGraphParameterReferenceCollection ***************************

// ********** Begin ScriptStruct FNiagaraGraphScriptUsageInfo **************************************
struct Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraGraphScriptUsageInfo_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraGraphScriptUsageInfo;
// ********** End ScriptStruct FNiagaraGraphScriptUsageInfo ****************************************

// ********** Begin ScriptStruct FNiagaraParametersChangedData *************************************
struct Z_Construct_UScriptStruct_FNiagaraParametersChangedData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParametersChangedData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraParametersChangedData;
// ********** End ScriptStruct FNiagaraParametersChangedData ***************************************

// ********** Begin ScriptStruct FNiagaraParameterCreatedData **************************************
struct Z_Construct_UScriptStruct_FNiagaraParameterCreatedData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_192_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParameterCreatedData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraParametersChangedData Super;


struct FNiagaraParameterCreatedData;
// ********** End ScriptStruct FNiagaraParameterCreatedData ****************************************

// ********** Begin ScriptStruct FNiagaraParameterRenamedData **************************************
struct Z_Construct_UScriptStruct_FNiagaraParameterRenamedData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParameterRenamedData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraParametersChangedData Super;


struct FNiagaraParameterRenamedData;
// ********** End ScriptStruct FNiagaraParameterRenamedData ****************************************

// ********** Begin Class UNiagaraGraph ************************************************************
struct Z_Construct_UClass_UNiagaraGraph_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraGraph_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraGraph(); \
	friend struct ::Z_Construct_UClass_UNiagaraGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraGraph_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraGraph)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_212_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraGraph(UNiagaraGraph&&) = delete; \
	UNiagaraGraph(const UNiagaraGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraGraph) \
	NIAGARAEDITOR_API virtual ~UNiagaraGraph();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_209_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_212_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraGraph;

// ********** End Class UNiagaraGraph **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
