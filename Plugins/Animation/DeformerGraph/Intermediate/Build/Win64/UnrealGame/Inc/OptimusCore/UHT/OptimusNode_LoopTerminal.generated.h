// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_LoopTerminal.h"

#ifdef OPTIMUSCORE_OptimusNode_LoopTerminal_generated_h
#error "OptimusNode_LoopTerminal.generated.h already included, missing '#pragma once' in OptimusNode_LoopTerminal.h"
#endif
#define OPTIMUSCORE_OptimusNode_LoopTerminal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusPinPairInfo ***********************************************
struct Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusPinPairInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusPinPairInfo;
// ********** End ScriptStruct FOptimusPinPairInfo *************************************************

// ********** Begin ScriptStruct FOptimusLoopTerminalInfo ******************************************
struct Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusLoopTerminalInfo;
// ********** End ScriptStruct FOptimusLoopTerminalInfo ********************************************

// ********** Begin Class UOptimusNode_LoopTerminal ************************************************
struct Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_LoopTerminal_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_LoopTerminal(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_LoopTerminal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_LoopTerminal_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_LoopTerminal, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_LoopTerminal_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_LoopTerminal) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_LoopTerminal*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_LoopTerminal(UOptimusNode_LoopTerminal&&) = delete; \
	UOptimusNode_LoopTerminal(const UOptimusNode_LoopTerminal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNode_LoopTerminal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_LoopTerminal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_LoopTerminal) \
	OPTIMUSCORE_API virtual ~UOptimusNode_LoopTerminal();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_51_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_LoopTerminal;

// ********** End Class UOptimusNode_LoopTerminal **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_LoopTerminal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
