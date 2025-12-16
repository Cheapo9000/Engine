// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNode.h"

#ifdef OPTIMUSCORE_OptimusNode_generated_h
#error "OptimusNode.generated.h already included, missing '#pragma once' in OptimusNode.h"
#endif
#define OPTIMUSCORE_OptimusNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusNode *************************************************************
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGraphPosition); \
	DECLARE_FUNCTION(execSetGraphPosition); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execGetNodeCategory);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode, OPTIMUSCORE_API)


struct Z_Construct_UClass_UOptimusNode_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode(UOptimusNode&&) = delete; \
	UOptimusNode(const UOptimusNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_26_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode;

// ********** End Class UOptimusNode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
