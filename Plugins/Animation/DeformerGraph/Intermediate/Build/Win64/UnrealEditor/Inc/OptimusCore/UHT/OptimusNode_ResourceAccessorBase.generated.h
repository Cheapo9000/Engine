// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_ResourceAccessorBase.h"

#ifdef OPTIMUSCORE_OptimusNode_ResourceAccessorBase_generated_h
#error "OptimusNode_ResourceAccessorBase.generated.h already included, missing '#pragma once' in OptimusNode_ResourceAccessorBase.h"
#endif
#define OPTIMUSCORE_OptimusNode_ResourceAccessorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusNode_ResourceAccessorBase_DuplicationInfo *****************
struct Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusNode_ResourceAccessorBase_DuplicationInfo;
// ********** End ScriptStruct FOptimusNode_ResourceAccessorBase_DuplicationInfo *******************

// ********** Begin Class UOptimusNode_ResourceAccessorBase ****************************************
struct Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_ResourceAccessorBase(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_ResourceAccessorBase, UOptimusNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_ResourceAccessorBase) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_ResourceAccessorBase*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_ResourceAccessorBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_ResourceAccessorBase(UOptimusNode_ResourceAccessorBase&&) = delete; \
	UOptimusNode_ResourceAccessorBase(const UOptimusNode_ResourceAccessorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_ResourceAccessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_ResourceAccessorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_ResourceAccessorBase) \
	NO_API virtual ~UOptimusNode_ResourceAccessorBase();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_35_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_ResourceAccessorBase;

// ********** End Class UOptimusNode_ResourceAccessorBase ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
