// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/StaticMeshImportTestFunctions.h"

#ifdef INTERCHANGETESTS_StaticMeshImportTestFunctions_generated_h
#error "StaticMeshImportTestFunctions.generated.h already included, missing '#pragma once' in StaticMeshImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_StaticMeshImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FColor;
struct FInterchangeTestFunctionResult;
struct FMeshBuildSettings;
struct FMeshNaniteSettings;

// ********** Begin Class UStaticMeshImportTestFunctions *******************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckBoundingBoxSize); \
	DECLARE_FUNCTION(execCheckBoundingBoxSizeLessThan); \
	DECLARE_FUNCTION(execCheckBoundingBoxSizeGreaterThan); \
	DECLARE_FUNCTION(execCheckNaniteSettings); \
	DECLARE_FUNCTION(execCheckBuildSettings); \
	DECLARE_FUNCTION(execCheckAgainstGroundTruth); \
	DECLARE_FUNCTION(execCheckSocketLocation); \
	DECLARE_FUNCTION(execCheckSocketName); \
	DECLARE_FUNCTION(execCheckSocketCount); \
	DECLARE_FUNCTION(execCheckSimpleCollisionPrimitiveCount); \
	DECLARE_FUNCTION(execCheckRenderUVChannelCount); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckPolygonCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckTriangleCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckThatMeshHasQuadsOrNgons); \
	DECLARE_FUNCTION(execCheckPolygonCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderHasVertexColors); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexColor); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckVertexCount); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckSectionMaterialIndex); \
	DECLARE_FUNCTION(execCheckPolygonGroupImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckPolygonGroupCount); \
	DECLARE_FUNCTION(execCheckImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckImportedStaticMeshCount);


struct Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UStaticMeshImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UStaticMeshImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UStaticMeshImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UStaticMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshImportTestFunctions(UStaticMeshImportTestFunctions&&) = delete; \
	UStaticMeshImportTestFunctions(const UStaticMeshImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UStaticMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UStaticMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_31_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshImportTestFunctions;

// ********** End Class UStaticMeshImportTestFunctions *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h

// ********** Begin Enum EStaticMeshImportTestGroundTruthBitflags **********************************
#define FOREACH_ENUM_ESTATICMESHIMPORTTESTGROUNDTRUTHBITFLAGS(op) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckLodCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckVertexCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckTriangleCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckUVChannelCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckCollisionPrimitiveCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckVertexPositionsEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckNormalsEqual) 

enum class EStaticMeshImportTestGroundTruthBitflags : uint32;
template<> struct TIsUEnumClass<EStaticMeshImportTestGroundTruthBitflags> { enum { Value = true }; };
template<> INTERCHANGETESTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EStaticMeshImportTestGroundTruthBitflags>();
// ********** End Enum EStaticMeshImportTestGroundTruthBitflags ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
