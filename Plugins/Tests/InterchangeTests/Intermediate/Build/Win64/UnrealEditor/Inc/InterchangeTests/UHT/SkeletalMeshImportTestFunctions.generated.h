// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/SkeletalMeshImportTestFunctions.h"

#ifdef INTERCHANGETESTS_SkeletalMeshImportTestFunctions_generated_h
#error "SkeletalMeshImportTestFunctions.generated.h already included, missing '#pragma once' in SkeletalMeshImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_SkeletalMeshImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FColor;
struct FInterchangeTestFunctionResult;

// ********** Begin Class USkeletalMeshImportTestFunctions *****************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckSkinnedVertexCountForBone); \
	DECLARE_FUNCTION(execCheckSocketLocation); \
	DECLARE_FUNCTION(execCheckSocketName); \
	DECLARE_FUNCTION(execCheckSocketCount); \
	DECLARE_FUNCTION(execCheckBonePosition); \
	DECLARE_FUNCTION(execCheckBoneCount); \
	DECLARE_FUNCTION(execCheckMorphTargetName); \
	DECLARE_FUNCTION(execCheckMorphTargetCount); \
	DECLARE_FUNCTION(execCheckVertexIndexColor); \
	DECLARE_FUNCTION(execCheckVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckTriangleCountInSection); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckImportedSkeletalMeshCount);


struct Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_USkeletalMeshImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_USkeletalMeshImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_USkeletalMeshImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API USkeletalMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshImportTestFunctions(USkeletalMeshImportTestFunctions&&) = delete; \
	USkeletalMeshImportTestFunctions(const USkeletalMeshImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, USkeletalMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~USkeletalMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshImportTestFunctions;

// ********** End Class USkeletalMeshImportTestFunctions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
