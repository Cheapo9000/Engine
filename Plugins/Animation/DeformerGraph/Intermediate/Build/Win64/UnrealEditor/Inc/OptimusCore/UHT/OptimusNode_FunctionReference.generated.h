// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_FunctionReference.h"

#ifdef OPTIMUSCORE_OptimusNode_FunctionReference_generated_h
#error "OptimusNode_FunctionReference.generated.h already included, missing '#pragma once' in OptimusNode_FunctionReference.h"
#endif
#define OPTIMUSCORE_OptimusNode_FunctionReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusNode_FunctionReference *******************************************
struct Z_Construct_UClass_UOptimusNode_FunctionReference_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_FunctionReference(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_FunctionReference_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_FunctionReference, UOptimusNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_FunctionReference) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNode_FunctionReference*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_FunctionReference(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_FunctionReference(UOptimusNode_FunctionReference&&) = delete; \
	UOptimusNode_FunctionReference(const UOptimusNode_FunctionReference&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_FunctionReference); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_FunctionReference); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_FunctionReference) \
	NO_API virtual ~UOptimusNode_FunctionReference();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_15_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_FunctionReference;

// ********** End Class UOptimusNode_FunctionReference *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
