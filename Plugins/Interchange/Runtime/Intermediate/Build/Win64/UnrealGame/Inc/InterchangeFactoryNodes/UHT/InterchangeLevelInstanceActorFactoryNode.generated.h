// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelInstanceActorFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelInstanceActorFactoryNode_generated_h
#error "InterchangeLevelInstanceActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelInstanceActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelInstanceActorFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeLevelInstanceActorFactoryNode ********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomLevelReference); \
	DECLARE_FUNCTION(execGetCustomLevelReference);


struct Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelInstanceActorFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLevelInstanceActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeLevelInstanceActorFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLevelInstanceActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeLevelInstanceActorFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLevelInstanceActorFactoryNode(UInterchangeLevelInstanceActorFactoryNode&&) = delete; \
	UInterchangeLevelInstanceActorFactoryNode(const UInterchangeLevelInstanceActorFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeLevelInstanceActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelInstanceActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelInstanceActorFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeLevelInstanceActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLevelInstanceActorFactoryNode;

// ********** End Class UInterchangeLevelInstanceActorFactoryNode **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelInstanceActorFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
