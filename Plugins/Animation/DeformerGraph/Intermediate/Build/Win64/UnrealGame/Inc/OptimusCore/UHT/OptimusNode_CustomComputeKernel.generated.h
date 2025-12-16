// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_CustomComputeKernel.h"

#ifdef OPTIMUSCORE_OptimusNode_CustomComputeKernel_generated_h
#error "OptimusNode_CustomComputeKernel.generated.h already included, missing '#pragma once' in OptimusNode_CustomComputeKernel.h"
#endif
#define OPTIMUSCORE_OptimusNode_CustomComputeKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusSecondaryInputBindingsGroup *******************************
struct Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusSecondaryInputBindingsGroup;
// ********** End ScriptStruct FOptimusSecondaryInputBindingsGroup *********************************

// ********** Begin Class UOptimusNode_CustomComputeKernel *****************************************
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_CustomComputeKernel, NO_API)


struct Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_CustomComputeKernel(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_CustomComputeKernel, UOptimusNode_ComputeKernelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_CustomComputeKernel) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_CustomComputeKernel*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_CustomComputeKernel(UOptimusNode_CustomComputeKernel&&) = delete; \
	UOptimusNode_CustomComputeKernel(const UOptimusNode_CustomComputeKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_CustomComputeKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_CustomComputeKernel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_CustomComputeKernel) \
	NO_API virtual ~UOptimusNode_CustomComputeKernel();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_34_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_CustomComputeKernel;

// ********** End Class UOptimusNode_CustomComputeKernel *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
