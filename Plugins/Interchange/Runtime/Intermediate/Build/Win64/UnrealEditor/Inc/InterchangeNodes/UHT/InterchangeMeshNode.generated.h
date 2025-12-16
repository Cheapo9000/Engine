// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshNode.h"

#ifdef INTERCHANGENODES_InterchangeMeshNode_generated_h
#error "InterchangeMeshNode.generated.h already included, missing '#pragma once' in InterchangeMeshNode.h"
#endif
#define INTERCHANGENODES_InterchangeMeshNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeMeshCollision : uint8;
enum class EInterchangeMeshPayLoadType : uint8;

// ********** Begin ScriptStruct FInterchangeMeshPayLoadKey ****************************************
struct Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics; \
	INTERCHANGENODES_API static class UScriptStruct* StaticStruct();


struct FInterchangeMeshPayLoadKey;
// ********** End ScriptStruct FInterchangeMeshPayLoadKey ******************************************

// ********** Begin Class UInterchangeMeshNode *****************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomCollisionType); \
	DECLARE_FUNCTION(execGetCustomCollisionType); \
	DECLARE_FUNCTION(execRemoveAssemblyPartDependencyUid); \
	DECLARE_FUNCTION(execAddAssemblyPartDependencyUid); \
	DECLARE_FUNCTION(execGetAssemblyPartDependency); \
	DECLARE_FUNCTION(execGetAssemblyPartDependencies); \
	DECLARE_FUNCTION(execGetAssemblyPartDependenciesCount); \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execRemoveSceneInstanceUid); \
	DECLARE_FUNCTION(execSetSceneInstanceUid); \
	DECLARE_FUNCTION(execGetSceneInstanceUid); \
	DECLARE_FUNCTION(execGetSceneInstanceUids); \
	DECLARE_FUNCTION(execGetSceneInstanceUidsCount); \
	DECLARE_FUNCTION(execRemoveMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execSetMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execGetMorphTargetDependency); \
	DECLARE_FUNCTION(execGetMorphTargetDependencies); \
	DECLARE_FUNCTION(execGetMorphTargetDependeciesCount); \
	DECLARE_FUNCTION(execRemoveSkeletonDependencyUid); \
	DECLARE_FUNCTION(execSetSkeletonDependencyUid); \
	DECLARE_FUNCTION(execGetSkeletonDependency); \
	DECLARE_FUNCTION(execGetSkeletonDependencies); \
	DECLARE_FUNCTION(execGetSkeletonDependeciesCount); \
	DECLARE_FUNCTION(execSetCustomUVCount); \
	DECLARE_FUNCTION(execGetCustomUVCount); \
	DECLARE_FUNCTION(execSetCustomHasVertexColor); \
	DECLARE_FUNCTION(execGetCustomHasVertexColor); \
	DECLARE_FUNCTION(execSetCustomHasSmoothGroup); \
	DECLARE_FUNCTION(execGetCustomHasSmoothGroup); \
	DECLARE_FUNCTION(execSetCustomHasVertexTangent); \
	DECLARE_FUNCTION(execGetCustomHasVertexTangent); \
	DECLARE_FUNCTION(execSetCustomHasVertexBinormal); \
	DECLARE_FUNCTION(execGetCustomHasVertexBinormal); \
	DECLARE_FUNCTION(execSetCustomHasVertexNormal); \
	DECLARE_FUNCTION(execGetCustomHasVertexNormal); \
	DECLARE_FUNCTION(execSetCustomBoundingBox); \
	DECLARE_FUNCTION(execGetCustomBoundingBox); \
	DECLARE_FUNCTION(execSetCustomPolygonCount); \
	DECLARE_FUNCTION(execGetCustomPolygonCount); \
	DECLARE_FUNCTION(execSetCustomVertexCount); \
	DECLARE_FUNCTION(execGetCustomVertexCount); \
	DECLARE_FUNCTION(execSetPayLoadKey); \
	DECLARE_FUNCTION(execSetMorphTargetName); \
	DECLARE_FUNCTION(execGetMorphTargetName); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execIsMorphTarget); \
	DECLARE_FUNCTION(execSetSkinnedMesh); \
	DECLARE_FUNCTION(execIsSkinnedMesh);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshNode, INTERCHANGENODES_API)


struct Z_Construct_UClass_UInterchangeMeshNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeMeshNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeMeshNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshNode(UInterchangeMeshNode&&) = delete; \
	UInterchangeMeshNode(const UInterchangeMeshNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeMeshNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshNode) \
	INTERCHANGENODES_API virtual ~UInterchangeMeshNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_99_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshNode;

// ********** End Class UInterchangeMeshNode *******************************************************

// ********** Begin Class UInterchangeGeometryCacheNode ********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomHasConstantTopology); \
	DECLARE_FUNCTION(execGetCustomHasConstantTopology); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame);


struct Z_Construct_UClass_UInterchangeGeometryCacheNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGeometryCacheNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeGeometryCacheNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGeometryCacheNode, UInterchangeMeshNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGeometryCacheNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGeometryCacheNode(UInterchangeGeometryCacheNode&&) = delete; \
	UInterchangeGeometryCacheNode(const UInterchangeGeometryCacheNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeGeometryCacheNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGeometryCacheNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGeometryCacheNode) \
	INTERCHANGENODES_API virtual ~UInterchangeGeometryCacheNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_427_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_430_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGeometryCacheNode;

// ********** End Class UInterchangeGeometryCacheNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h

// ********** Begin Enum EInterchangeMeshPayLoadType ***********************************************
#define FOREACH_ENUM_EINTERCHANGEMESHPAYLOADTYPE(op) \
	op(EInterchangeMeshPayLoadType::NONE) \
	op(EInterchangeMeshPayLoadType::STATIC) \
	op(EInterchangeMeshPayLoadType::SKELETAL) \
	op(EInterchangeMeshPayLoadType::MORPHTARGET) \
	op(EInterchangeMeshPayLoadType::ANIMATED) 

enum class EInterchangeMeshPayLoadType : uint8;
template<> struct TIsUEnumClass<EInterchangeMeshPayLoadType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeMeshPayLoadType>();
// ********** End Enum EInterchangeMeshPayLoadType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
