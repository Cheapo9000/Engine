// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGNode.h"

#ifdef PCG_PCGNode_generated_h
#error "PCGNode.generated.h already included, missing '#pragma once' in PCGNode.h"
#endif
#define PCG_PCGNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGGraph;
class UPCGNode;
class UPCGSettings;

// ********** Begin Class UPCGNode *****************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execRemoveEdgeTo); \
	DECLARE_FUNCTION(execAddEdgeTo); \
	DECLARE_FUNCTION(execGetGraph);


#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execGetNodePosition);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGNode_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGNode(); \
	friend struct ::Z_Construct_UClass_UPCGNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGNode_NoRegister) \
	DECLARE_SERIALIZER(UPCGNode)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGNode(UPCGNode&&) = delete; \
	UPCGNode(const UPCGNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNode) \
	PCG_API virtual ~UPCGNode();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGNode;

// ********** End Class UPCGNode *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
