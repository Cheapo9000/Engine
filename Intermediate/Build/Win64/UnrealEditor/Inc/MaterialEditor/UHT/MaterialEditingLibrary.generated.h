// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditingLibrary.h"

#ifdef MATERIALEDITOR_MaterialEditingLibrary_generated_h
#error "MaterialEditingLibrary.generated.h already included, missing '#pragma once' in MaterialEditingLibrary.h"
#endif
#define MATERIALEDITOR_MaterialEditingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMaterial;
class UMaterialExpression;
class UMaterialFunction;
class UMaterialFunctionInterface;
class UMaterialInstanceConstant;
class UMaterialInterface;
class UObject;
class URuntimeVirtualTexture;
class USparseVolumeTexture;
class UTexture;
struct FAssetData;
struct FLinearColor;
struct FMaterialStatistics;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FMaterialStatistics ***********************************************
struct Z_Construct_UScriptStruct_FMaterialStatistics_Statics;
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialStatistics_Statics; \
	MATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FMaterialStatistics;
// ********** End ScriptStruct FMaterialStatistics *************************************************

// ********** Begin Class UMaterialEditingLibrary **************************************************
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNaniteOverrideMaterial); \
	DECLARE_FUNCTION(execGetStatistics); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterSource); \
	DECLARE_FUNCTION(execRenameMaterialFunctionParameterGroup); \
	DECLARE_FUNCTION(execRenameMaterialParameterGroup); \
	DECLARE_FUNCTION(execGetTextureParameterSource); \
	DECLARE_FUNCTION(execGetVectorParameterSource); \
	DECLARE_FUNCTION(execGetScalarParameterSource); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterNames); \
	DECLARE_FUNCTION(execGetTextureParameterNames); \
	DECLARE_FUNCTION(execGetVectorParameterNames); \
	DECLARE_FUNCTION(execGetScalarParameterNames); \
	DECLARE_FUNCTION(execGetChildInstances); \
	DECLARE_FUNCTION(execUpdateMaterialInstance); \
	DECLARE_FUNCTION(execSetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execClearAllMaterialInstanceParameters); \
	DECLARE_FUNCTION(execSetMaterialInstanceParent); \
	DECLARE_FUNCTION(execLayoutMaterialFunctionExpressions); \
	DECLARE_FUNCTION(execUpdateMaterialFunction); \
	DECLARE_FUNCTION(execDeleteMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execCreateMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execGetNumMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execGetUsedTextures); \
	DECLARE_FUNCTION(execGetMaterialExpressionNodePosition); \
	DECLARE_FUNCTION(execGetInputNodeOutputNameForMaterialExpression); \
	DECLARE_FUNCTION(execGetInputsForMaterialExpression); \
	DECLARE_FUNCTION(execGetMaterialExpressionInputTypes); \
	DECLARE_FUNCTION(execGetMaterialExpressionInputNames); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNodeOutputName); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNode); \
	DECLARE_FUNCTION(execGetMaterialSelectedNodes); \
	DECLARE_FUNCTION(execGetMaterialDefaultStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultScalarParameterValue); \
	DECLARE_FUNCTION(execLayoutMaterialExpressions); \
	DECLARE_FUNCTION(execRecompileMaterial); \
	DECLARE_FUNCTION(execConnectMaterialExpressions); \
	DECLARE_FUNCTION(execConnectMaterialProperty); \
	DECLARE_FUNCTION(execHasMaterialUsage); \
	DECLARE_FUNCTION(execSetMaterialUsage); \
	DECLARE_FUNCTION(execDuplicateMaterialExpression); \
	DECLARE_FUNCTION(execCreateMaterialExpression); \
	DECLARE_FUNCTION(execDeleteMaterialExpression); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressions); \
	DECLARE_FUNCTION(execGetNumMaterialExpressions);


struct Z_Construct_UClass_UMaterialEditingLibrary_Statics;
MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditingLibrary_NoRegister();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditingLibrary(); \
	friend struct ::Z_Construct_UClass_UMaterialEditingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MATERIALEDITOR_API UClass* ::Z_Construct_UClass_UMaterialEditingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), Z_Construct_UClass_UMaterialEditingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditingLibrary)


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALEDITOR_API UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditingLibrary(UMaterialEditingLibrary&&) = delete; \
	UMaterialEditingLibrary(const UMaterialEditingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALEDITOR_API, UMaterialEditingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditingLibrary) \
	MATERIALEDITOR_API virtual ~UMaterialEditingLibrary();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditingLibrary;

// ********** End Class UMaterialEditingLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
