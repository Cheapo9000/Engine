// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSpecularProfileNode.h"

#ifdef INTERCHANGENODES_InterchangeSpecularProfileNode_generated_h
#error "InterchangeSpecularProfileNode.generated.h already included, missing '#pragma once' in InterchangeSpecularProfileNode.h"
#endif
#define INTERCHANGENODES_InterchangeSpecularProfileNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSpecularProfileNode ******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomTexture); \
	DECLARE_FUNCTION(execGetCustomTexture); \
	DECLARE_FUNCTION(execGetCustomFormat); \
	DECLARE_FUNCTION(execSetCustomFormat);


struct Z_Construct_UClass_UInterchangeSpecularProfileNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSpecularProfileNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpecularProfileNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSpecularProfileNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSpecularProfileNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSpecularProfileNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSpecularProfileNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSpecularProfileNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeSpecularProfileNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSpecularProfileNode(UInterchangeSpecularProfileNode&&) = delete; \
	UInterchangeSpecularProfileNode(const UInterchangeSpecularProfileNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSpecularProfileNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpecularProfileNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpecularProfileNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSpecularProfileNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSpecularProfileNode;

// ********** End Class UInterchangeSpecularProfileNode ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSpecularProfileNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
