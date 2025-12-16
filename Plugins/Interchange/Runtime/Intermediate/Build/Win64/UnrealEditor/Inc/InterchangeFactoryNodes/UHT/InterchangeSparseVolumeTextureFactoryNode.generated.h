// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSparseVolumeTextureFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSparseVolumeTextureFactoryNode_generated_h
#error "InterchangeSparseVolumeTextureFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSparseVolumeTextureFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSparseVolumeTextureFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeSparseVolumeTextureFormat : uint8;

// ********** Begin Class UInterchangeSparseVolumeTextureFactoryNode *******************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomAnimationID); \
	DECLARE_FUNCTION(execGetCustomAnimationID); \
	DECLARE_FUNCTION(execSetCustomAttributesBChannelW); \
	DECLARE_FUNCTION(execGetCustomAttributesBChannelW); \
	DECLARE_FUNCTION(execSetCustomAttributesBChannelZ); \
	DECLARE_FUNCTION(execGetCustomAttributesBChannelZ); \
	DECLARE_FUNCTION(execSetCustomAttributesBChannelY); \
	DECLARE_FUNCTION(execGetCustomAttributesBChannelY); \
	DECLARE_FUNCTION(execSetCustomAttributesBChannelX); \
	DECLARE_FUNCTION(execGetCustomAttributesBChannelX); \
	DECLARE_FUNCTION(execSetCustomAttributesAChannelW); \
	DECLARE_FUNCTION(execGetCustomAttributesAChannelW); \
	DECLARE_FUNCTION(execSetCustomAttributesAChannelZ); \
	DECLARE_FUNCTION(execGetCustomAttributesAChannelZ); \
	DECLARE_FUNCTION(execSetCustomAttributesAChannelY); \
	DECLARE_FUNCTION(execGetCustomAttributesAChannelY); \
	DECLARE_FUNCTION(execSetCustomAttributesAChannelX); \
	DECLARE_FUNCTION(execGetCustomAttributesAChannelX); \
	DECLARE_FUNCTION(execSetCustomAttributesBFormat); \
	DECLARE_FUNCTION(execGetCustomAttributesBFormat); \
	DECLARE_FUNCTION(execSetCustomAttributesAFormat); \
	DECLARE_FUNCTION(execGetCustomAttributesAFormat);


struct Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSparseVolumeTextureFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSparseVolumeTextureFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSparseVolumeTextureFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSparseVolumeTextureFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSparseVolumeTextureFactoryNode(UInterchangeSparseVolumeTextureFactoryNode&&) = delete; \
	UInterchangeSparseVolumeTextureFactoryNode(const UInterchangeSparseVolumeTextureFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSparseVolumeTextureFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSparseVolumeTextureFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSparseVolumeTextureFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSparseVolumeTextureFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSparseVolumeTextureFactoryNode;

// ********** End Class UInterchangeSparseVolumeTextureFactoryNode *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSparseVolumeTextureFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
