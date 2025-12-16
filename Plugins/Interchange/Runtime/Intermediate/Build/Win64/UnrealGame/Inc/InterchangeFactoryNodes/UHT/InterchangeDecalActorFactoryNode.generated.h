// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalActorFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeDecalActorFactoryNode_generated_h
#error "InterchangeDecalActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeDecalActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeDecalActorFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeDecalActorFactoryNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execGetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execSetCustomDecalSize); \
	DECLARE_FUNCTION(execGetCustomDecalSize); \
	DECLARE_FUNCTION(execSetCustomSortOrder); \
	DECLARE_FUNCTION(execGetCustomSortOrder);


struct Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalActorFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDecalActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeDecalActorFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDecalActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeDecalActorFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDecalActorFactoryNode(UInterchangeDecalActorFactoryNode&&) = delete; \
	UInterchangeDecalActorFactoryNode(const UInterchangeDecalActorFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeDecalActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalActorFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeDecalActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDecalActorFactoryNode;

// ********** End Class UInterchangeDecalActorFactoryNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
