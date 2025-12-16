// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletonModifier.h"

#ifdef SKELETALMESHMODIFIERS_SkeletonModifier_generated_h
#error "SkeletonModifier.generated.h already included, missing '#pragma once' in SkeletonModifier.h"
#endif
#define SKELETALMESHMODIFIERS_SkeletonModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FMirrorOptions;
struct FOrientOptions;

// ********** Begin ScriptStruct FMirrorOptions ****************************************************
struct Z_Construct_UScriptStruct_FMirrorOptions_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMirrorOptions_Statics; \
	SKELETALMESHMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FMirrorOptions;
// ********** End ScriptStruct FMirrorOptions ******************************************************

// ********** Begin ScriptStruct FOrientOptions ****************************************************
struct Z_Construct_UScriptStruct_FOrientOptions_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOrientOptions_Statics; \
	SKELETALMESHMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FOrientOptions;
// ********** End ScriptStruct FOrientOptions ******************************************************

// ********** Begin Class USkeletonModifier ********************************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execCommitSkeletonToSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkeletalMesh);


struct Z_Construct_UClass_USkeletonModifier_Statics;
SKELETALMESHMODIFIERS_API UClass* Z_Construct_UClass_USkeletonModifier_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonModifier(); \
	friend struct ::Z_Construct_UClass_USkeletonModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMODIFIERS_API UClass* ::Z_Construct_UClass_USkeletonModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshModifiers"), Z_Construct_UClass_USkeletonModifier_NoRegister) \
	DECLARE_SERIALIZER(USkeletonModifier)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMODIFIERS_API USkeletonModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonModifier(USkeletonModifier&&) = delete; \
	USkeletonModifier(const USkeletonModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMODIFIERS_API, USkeletonModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonModifier) \
	SKELETALMESHMODIFIERS_API virtual ~USkeletonModifier();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_126_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonModifier;

// ********** End Class USkeletonModifier **********************************************************

// ********** Begin Class USkeletalMeshMergeOptions ************************************************
struct Z_Construct_UClass_USkeletalMeshMergeOptions_Statics;
SKELETALMESHMODIFIERS_API UClass* Z_Construct_UClass_USkeletalMeshMergeOptions_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_382_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshMergeOptions(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshMergeOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMODIFIERS_API UClass* ::Z_Construct_UClass_USkeletalMeshMergeOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshMergeOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshModifiers"), Z_Construct_UClass_USkeletalMeshMergeOptions_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshMergeOptions)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_382_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMODIFIERS_API USkeletalMeshMergeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshMergeOptions(USkeletalMeshMergeOptions&&) = delete; \
	USkeletalMeshMergeOptions(const USkeletalMeshMergeOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMODIFIERS_API, USkeletalMeshMergeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshMergeOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshMergeOptions) \
	SKELETALMESHMODIFIERS_API virtual ~USkeletalMeshMergeOptions();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_379_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_382_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_382_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h_382_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshMergeOptions;

// ********** End Class USkeletalMeshMergeOptions **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_SkeletalMeshModifiers_Public_SkeletonModifier_h

// ********** Begin Enum EOrientAxis ***************************************************************
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
template<> SKELETALMESHMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOrientAxis>();
// ********** End Enum EOrientAxis *****************************************************************

// ********** Begin Enum ESKeletalMeshMergeType ****************************************************
#define FOREACH_ENUM_ESKELETALMESHMERGETYPE(op) \
	op(ESKeletalMeshMergeType::New) \
	op(ESKeletalMeshMergeType::Merge) 

enum class ESKeletalMeshMergeType : uint8;
template<> struct TIsUEnumClass<ESKeletalMeshMergeType> { enum { Value = true }; };
template<> SKELETALMESHMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESKeletalMeshMergeType>();
// ********** End Enum ESKeletalMeshMergeType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
