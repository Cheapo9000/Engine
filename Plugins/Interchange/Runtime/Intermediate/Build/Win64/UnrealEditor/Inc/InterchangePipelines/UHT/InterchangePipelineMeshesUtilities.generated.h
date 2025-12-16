// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineMeshesUtilities.h"

#ifdef INTERCHANGEPIPELINES_InterchangePipelineMeshesUtilities_generated_h
#error "InterchangePipelineMeshesUtilities.generated.h already included, missing '#pragma once' in InterchangePipelineMeshesUtilities.h"
#endif
#define INTERCHANGEPIPELINES_InterchangePipelineMeshesUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangePipelineMeshesUtilities;
struct FInterchangeMeshGeometry;
struct FInterchangeMeshInstance;
struct FInterchangePipelineMeshesUtilitiesContext;

// ********** Begin ScriptStruct FInterchangeLodSceneNodeContainer *********************************
struct Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


struct FInterchangeLodSceneNodeContainer;
// ********** End ScriptStruct FInterchangeLodSceneNodeContainer ***********************************

// ********** Begin ScriptStruct FInterchangeMeshInstance ******************************************
struct Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


struct FInterchangeMeshInstance;
// ********** End ScriptStruct FInterchangeMeshInstance ********************************************

// ********** Begin ScriptStruct FInterchangeMeshGeometry ******************************************
struct Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


struct FInterchangeMeshGeometry;
// ********** End ScriptStruct FInterchangeMeshGeometry ********************************************

// ********** Begin ScriptStruct FInterchangePipelineMeshesUtilitiesContext ************************
struct Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics; \
	INTERCHANGEPIPELINES_API static class UScriptStruct* StaticStruct();


struct FInterchangePipelineMeshesUtilitiesContext;
// ********** End ScriptStruct FInterchangePipelineMeshesUtilitiesContext **************************

// ********** Begin Class UInterchangePipelineMeshesUtilities **************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execGetMeshGeometrySkeletonRootUid); \
	DECLARE_FUNCTION(execGetMeshInstanceSkeletonRootUid); \
	DECLARE_FUNCTION(execGetAllMeshInstanceUidsUsingMeshGeometryUid); \
	DECLARE_FUNCTION(execGetMeshGeometryByUid); \
	DECLARE_FUNCTION(execIsValidMeshGeometryUid); \
	DECLARE_FUNCTION(execGetMeshInstanceByUid); \
	DECLARE_FUNCTION(execIsValidMeshInstanceUid); \
	DECLARE_FUNCTION(execGetAllMeshGeometryNotInstanced); \
	DECLARE_FUNCTION(execGetAllGeometryCacheGeometry); \
	DECLARE_FUNCTION(execGetAllStaticMeshGeometry); \
	DECLARE_FUNCTION(execGetAllSkinnedMeshGeometry); \
	DECLARE_FUNCTION(execGetAllMeshGeometry); \
	DECLARE_FUNCTION(execGetAllGeometryCacheInstance); \
	DECLARE_FUNCTION(execGetAllStaticMeshInstance); \
	DECLARE_FUNCTION(execGetAllSkinnedMeshInstance); \
	DECLARE_FUNCTION(execGetAllMeshInstanceUids); \
	DECLARE_FUNCTION(execCreateInterchangePipelineMeshesUtilities);


struct Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics;
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineMeshesUtilities(); \
	friend struct ::Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEPIPELINES_API UClass* ::Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePipelineMeshesUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePipelineMeshesUtilities)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEPIPELINES_API UInterchangePipelineMeshesUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePipelineMeshesUtilities(UInterchangePipelineMeshesUtilities&&) = delete; \
	UInterchangePipelineMeshesUtilities(const UInterchangePipelineMeshesUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEPIPELINES_API, UInterchangePipelineMeshesUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineMeshesUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineMeshesUtilities) \
	INTERCHANGEPIPELINES_API virtual ~UInterchangePipelineMeshesUtilities();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_190_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePipelineMeshesUtilities;

// ********** End Class UInterchangePipelineMeshesUtilities ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
