// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_GetVariable.h"

#ifdef OPTIMUSCORE_OptimusNode_GetVariable_generated_h
#error "OptimusNode_GetVariable.generated.h already included, missing '#pragma once' in OptimusNode_GetVariable.h"
#endif
#define OPTIMUSCORE_OptimusNode_GetVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusNode_GetVariable_DuplicationInfo **************************
struct Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusNode_GetVariable_DuplicationInfo;
// ********** End ScriptStruct FOptimusNode_GetVariable_DuplicationInfo ****************************

// ********** Begin Class UOptimusNode_GetVariable *************************************************
struct Z_Construct_UClass_UOptimusNode_GetVariable_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_GetVariable(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_GetVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_GetVariable, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_GetVariable) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_GetVariable*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_GetVariable(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_GetVariable(UOptimusNode_GetVariable&&) = delete; \
	UOptimusNode_GetVariable(const UOptimusNode_GetVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_GetVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_GetVariable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_GetVariable) \
	NO_API virtual ~UOptimusNode_GetVariable();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_34_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_GetVariable;

// ********** End Class UOptimusNode_GetVariable ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
