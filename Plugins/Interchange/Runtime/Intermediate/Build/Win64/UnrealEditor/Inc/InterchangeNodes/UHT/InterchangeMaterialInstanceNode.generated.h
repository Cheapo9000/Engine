// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMaterialInstanceNode.h"

#ifdef INTERCHANGENODES_InterchangeMaterialInstanceNode_generated_h
#error "InterchangeMaterialInstanceNode.generated.h already included, missing '#pragma once' in InterchangeMaterialInstanceNode.h"
#endif
#define INTERCHANGENODES_InterchangeMaterialInstanceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Class UInterchangeMaterialInstanceNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execAddStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetTextureParameterValue); \
	DECLARE_FUNCTION(execAddTextureParameterValue); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execAddVectorParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execAddScalarParameterValue); \
	DECLARE_FUNCTION(execGetCustomParent); \
	DECLARE_FUNCTION(execSetCustomParent);


struct Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialInstanceNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialInstanceNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialInstanceNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeMaterialInstanceNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialInstanceNode(UInterchangeMaterialInstanceNode&&) = delete; \
	UInterchangeMaterialInstanceNode(const UInterchangeMaterialInstanceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeMaterialInstanceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialInstanceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialInstanceNode) \
	INTERCHANGENODES_API virtual ~UInterchangeMaterialInstanceNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialInstanceNode;

// ********** End Class UInterchangeMaterialInstanceNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
