// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_ComputeKernelBase.h"

#ifdef OPTIMUSCORE_OptimusNode_ComputeKernelBase_generated_h
#error "OptimusNode_ComputeKernelBase.generated.h already included, missing '#pragma once' in OptimusNode_ComputeKernelBase.h"
#endif
#define OPTIMUSCORE_OptimusNode_ComputeKernelBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusNode_ComputeKernelBase *******************************************
struct Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_ComputeKernelBase(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_ComputeKernelBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_ComputeKernelBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_ComputeKernelBase, UOptimusNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_ComputeKernelBase_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_ComputeKernelBase) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_ComputeKernelBase*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_ComputeKernelBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_ComputeKernelBase(UOptimusNode_ComputeKernelBase&&) = delete; \
	UOptimusNode_ComputeKernelBase(const UOptimusNode_ComputeKernelBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_ComputeKernelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_ComputeKernelBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_ComputeKernelBase) \
	NO_API virtual ~UOptimusNode_ComputeKernelBase();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_18_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_ComputeKernelBase;

// ********** End Class UOptimusNode_ComputeKernelBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComputeKernelBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
