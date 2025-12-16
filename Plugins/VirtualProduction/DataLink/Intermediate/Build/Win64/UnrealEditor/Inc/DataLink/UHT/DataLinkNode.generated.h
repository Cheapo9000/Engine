// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkNode.h"

#ifdef DATALINK_DataLinkNode_generated_h
#error "DataLinkNode.generated.h already included, missing '#pragma once' in DataLinkNode.h"
#endif
#define DATALINK_DataLinkNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkNode ************************************************************
struct Z_Construct_UClass_UDataLinkNode_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkNode(); \
	friend struct ::Z_Construct_UClass_UDataLinkNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkNode_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkNode)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkNode(UDataLinkNode&&) = delete; \
	UDataLinkNode(const UDataLinkNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkNode) \
	DATALINK_API virtual ~UDataLinkNode();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkNode;

// ********** End Class UDataLinkNode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
