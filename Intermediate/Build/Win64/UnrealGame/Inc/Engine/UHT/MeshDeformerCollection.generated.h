// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MeshDeformerCollection.h"

#ifdef ENGINE_MeshDeformerCollection_generated_h
#error "MeshDeformerCollection.generated.h already included, missing '#pragma once' in MeshDeformerCollection.h"
#endif
#define ENGINE_MeshDeformerCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshDeformerCollection **************************************************
struct Z_Construct_UClass_UMeshDeformerCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDeformerCollection(); \
	friend struct ::Z_Construct_UClass_UMeshDeformerCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMeshDeformerCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDeformerCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMeshDeformerCollection_NoRegister) \
	DECLARE_SERIALIZER(UMeshDeformerCollection)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshDeformerCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDeformerCollection(UMeshDeformerCollection&&) = delete; \
	UMeshDeformerCollection(const UMeshDeformerCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshDeformerCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDeformerCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDeformerCollection) \
	ENGINE_API virtual ~UMeshDeformerCollection();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDeformerCollection;

// ********** End Class UMeshDeformerCollection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
