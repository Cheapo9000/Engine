// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkinWeightModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class USkeletalMesh;
#ifdef SKELETALMESHMODIFIERS_SkinWeightModifier_generated_h
#error "SkinWeightModifier.generated.h already included, missing '#pragma once' in SkinWeightModifier.h"
#endif
#define SKELETALMESHMODIFIERS_SkinWeightModifier_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPruneAllWeights); \
	DECLARE_FUNCTION(execPruneVertexWeights); \
	DECLARE_FUNCTION(execEnforceMaxInfluences); \
	DECLARE_FUNCTION(execNormalizeAllWeights); \
	DECLARE_FUNCTION(execNormalizeVertexWeights); \
	DECLARE_FUNCTION(execSetVertexWeights); \
	DECLARE_FUNCTION(execGetVertexWeights); \
	DECLARE_FUNCTION(execGetAllBoneNames); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execCommitWeightsToSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkeletalMesh);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinWeightModifier(); \
	friend struct Z_Construct_UClass_USkinWeightModifier_Statics; \
public: \
	DECLARE_CLASS(USkinWeightModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshModifiers"), NO_API) \
	DECLARE_SERIALIZER(USkinWeightModifier)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinWeightModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkinWeightModifier(USkinWeightModifier&&); \
	USkinWeightModifier(const USkinWeightModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinWeightModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinWeightModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinWeightModifier) \
	NO_API virtual ~USkinWeightModifier();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMESHMODIFIERS_API UClass* StaticClass<class USkinWeightModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkinWeightModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
