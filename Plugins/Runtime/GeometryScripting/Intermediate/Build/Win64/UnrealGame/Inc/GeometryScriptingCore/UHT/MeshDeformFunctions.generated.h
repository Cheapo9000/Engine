// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshDeformFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshDeformFunctions_generated_h
#error "MeshDeformFunctions.generated.h already included, missing '#pragma once' in MeshDeformFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshDeformFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;
enum class EGeometryScriptMathWarpType : uint8;
struct FGeometryScriptBendWarpOptions;
struct FGeometryScriptDisplaceFromTextureOptions;
struct FGeometryScriptFlareWarpOptions;
struct FGeometryScriptIterativeMeshSmoothingOptions;
struct FGeometryScriptMathWarpOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPerlinNoiseOptions;
struct FGeometryScriptTwistWarpOptions;
struct FGeometryScriptVectorList;

// ********** Begin ScriptStruct FGeometryScriptBendWarpOptions ************************************
struct Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBendWarpOptions;
// ********** End ScriptStruct FGeometryScriptBendWarpOptions **************************************

// ********** Begin ScriptStruct FGeometryScriptTwistWarpOptions ***********************************
struct Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptTwistWarpOptions;
// ********** End ScriptStruct FGeometryScriptTwistWarpOptions *************************************

// ********** Begin ScriptStruct FGeometryScriptFlareWarpOptions ***********************************
struct Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptFlareWarpOptions;
// ********** End ScriptStruct FGeometryScriptFlareWarpOptions *************************************

// ********** Begin ScriptStruct FGeometryScriptPerlinNoiseLayerOptions ****************************
struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPerlinNoiseLayerOptions;
// ********** End ScriptStruct FGeometryScriptPerlinNoiseLayerOptions ******************************

// ********** Begin ScriptStruct FGeometryScriptMathWarpOptions ************************************
struct Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptMathWarpOptions;
// ********** End ScriptStruct FGeometryScriptMathWarpOptions **************************************

// ********** Begin ScriptStruct FGeometryScriptPerlinNoiseOptions *********************************
struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptPerlinNoiseOptions;
// ********** End ScriptStruct FGeometryScriptPerlinNoiseOptions ***********************************

// ********** Begin ScriptStruct FGeometryScriptIterativeMeshSmoothingOptions **********************
struct Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptIterativeMeshSmoothingOptions;
// ********** End ScriptStruct FGeometryScriptIterativeMeshSmoothingOptions ************************

// ********** Begin ScriptStruct FGeometryScriptDisplaceFromTextureOptions *************************
struct Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_173_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptDisplaceFromTextureOptions;
// ********** End ScriptStruct FGeometryScriptDisplaceFromTextureOptions ***************************

// ********** Begin Class UGeometryScriptLibrary_MeshDeformFunctions *******************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyPerlinNoiseToMesh); \
	DECLARE_FUNCTION(execApplyDisplaceFromPerVertexVectors); \
	DECLARE_FUNCTION(execApplyDisplaceFromTextureMap); \
	DECLARE_FUNCTION(execApplyIterativeSmoothingToMesh); \
	DECLARE_FUNCTION(execApplyPerlinNoiseToMesh2); \
	DECLARE_FUNCTION(execApplyMathWarpToMesh); \
	DECLARE_FUNCTION(execApplyFlareWarpToMesh); \
	DECLARE_FUNCTION(execApplyTwistWarpToMesh); \
	DECLARE_FUNCTION(execApplyBendWarpToMesh);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshDeformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshDeformFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshDeformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshDeformFunctions(UGeometryScriptLibrary_MeshDeformFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshDeformFunctions(const UGeometryScriptLibrary_MeshDeformFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshDeformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshDeformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshDeformFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshDeformFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_199_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshDeformFunctions;

// ********** End Class UGeometryScriptLibrary_MeshDeformFunctions *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h

// ********** Begin Enum EGeometryScriptFlareType **************************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTFLARETYPE(op) \
	op(EGeometryScriptFlareType::SinMode) \
	op(EGeometryScriptFlareType::SinSquaredMode) \
	op(EGeometryScriptFlareType::TriangleMode) 

enum class EGeometryScriptFlareType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptFlareType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptFlareType>();
// ********** End Enum EGeometryScriptFlareType ****************************************************

// ********** Begin Enum EGeometryScriptMathWarpType ***********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTMATHWARPTYPE(op) \
	op(EGeometryScriptMathWarpType::SinWave1D) \
	op(EGeometryScriptMathWarpType::SinWave2D) \
	op(EGeometryScriptMathWarpType::SinWave3D) 

enum class EGeometryScriptMathWarpType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMathWarpType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptMathWarpType>();
// ********** End Enum EGeometryScriptMathWarpType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
