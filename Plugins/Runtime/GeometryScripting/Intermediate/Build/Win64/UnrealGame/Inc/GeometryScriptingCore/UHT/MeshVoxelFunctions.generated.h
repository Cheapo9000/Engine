// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshVoxelFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshVoxelFunctions_generated_h
#error "MeshVoxelFunctions.generated.h already included, missing '#pragma once' in MeshVoxelFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshVoxelFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptMorphologyOptions;
struct FGeometryScriptSolidifyOptions;

// ********** Begin ScriptStruct FGeometryScript3DGridParameters ***********************************
struct Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScript3DGridParameters;
// ********** End ScriptStruct FGeometryScript3DGridParameters *************************************

// ********** Begin ScriptStruct FGeometryScriptSolidifyOptions ************************************
struct Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSolidifyOptions;
// ********** End ScriptStruct FGeometryScriptSolidifyOptions **************************************

// ********** Begin ScriptStruct FGeometryScriptMorphologyOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMorphologyOptions;
// ********** End ScriptStruct FGeometryScriptMorphologyOptions ************************************

// ********** Begin Class UGeometryScriptLibrary_MeshVoxelFunctions ********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyMeshMorphology); \
	DECLARE_FUNCTION(execApplyMeshSolidify);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshVoxelFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVoxelFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshVoxelFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshVoxelFunctions(UGeometryScriptLibrary_MeshVoxelFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshVoxelFunctions(const UGeometryScriptLibrary_MeshVoxelFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshVoxelFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVoxelFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVoxelFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshVoxelFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_132_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshVoxelFunctions;

// ********** End Class UGeometryScriptLibrary_MeshVoxelFunctions **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h

// ********** Begin Enum EGeometryScriptGridSizingMethod *******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTGRIDSIZINGMETHOD(op) \
	op(EGeometryScriptGridSizingMethod::GridCellSize) \
	op(EGeometryScriptGridSizingMethod::GridResolution) 

enum class EGeometryScriptGridSizingMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptGridSizingMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptGridSizingMethod>();
// ********** End Enum EGeometryScriptGridSizingMethod *********************************************

// ********** Begin Enum EGeometryScriptMorphologicalOpType ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTMORPHOLOGICALOPTYPE(op) \
	op(EGeometryScriptMorphologicalOpType::Dilate) \
	op(EGeometryScriptMorphologicalOpType::Contract) \
	op(EGeometryScriptMorphologicalOpType::Close) \
	op(EGeometryScriptMorphologicalOpType::Open) 

enum class EGeometryScriptMorphologicalOpType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMorphologicalOpType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptMorphologicalOpType>();
// ********** End Enum EGeometryScriptMorphologicalOpType ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
