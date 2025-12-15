// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeBaseNode.h"

#ifdef INTERCHANGECORE_InterchangeBaseNode_generated_h
#error "InterchangeBaseNode.generated.h already included, missing '#pragma once' in InterchangeBaseNode.h"
#endif
#define INTERCHANGECORE_InterchangeBaseNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeNodeContainerType : uint8;
struct FGuid;
struct FLinearColor;

// ********** Begin Class UInterchangeBaseNode *****************************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAssetName); \
	DECLARE_FUNCTION(execGetAssetName); \
	DECLARE_FUNCTION(execGetNodeContainerType); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execRemoveTargetNodeUid); \
	DECLARE_FUNCTION(execAddTargetNodeUid); \
	DECLARE_FUNCTION(execGetTargetNodeUids); \
	DECLARE_FUNCTION(execGetTargetNodeCount); \
	DECLARE_FUNCTION(execGetDesiredChildIndex); \
	DECLARE_FUNCTION(execGetParentUid); \
	DECLARE_FUNCTION(execGetNamespace); \
	DECLARE_FUNCTION(execSetDisplayLabel); \
	DECLARE_FUNCTION(execGetDisplayLabel); \
	DECLARE_FUNCTION(execGetUniqueID); \
	DECLARE_FUNCTION(execGetVector2Attribute); \
	DECLARE_FUNCTION(execAddVector2Attribute); \
	DECLARE_FUNCTION(execGetLinearColorAttribute); \
	DECLARE_FUNCTION(execAddLinearColorAttribute); \
	DECLARE_FUNCTION(execGetGuidAttribute); \
	DECLARE_FUNCTION(execAddGuidAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execAddStringAttribute); \
	DECLARE_FUNCTION(execGetDoubleAttribute); \
	DECLARE_FUNCTION(execAddDoubleAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execAddFloatAttribute); \
	DECLARE_FUNCTION(execGetInt32Attribute); \
	DECLARE_FUNCTION(execAddInt32Attribute); \
	DECLARE_FUNCTION(execGetBooleanAttribute); \
	DECLARE_FUNCTION(execAddBooleanAttribute); \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execGetIconName); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execInitializeNode);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeBaseNode, INTERCHANGECORE_API)


struct Z_Construct_UClass_UInterchangeBaseNode_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeBaseNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeBaseNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeBaseNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeBaseNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeBaseNode) \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeBaseNode(UInterchangeBaseNode&&) = delete; \
	UInterchangeBaseNode(const UInterchangeBaseNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseNode) \
	INTERCHANGECORE_API virtual ~UInterchangeBaseNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_193_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_196_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeBaseNode;

// ********** End Class UInterchangeBaseNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h

// ********** Begin Enum EInterchangeNodeContainerType *********************************************
#define FOREACH_ENUM_EINTERCHANGENODECONTAINERTYPE(op) \
	op(EInterchangeNodeContainerType::None) \
	op(EInterchangeNodeContainerType::TranslatedScene) \
	op(EInterchangeNodeContainerType::TranslatedAsset) \
	op(EInterchangeNodeContainerType::FactoryData) 

enum class EInterchangeNodeContainerType : uint8;
template<> struct TIsUEnumClass<EInterchangeNodeContainerType> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeNodeContainerType>();
// ********** End Enum EInterchangeNodeContainerType ***********************************************

// ********** Begin Enum EInterchangeNodeUserInterfaceContext **************************************
#define FOREACH_ENUM_EINTERCHANGENODEUSERINTERFACECONTEXT(op) \
	op(EInterchangeNodeUserInterfaceContext::None) \
	op(EInterchangeNodeUserInterfaceContext::Preview) 

enum class EInterchangeNodeUserInterfaceContext : uint8;
template<> struct TIsUEnumClass<EInterchangeNodeUserInterfaceContext> { enum { Value = true }; };
template<> INTERCHANGECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeNodeUserInterfaceContext>();
// ********** End Enum EInterchangeNodeUserInterfaceContext ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
