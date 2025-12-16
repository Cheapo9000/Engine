// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSpecularProfileFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSpecularProfileFactoryNode_generated_h
#error "InterchangeSpecularProfileFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSpecularProfileFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSpecularProfileFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpecularProfileFormat : uint8;

// ********** Begin Class UInterchangeSpecularProfileFactoryNode ***********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomTexture); \
	DECLARE_FUNCTION(execGetCustomTexture); \
	DECLARE_FUNCTION(execGetCustomFormat); \
	DECLARE_FUNCTION(execSetCustomFormat);


struct Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpecularProfileFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSpecularProfileFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSpecularProfileFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSpecularProfileFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSpecularProfileFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSpecularProfileFactoryNode(UInterchangeSpecularProfileFactoryNode&&) = delete; \
	UInterchangeSpecularProfileFactoryNode(const UInterchangeSpecularProfileFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSpecularProfileFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpecularProfileFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpecularProfileFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSpecularProfileFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSpecularProfileFactoryNode;

// ********** End Class UInterchangeSpecularProfileFactoryNode *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSpecularProfileFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
