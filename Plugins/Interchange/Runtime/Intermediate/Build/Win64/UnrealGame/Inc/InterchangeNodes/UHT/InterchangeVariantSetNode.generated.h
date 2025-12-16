// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeVariantSetNode.h"

#ifdef INTERCHANGENODES_InterchangeVariantSetNode_generated_h
#error "InterchangeVariantSetNode.generated.h already included, missing '#pragma once' in InterchangeVariantSetNode.h"
#endif
#define INTERCHANGENODES_InterchangeVariantSetNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeVariantSetNode ***********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomDependencyUid); \
	DECLARE_FUNCTION(execAddCustomDependencyUid); \
	DECLARE_FUNCTION(execGetCustomDependencyUid); \
	DECLARE_FUNCTION(execGetCustomDependencyUids); \
	DECLARE_FUNCTION(execGetCustomDependencyUidCount); \
	DECLARE_FUNCTION(execSetCustomVariantsPayloadKey); \
	DECLARE_FUNCTION(execGetCustomVariantsPayloadKey); \
	DECLARE_FUNCTION(execSetCustomDisplayText); \
	DECLARE_FUNCTION(execGetCustomDisplayText);


struct Z_Construct_UClass_UInterchangeVariantSetNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeVariantSetNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeVariantSetNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVariantSetNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVariantSetNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVariantSetNode(UInterchangeVariantSetNode&&) = delete; \
	UInterchangeVariantSetNode(const UInterchangeVariantSetNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeVariantSetNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVariantSetNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeVariantSetNode) \
	INTERCHANGENODES_API virtual ~UInterchangeVariantSetNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVariantSetNode;

// ********** End Class UInterchangeVariantSetNode *************************************************

// ********** Begin Class UInterchangeSceneVariantSetsNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomVariantSetUid); \
	DECLARE_FUNCTION(execAddCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUids); \
	DECLARE_FUNCTION(execGetCustomVariantSetUidCount);


struct Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneVariantSetsNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneVariantSetsNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneVariantSetsNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneVariantSetsNode(UInterchangeSceneVariantSetsNode&&) = delete; \
	UInterchangeSceneVariantSetsNode(const UInterchangeSceneVariantSetsNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSceneVariantSetsNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneVariantSetsNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneVariantSetsNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSceneVariantSetsNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_100_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneVariantSetsNode;

// ********** End Class UInterchangeSceneVariantSetsNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
