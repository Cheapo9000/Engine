// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeShaderGraphNode.h"

#ifdef INTERCHANGENODES_InterchangeShaderGraphNode_generated_h
#error "InterchangeShaderGraphNode.generated.h already included, missing '#pragma once' in InterchangeShaderGraphNode.h"
#endif
#define INTERCHANGENODES_InterchangeShaderGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
struct FLinearColor;

// ********** Begin Class UInterchangeShaderPortsAPI ***********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputConnection); \
	DECLARE_FUNCTION(execConnectOuputToInputByIndex); \
	DECLARE_FUNCTION(execConnectOuputToInputByName); \
	DECLARE_FUNCTION(execDisconnectInputFromOutputNode); \
	DECLARE_FUNCTION(execDisconnectInput); \
	DECLARE_FUNCTION(execConnectDefaultOuputToInput); \
	DECLARE_FUNCTION(execGatherInputs); \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execHasInput); \
	DECLARE_FUNCTION(execIsAParameter); \
	DECLARE_FUNCTION(execIsAnInput); \
	DECLARE_FUNCTION(execMakeInputName); \
	DECLARE_FUNCTION(execMakeInputParameterKey); \
	DECLARE_FUNCTION(execMakeInputValueKey); \
	DECLARE_FUNCTION(execMakeInputConnectionKey);


struct Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderPortsAPI(); \
	friend struct ::Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeShaderPortsAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeShaderPortsAPI)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeShaderPortsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeShaderPortsAPI(UInterchangeShaderPortsAPI&&) = delete; \
	UInterchangeShaderPortsAPI(const UInterchangeShaderPortsAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeShaderPortsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderPortsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeShaderPortsAPI) \
	INTERCHANGENODES_API virtual ~UInterchangeShaderPortsAPI();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeShaderPortsAPI;

// ********** End Class UInterchangeShaderPortsAPI *************************************************

// ********** Begin Class UInterchangeShaderNode ***************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomShaderType); \
	DECLARE_FUNCTION(execGetCustomShaderType); \
	DECLARE_FUNCTION(execAddStringInput); \
	DECLARE_FUNCTION(execAddLinearColorInput); \
	DECLARE_FUNCTION(execAddFloatInput);


struct Z_Construct_UClass_UInterchangeShaderNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeShaderNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeShaderNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeShaderNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeShaderNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeShaderNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeShaderNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeShaderNode(UInterchangeShaderNode&&) = delete; \
	UInterchangeShaderNode(const UInterchangeShaderNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeShaderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeShaderNode) \
	INTERCHANGENODES_API virtual ~UInterchangeShaderNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_165_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeShaderNode;

// ********** End Class UInterchangeShaderNode *****************************************************

// ********** Begin Class UInterchangeFunctionCallShaderNode ***************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMaterialFunction); \
	DECLARE_FUNCTION(execGetCustomMaterialFunction);


struct Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFunctionCallShaderNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFunctionCallShaderNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFunctionCallShaderNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeFunctionCallShaderNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFunctionCallShaderNode(UInterchangeFunctionCallShaderNode&&) = delete; \
	UInterchangeFunctionCallShaderNode(const UInterchangeFunctionCallShaderNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeFunctionCallShaderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFunctionCallShaderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFunctionCallShaderNode) \
	INTERCHANGENODES_API virtual ~UInterchangeFunctionCallShaderNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_227_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFunctionCallShaderNode;

// ********** End Class UInterchangeFunctionCallShaderNode *****************************************

// ********** Begin Class UInterchangeShaderGraphNode **********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDisplacementCenterMode); \
	DECLARE_FUNCTION(execGetCustomDisplacementCenterMode); \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execSetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execGetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execSetCustomIsAShaderFunction); \
	DECLARE_FUNCTION(execGetCustomIsAShaderFunction); \
	DECLARE_FUNCTION(execSetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execGetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execSetCustomTwoSidedTransmission); \
	DECLARE_FUNCTION(execGetCustomTwoSidedTransmission); \
	DECLARE_FUNCTION(execSetCustomTwoSided); \
	DECLARE_FUNCTION(execGetCustomTwoSided);


struct Z_Construct_UClass_UInterchangeShaderGraphNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderGraphNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeShaderGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeShaderGraphNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeShaderGraphNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeShaderGraphNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeShaderGraphNode(UInterchangeShaderGraphNode&&) = delete; \
	UInterchangeShaderGraphNode(const UInterchangeShaderGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeShaderGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderGraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeShaderGraphNode) \
	INTERCHANGENODES_API virtual ~UInterchangeShaderGraphNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_252_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_255_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeShaderGraphNode;

// ********** End Class UInterchangeShaderGraphNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
