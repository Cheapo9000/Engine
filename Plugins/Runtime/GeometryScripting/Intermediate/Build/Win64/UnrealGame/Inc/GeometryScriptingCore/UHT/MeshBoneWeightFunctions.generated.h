// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBoneWeightFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshBoneWeightFunctions_generated_h
#error "MeshBoneWeightFunctions.generated.h already included, missing '#pragma once' in MeshBoneWeightFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBoneWeightFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class USkeleton;
struct FGeometryScriptBoneInfo;
struct FGeometryScriptBoneWeight;
struct FGeometryScriptBoneWeightProfile;
struct FGeometryScriptCopyBonesFromMeshOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPruneBoneWeightsOptions;
struct FGeometryScriptSmoothBoneWeightsOptions;
struct FGeometryScriptTransferBoneWeightsOptions;

// ********** Begin ScriptStruct FGeometryScriptBoneWeight *****************************************
struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBoneWeight;
// ********** End ScriptStruct FGeometryScriptBoneWeight *******************************************

// ********** Begin ScriptStruct FGeometryScriptBoneWeightProfile **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBoneWeightProfile;
// ********** End ScriptStruct FGeometryScriptBoneWeightProfile ************************************

// ********** Begin ScriptStruct FGeometryScriptPruneBoneWeightsOptions ****************************
struct Z_Construct_UScriptStruct_FGeometryScriptPruneBoneWeightsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPruneBoneWeightsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPruneBoneWeightsOptions;
// ********** End ScriptStruct FGeometryScriptPruneBoneWeightsOptions ******************************

// ********** Begin ScriptStruct FGeometryScriptSmoothBoneWeightsOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSmoothBoneWeightsOptions;
// ********** End ScriptStruct FGeometryScriptSmoothBoneWeightsOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptTransferBoneWeightsOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptTransferBoneWeightsOptions;
// ********** End ScriptStruct FGeometryScriptTransferBoneWeightsOptions ***************************

// ********** Begin ScriptStruct FGeometryScriptBoneInfo *******************************************
struct Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_194_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBoneInfo;
// ********** End ScriptStruct FGeometryScriptBoneInfo *********************************************

// ********** Begin ScriptStruct FGeometryScriptCopyBonesFromMeshOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptCopyBonesFromMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopyBonesFromMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopyBonesFromMeshOptions;
// ********** End ScriptStruct FGeometryScriptCopyBonesFromMeshOptions *****************************

// ********** Begin Class UGeometryScriptLibrary_MeshBoneWeightFunctions ***************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllBonesInfo); \
	DECLARE_FUNCTION(execGetBoneInfo); \
	DECLARE_FUNCTION(execGetBoneChildren); \
	DECLARE_FUNCTION(execGetRootBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execDiscardBonesFromMesh); \
	DECLARE_FUNCTION(execCopyBonesFromSkeleton); \
	DECLARE_FUNCTION(execCopyBonesFromMesh); \
	DECLARE_FUNCTION(execTransferBoneWeightsFromMesh); \
	DECLARE_FUNCTION(execComputeSmoothBoneWeights); \
	DECLARE_FUNCTION(execPruneBoneWeights); \
	DECLARE_FUNCTION(execSetAllVertexBoneWeights); \
	DECLARE_FUNCTION(execBlendBoneWeights); \
	DECLARE_FUNCTION(execSetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetLargestVertexBoneWeight); \
	DECLARE_FUNCTION(execGetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetMaxBoneWeightIndex); \
	DECLARE_FUNCTION(execMeshCopyBoneWeights); \
	DECLARE_FUNCTION(execMeshCreateBoneWeights); \
	DECLARE_FUNCTION(execMeshHasBoneWeights);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshBoneWeightFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBoneWeightFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshBoneWeightFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshBoneWeightFunctions(UGeometryScriptLibrary_MeshBoneWeightFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshBoneWeightFunctions(const UGeometryScriptLibrary_MeshBoneWeightFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshBoneWeightFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBoneWeightFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBoneWeightFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshBoneWeightFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_253_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshBoneWeightFunctions;

// ********** End Class UGeometryScriptLibrary_MeshBoneWeightFunctions *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h

// ********** Begin Enum EGeometryScriptPruneBoneWeightsAssignmentType *****************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTPRUNEBONEWEIGHTSASSIGNMENTTYPE(op) \
	op(EGeometryScriptPruneBoneWeightsAssignmentType::RenormalizeRemaining) \
	op(EGeometryScriptPruneBoneWeightsAssignmentType::ReassignToParent) 

enum class EGeometryScriptPruneBoneWeightsAssignmentType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPruneBoneWeightsAssignmentType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptPruneBoneWeightsAssignmentType>();
// ********** End Enum EGeometryScriptPruneBoneWeightsAssignmentType *******************************

// ********** Begin Enum EGeometryScriptSmoothBoneWeightsType **************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTSMOOTHBONEWEIGHTSTYPE(op) \
	op(EGeometryScriptSmoothBoneWeightsType::DirectDistance) \
	op(EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel) 

enum class EGeometryScriptSmoothBoneWeightsType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSmoothBoneWeightsType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptSmoothBoneWeightsType>();
// ********** End Enum EGeometryScriptSmoothBoneWeightsType ****************************************

// ********** Begin Enum ETransferBoneWeightsMethod ************************************************
#define FOREACH_ENUM_ETRANSFERBONEWEIGHTSMETHOD(op) \
	op(ETransferBoneWeightsMethod::ClosestPointOnSurface) \
	op(ETransferBoneWeightsMethod::InpaintWeights) 

enum class ETransferBoneWeightsMethod : uint8;
template<> struct TIsUEnumClass<ETransferBoneWeightsMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransferBoneWeightsMethod>();
// ********** End Enum ETransferBoneWeightsMethod **************************************************

// ********** Begin Enum EOutputTargetMeshBones ****************************************************
#define FOREACH_ENUM_EOUTPUTTARGETMESHBONES(op) \
	op(EOutputTargetMeshBones::SourceBones) \
	op(EOutputTargetMeshBones::TargetBones) 

enum class EOutputTargetMeshBones : uint8;
template<> struct TIsUEnumClass<EOutputTargetMeshBones> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutputTargetMeshBones>();
// ********** End Enum EOutputTargetMeshBones ******************************************************

// ********** Begin Enum EBonesToCopyFromSource ****************************************************
#define FOREACH_ENUM_EBONESTOCOPYFROMSOURCE(op) \
	op(EBonesToCopyFromSource::AllBones) \
	op(EBonesToCopyFromSource::OnlyBoundAndParents) \
	op(EBonesToCopyFromSource::OnlyBoundAndRoot) 

enum class EBonesToCopyFromSource : uint8;
template<> struct TIsUEnumClass<EBonesToCopyFromSource> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBonesToCopyFromSource>();
// ********** End Enum EBonesToCopyFromSource ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
