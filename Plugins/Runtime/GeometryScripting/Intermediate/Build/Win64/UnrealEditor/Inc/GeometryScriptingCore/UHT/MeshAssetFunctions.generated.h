// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshAssetFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshAssetFunctions_generated_h
#error "MeshAssetFunctions.generated.h already included, missing '#pragma once' in MeshAssetFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshAssetFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;
enum class EGeometryScriptLODType : uint8;
enum class EGeometryScriptOutcomePins : uint8;
enum class EGeometryScriptSearchOutcomePins : uint8;
struct FGeometryScriptCopyMeshFromAssetOptions;
struct FGeometryScriptCopyMeshToAssetOptions;
struct FGeometryScriptCopyMorphTargetToAssetOptions;
struct FGeometryScriptCopySkinWeightProfileToAssetOptions;
struct FGeometryScriptMeshReadLOD;
struct FGeometryScriptMeshWriteLOD;

// ********** Begin ScriptStruct FGeometryScriptCopyMeshFromAssetOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopyMeshFromAssetOptions;
// ********** End ScriptStruct FGeometryScriptCopyMeshFromAssetOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptNaniteOptions **************************************
struct Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptNaniteOptions;
// ********** End ScriptStruct FGeometryScriptNaniteOptions ****************************************

// ********** Begin ScriptStruct FGeometryScriptCopyMeshToAssetOptions *****************************
struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopyMeshToAssetOptions;
// ********** End ScriptStruct FGeometryScriptCopyMeshToAssetOptions *******************************

// ********** Begin ScriptStruct FGeometryScriptCopyMorphTargetToAssetOptions **********************
struct Z_Construct_UScriptStruct_FGeometryScriptCopyMorphTargetToAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopyMorphTargetToAssetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopyMorphTargetToAssetOptions;
// ********** End ScriptStruct FGeometryScriptCopyMorphTargetToAssetOptions ************************

// ********** Begin ScriptStruct FGeometryScriptCopySkinWeightProfileToAssetOptions ****************
struct Z_Construct_UScriptStruct_FGeometryScriptCopySkinWeightProfileToAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopySkinWeightProfileToAssetOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopySkinWeightProfileToAssetOptions;
// ********** End ScriptStruct FGeometryScriptCopySkinWeightProfileToAssetOptions ******************

// ********** Begin Class UGeometryScriptLibrary_StaticMeshFunctions *******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopySkinWeightProfileToSkeletalMesh); \
	DECLARE_FUNCTION(execCopyMorphTargetToSkeletalMesh); \
	DECLARE_FUNCTION(execCopyMeshToSkeletalMesh); \
	DECLARE_FUNCTION(execCopyMeshFromSkeletalMesh); \
	DECLARE_FUNCTION(execConvertMaterialListToMaterialMap); \
	DECLARE_FUNCTION(execConvertMaterialMapToMaterialList); \
	DECLARE_FUNCTION(execGetMaterialListFromSkeletalMesh); \
	DECLARE_FUNCTION(execGetMaterialListFromStaticMesh); \
	DECLARE_FUNCTION(execGetLODMaterialListFromSkeletalMesh); \
	DECLARE_FUNCTION(execGetSectionMaterialListFromStaticMesh); \
	DECLARE_FUNCTION(execCopyMeshToStaticMesh); \
	DECLARE_FUNCTION(execCopyMeshFromStaticMesh); \
	DECLARE_FUNCTION(execCopyMeshFromStaticMeshV2); \
	DECLARE_FUNCTION(execGetNumStaticMeshLODsOfType); \
	DECLARE_FUNCTION(execCheckStaticMeshHasAvailableLOD);


struct Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_StaticMeshFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_StaticMeshFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_StaticMeshFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_StaticMeshFunctions(UGeometryScriptLibrary_StaticMeshFunctions&&) = delete; \
	UGeometryScriptLibrary_StaticMeshFunctions(const UGeometryScriptLibrary_StaticMeshFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_StaticMeshFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_StaticMeshFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_StaticMeshFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_StaticMeshFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_211_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_StaticMeshFunctions;

// ********** End Class UGeometryScriptLibrary_StaticMeshFunctions *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h

// ********** Begin Enum EGeometryScriptBoneHierarchyMismatchHandling ******************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBONEHIERARCHYMISMATCHHANDLING(op) \
	op(EGeometryScriptBoneHierarchyMismatchHandling::DoNothing) \
	op(EGeometryScriptBoneHierarchyMismatchHandling::RemapGeometryToReferenceSkeleton) \
	op(EGeometryScriptBoneHierarchyMismatchHandling::CreateNewReferenceSkeleton) 

enum class EGeometryScriptBoneHierarchyMismatchHandling : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBoneHierarchyMismatchHandling> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBoneHierarchyMismatchHandling>();
// ********** End Enum EGeometryScriptBoneHierarchyMismatchHandling ********************************

// ********** Begin Enum EGeometryScriptGenerateLightmapUVOptions **********************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTGENERATELIGHTMAPUVOPTIONS(op) \
	op(EGeometryScriptGenerateLightmapUVOptions::MatchTargetLODSetting) \
	op(EGeometryScriptGenerateLightmapUVOptions::GenerateLightmapUVs) \
	op(EGeometryScriptGenerateLightmapUVOptions::DoNotGenerateLightmapUVs) 

enum class EGeometryScriptGenerateLightmapUVOptions : uint8;
template<> struct TIsUEnumClass<EGeometryScriptGenerateLightmapUVOptions> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptGenerateLightmapUVOptions>();
// ********** End Enum EGeometryScriptGenerateLightmapUVOptions ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
