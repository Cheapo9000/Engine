// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeVolumeNode.h"

#ifdef INTERCHANGENODES_InterchangeVolumeNode_generated_h
#error "InterchangeVolumeNode.generated.h already included, missing '#pragma once' in InterchangeVolumeNode.h"
#endif
#define INTERCHANGENODES_InterchangeVolumeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVolumeGridElementType : uint8;

// ********** Begin Class UInterchangeVolumeNode ***************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomFrameIndexInAnimation); \
	DECLARE_FUNCTION(execAddCustomFrameIndexInAnimation); \
	DECLARE_FUNCTION(execGetCustomFrameIndexInAnimation); \
	DECLARE_FUNCTION(execGetCustomFrameIndicesInAnimation); \
	DECLARE_FUNCTION(execSetCustomAnimationID); \
	DECLARE_FUNCTION(execGetCustomAnimationID); \
	DECLARE_FUNCTION(execRemoveCustomGridDependency); \
	DECLARE_FUNCTION(execAddCustomGridDependency); \
	DECLARE_FUNCTION(execGetCustomGridDependency); \
	DECLARE_FUNCTION(execGetCustomGridDependecies); \
	DECLARE_FUNCTION(execGetCustomGridDependeciesCount); \
	DECLARE_FUNCTION(execSetCustomFileName); \
	DECLARE_FUNCTION(execGetCustomFileName);


struct Z_Construct_UClass_UInterchangeVolumeNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeVolumeNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeVolumeNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeVolumeNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVolumeNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeVolumeNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVolumeNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVolumeNode(UInterchangeVolumeNode&&) = delete; \
	UInterchangeVolumeNode(const UInterchangeVolumeNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeVolumeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVolumeNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeVolumeNode) \
	INTERCHANGENODES_API virtual ~UInterchangeVolumeNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_25_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVolumeNode;

// ********** End Class UInterchangeVolumeNode *****************************************************

// ********** Begin Class UInterchangeVolumeGridNode ***********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGridActiveDimensions); \
	DECLARE_FUNCTION(execGetCustomGridActiveDimensions); \
	DECLARE_FUNCTION(execSetCustomGridActiveAABBMax); \
	DECLARE_FUNCTION(execGetCustomGridActiveAABBMax); \
	DECLARE_FUNCTION(execSetCustomGridActiveAABBMin); \
	DECLARE_FUNCTION(execGetCustomGridActiveAABBMin); \
	DECLARE_FUNCTION(execSetCustomGridTransform); \
	DECLARE_FUNCTION(execGetCustomGridTransform); \
	DECLARE_FUNCTION(execSetCustomNumComponents); \
	DECLARE_FUNCTION(execGetCustomNumComponents); \
	DECLARE_FUNCTION(execSetCustomElementType); \
	DECLARE_FUNCTION(execGetCustomElementType);


struct Z_Construct_UClass_UInterchangeVolumeGridNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeGridNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeVolumeGridNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeVolumeGridNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeVolumeGridNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVolumeGridNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeVolumeGridNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVolumeGridNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeVolumeGridNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVolumeGridNode(UInterchangeVolumeGridNode&&) = delete; \
	UInterchangeVolumeGridNode(const UInterchangeVolumeGridNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeVolumeGridNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVolumeGridNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeVolumeGridNode) \
	INTERCHANGENODES_API virtual ~UInterchangeVolumeGridNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_130_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVolumeGridNode;

// ********** End Class UInterchangeVolumeGridNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeNode_h

// ********** Begin Enum EVolumeGridElementType ****************************************************
#define FOREACH_ENUM_EVOLUMEGRIDELEMENTTYPE(op) \
	op(EVolumeGridElementType::Unknown) \
	op(EVolumeGridElementType::Half) \
	op(EVolumeGridElementType::Float) \
	op(EVolumeGridElementType::Double) 

enum class EVolumeGridElementType : uint8;
template<> struct TIsUEnumClass<EVolumeGridElementType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVolumeGridElementType>();
// ********** End Enum EVolumeGridElementType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
