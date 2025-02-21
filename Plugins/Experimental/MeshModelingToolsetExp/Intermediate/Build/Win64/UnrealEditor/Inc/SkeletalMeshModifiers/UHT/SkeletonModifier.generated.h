// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletonModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FMirrorOptions;
struct FOrientOptions;
#ifdef SKELETALMESHMODIFIERS_SkeletonModifier_generated_h
#error "SkeletonModifier.generated.h already included, missing '#pragma once' in SkeletonModifier.h"
#endif
#define SKELETALMESHMODIFIERS_SkeletonModifier_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMirrorOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SKELETALMESHMODIFIERS_API UScriptStruct* StaticStruct<struct FMirrorOptions>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SKELETALMESHMODIFIERS_API UScriptStruct* StaticStruct<struct FOrientOptions>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCommitSkeletonToSkeletalMesh); \
	DECLARE_FUNCTION(execGetAllBoneNames); \
	DECLARE_FUNCTION(execGetChildrenNames); \
	DECLARE_FUNCTION(execGetParentName); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execOrientBones); \
	DECLARE_FUNCTION(execOrientBone); \
	DECLARE_FUNCTION(execParentBones); \
	DECLARE_FUNCTION(execParentBone); \
	DECLARE_FUNCTION(execRenameBones); \
	DECLARE_FUNCTION(execRenameBone); \
	DECLARE_FUNCTION(execRemoveBones); \
	DECLARE_FUNCTION(execRemoveBone); \
	DECLARE_FUNCTION(execSetBonesTransforms); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execMirrorBones); \
	DECLARE_FUNCTION(execMirrorBone); \
	DECLARE_FUNCTION(execAddBones); \
	DECLARE_FUNCTION(execAddBone); \
	DECLARE_FUNCTION(execSetSkeletalMesh);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonModifier(); \
	friend struct Z_Construct_UClass_USkeletonModifier_Statics; \
public: \
	DECLARE_CLASS(USkeletonModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshModifiers"), NO_API) \
	DECLARE_SERIALIZER(USkeletonModifier)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletonModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletonModifier(USkeletonModifier&&); \
	USkeletonModifier(const USkeletonModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletonModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonModifier) \
	NO_API virtual ~USkeletonModifier();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_123_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMESHMODIFIERS_API UClass* StaticClass<class USkeletonModifier>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshMergeOptions(); \
	friend struct Z_Construct_UClass_USkeletalMeshMergeOptions_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshMergeOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshModifiers"), SKELETALMESHMODIFIERS_API) \
	DECLARE_SERIALIZER(USkeletalMeshMergeOptions)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMODIFIERS_API USkeletalMeshMergeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshMergeOptions(USkeletalMeshMergeOptions&&); \
	USkeletalMeshMergeOptions(const USkeletalMeshMergeOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMODIFIERS_API, USkeletalMeshMergeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshMergeOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshMergeOptions) \
	SKELETALMESHMODIFIERS_API virtual ~USkeletalMeshMergeOptions();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_354_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_357_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMESHMODIFIERS_API UClass* StaticClass<class USkeletalMeshMergeOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h


#define FOREACH_ENUM_EORIENTAXIS(op) \
	op(EOrientAxis::None) \
	op(EOrientAxis::PositiveX) \
	op(EOrientAxis::PositiveY) \
	op(EOrientAxis::PositiveZ) \
	op(EOrientAxis::NegativeX) \
	op(EOrientAxis::NegativeY) \
	op(EOrientAxis::NegativeZ) 

enum class EOrientAxis : uint8;
template<> struct TIsUEnumClass<EOrientAxis> { enum { Value = true }; };
template<> SKELETALMESHMODIFIERS_API UEnum* StaticEnum<EOrientAxis>();

#define FOREACH_ENUM_ESKELETALMESHMERGETYPE(op) \
	op(ESKeletalMeshMergeType::New) \
	op(ESKeletalMeshMergeType::Merge) 

enum class ESKeletalMeshMergeType : uint8;
template<> struct TIsUEnumClass<ESKeletalMeshMergeType> { enum { Value = true }; };
template<> SKELETALMESHMODIFIERS_API UEnum* StaticEnum<ESKeletalMeshMergeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
