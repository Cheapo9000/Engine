// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/OptimusNode_SetResource.h"

#ifdef OPTIMUSCORE_OptimusNode_SetResource_generated_h
#error "OptimusNode_SetResource.generated.h already included, missing '#pragma once' in OptimusNode_SetResource.h"
#endif
#define OPTIMUSCORE_OptimusNode_SetResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusNode_SetResource *************************************************
struct Z_Construct_UClass_UOptimusNode_SetResource_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SetResource_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode_SetResource(); \
	friend struct ::Z_Construct_UClass_UOptimusNode_SetResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNode_SetResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNode_SetResource, UOptimusNode_ResourceAccessorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNode_SetResource_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNode_SetResource)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode_SetResource(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNode_SetResource(UOptimusNode_SetResource&&) = delete; \
	UOptimusNode_SetResource(const UOptimusNode_SetResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode_SetResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode_SetResource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode_SetResource) \
	NO_API virtual ~UOptimusNode_SetResource();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNode_SetResource;

// ********** End Class UOptimusNode_SetResource ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SetResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
