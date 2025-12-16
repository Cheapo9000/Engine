// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBakeFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshBakeFunctions_generated_h
#error "MeshBakeFunctions.generated.h already included, missing '#pragma once' in MeshBakeFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBakeFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;
enum class EGeometryScriptBakeCurvatureClampMode : uint8;
enum class EGeometryScriptBakeCurvatureColorMode : uint8;
enum class EGeometryScriptBakeCurvatureTypeMode : uint8;
enum class EGeometryScriptBakeHeightRangeMode : uint8;
enum class EGeometryScriptBakeNormalSpace : uint8;
enum class EGeometryScriptBakeResolution : uint8;
struct FGeometryScriptBakeOutputType;
struct FGeometryScriptBakeRenderCaptureOptions;
struct FGeometryScriptBakeSourceMeshOptions;
struct FGeometryScriptBakeTargetMeshOptions;
struct FGeometryScriptBakeTextureOptions;
struct FGeometryScriptBakeTypeOptions;
struct FGeometryScriptBakeVertexOptions;
struct FGeometryScriptRenderCaptureTextures;
struct FLinearColor;

// ********** Begin ScriptStruct FGeometryScriptBakeTypeOptions ************************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeTypeOptions;
// ********** End ScriptStruct FGeometryScriptBakeTypeOptions **************************************

// ********** Begin ScriptStruct FGeometryScriptBakeTextureOptions *********************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_271_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeTextureOptions;
// ********** End ScriptStruct FGeometryScriptBakeTextureOptions ***********************************

// ********** Begin ScriptStruct FGeometryScriptBakeVertexOptions **********************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_311_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeVertexOptions;
// ********** End ScriptStruct FGeometryScriptBakeVertexOptions ************************************

// ********** Begin ScriptStruct FGeometryScriptBakeOutputType *************************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_339_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeOutputType;
// ********** End ScriptStruct FGeometryScriptBakeOutputType ***************************************

// ********** Begin ScriptStruct FGeometryScriptBakeTargetMeshOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_364_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeTargetMeshOptions;
// ********** End ScriptStruct FGeometryScriptBakeTargetMeshOptions ********************************

// ********** Begin ScriptStruct FGeometryScriptBakeSourceMeshOptions ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_373_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeSourceMeshOptions;
// ********** End ScriptStruct FGeometryScriptBakeSourceMeshOptions ********************************

// ********** Begin ScriptStruct FGeometryScriptBakeRenderCaptureOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_388_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBakeRenderCaptureOptions;
// ********** End ScriptStruct FGeometryScriptBakeRenderCaptureOptions *****************************

// ********** Begin ScriptStruct FGeometryScriptRenderCaptureTextures ******************************
struct Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_489_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptRenderCaptureTextures;
// ********** End ScriptStruct FGeometryScriptRenderCaptureTextures ********************************

// ********** Begin Class UGeometryScriptLibrary_MeshBakeFunctions *********************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBakeTextureFromRenderCaptures); \
	DECLARE_FUNCTION(execBakeVertex); \
	DECLARE_FUNCTION(execBakeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeConstant); \
	DECLARE_FUNCTION(execMakeBakeTypeHeight); \
	DECLARE_FUNCTION(execMakeBakeTypeUVShell); \
	DECLARE_FUNCTION(execMakeBakeTypeMaterialID); \
	DECLARE_FUNCTION(execMakeBakeTypeVertexColor); \
	DECLARE_FUNCTION(execMakeBakeTypeMultiTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeAmbientOcclusion); \
	DECLARE_FUNCTION(execMakeBakeTypeCurvature); \
	DECLARE_FUNCTION(execMakeBakeTypePosition); \
	DECLARE_FUNCTION(execMakeBakeTypeBentNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeFaceNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeObjectNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeTangentNormal); \
	DECLARE_FUNCTION(execConvertBakeResolutionToInt);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshBakeFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBakeFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshBakeFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshBakeFunctions(UGeometryScriptLibrary_MeshBakeFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshBakeFunctions(const UGeometryScriptLibrary_MeshBakeFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshBakeFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBakeFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBakeFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshBakeFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_546_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_549_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshBakeFunctions;

// ********** End Class UGeometryScriptLibrary_MeshBakeFunctions ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h

// ********** Begin Enum EGeometryScriptBakeResolution *********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKERESOLUTION(op) \
	op(EGeometryScriptBakeResolution::Resolution16) \
	op(EGeometryScriptBakeResolution::Resolution32) \
	op(EGeometryScriptBakeResolution::Resolution64) \
	op(EGeometryScriptBakeResolution::Resolution128) \
	op(EGeometryScriptBakeResolution::Resolution256) \
	op(EGeometryScriptBakeResolution::Resolution512) \
	op(EGeometryScriptBakeResolution::Resolution1024) \
	op(EGeometryScriptBakeResolution::Resolution2048) \
	op(EGeometryScriptBakeResolution::Resolution4096) \
	op(EGeometryScriptBakeResolution::Resolution8192) 

enum class EGeometryScriptBakeResolution : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeResolution> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeResolution>();
// ********** End Enum EGeometryScriptBakeResolution ***********************************************

// ********** Begin Enum EGeometryScriptBakeBitDepth ***********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEBITDEPTH(op) \
	op(EGeometryScriptBakeBitDepth::ChannelBits8) \
	op(EGeometryScriptBakeBitDepth::ChannelBits16) 

enum class EGeometryScriptBakeBitDepth : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeBitDepth> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeBitDepth>();
// ********** End Enum EGeometryScriptBakeBitDepth *************************************************

// ********** Begin Enum EGeometryScriptBakeSamplesPerPixel ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKESAMPLESPERPIXEL(op) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample1) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample4) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample16) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample64) \
	op(EGeometryScriptBakeSamplesPerPixel::Samples256) 

enum class EGeometryScriptBakeSamplesPerPixel : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeSamplesPerPixel> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeSamplesPerPixel>();
// ********** End Enum EGeometryScriptBakeSamplesPerPixel ******************************************

// ********** Begin Enum EGeometryScriptBakeFilteringType ******************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEFILTERINGTYPE(op) \
	op(EGeometryScriptBakeFilteringType::BSpline) \
	op(EGeometryScriptBakeFilteringType::Box) 

enum class EGeometryScriptBakeFilteringType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeFilteringType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeFilteringType>();
// ********** End Enum EGeometryScriptBakeFilteringType ********************************************

// ********** Begin Enum EGeometryScriptBakeTypes **************************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKETYPES(op) \
	op(EGeometryScriptBakeTypes::None) \
	op(EGeometryScriptBakeTypes::TangentSpaceNormal) \
	op(EGeometryScriptBakeTypes::ObjectSpaceNormal) \
	op(EGeometryScriptBakeTypes::FaceNormal) \
	op(EGeometryScriptBakeTypes::BentNormal) \
	op(EGeometryScriptBakeTypes::Position) \
	op(EGeometryScriptBakeTypes::Curvature) \
	op(EGeometryScriptBakeTypes::AmbientOcclusion) \
	op(EGeometryScriptBakeTypes::Texture) \
	op(EGeometryScriptBakeTypes::MultiTexture) \
	op(EGeometryScriptBakeTypes::VertexColor) \
	op(EGeometryScriptBakeTypes::MaterialID) \
	op(EGeometryScriptBakeTypes::Constant) \
	op(EGeometryScriptBakeTypes::UVShell) \
	op(EGeometryScriptBakeTypes::Height) 

enum class EGeometryScriptBakeTypes : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeTypes> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeTypes>();
// ********** End Enum EGeometryScriptBakeTypes ****************************************************

// ********** Begin Enum EGeometryScriptBakeOutputMode *********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEOUTPUTMODE(op) \
	op(EGeometryScriptBakeOutputMode::RGBA) \
	op(EGeometryScriptBakeOutputMode::PerChannel) 

enum class EGeometryScriptBakeOutputMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeOutputMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeOutputMode>();
// ********** End Enum EGeometryScriptBakeOutputMode ***********************************************

// ********** Begin Enum EGeometryScriptBakeNormalSpace ********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKENORMALSPACE(op) \
	op(EGeometryScriptBakeNormalSpace::Tangent) \
	op(EGeometryScriptBakeNormalSpace::Object) 

enum class EGeometryScriptBakeNormalSpace : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeNormalSpace> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeNormalSpace>();
// ********** End Enum EGeometryScriptBakeNormalSpace **********************************************

// ********** Begin Enum EGeometryScriptBakeVertexTopology *****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEVERTEXTOPOLOGY(op) \
	op(EGeometryScriptBakeVertexTopology::CreateNew) \
	op(EGeometryScriptBakeVertexTopology::UseExisting) 

enum class EGeometryScriptBakeVertexTopology : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeVertexTopology> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeVertexTopology>();
// ********** End Enum EGeometryScriptBakeVertexTopology *******************************************

// ********** Begin Enum EGeometryScriptBakeCurvatureTypeMode **************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURETYPEMODE(op) \
	op(EGeometryScriptBakeCurvatureTypeMode::Mean) \
	op(EGeometryScriptBakeCurvatureTypeMode::Max) \
	op(EGeometryScriptBakeCurvatureTypeMode::Min) \
	op(EGeometryScriptBakeCurvatureTypeMode::Gaussian) 

enum class EGeometryScriptBakeCurvatureTypeMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureTypeMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureTypeMode>();
// ********** End Enum EGeometryScriptBakeCurvatureTypeMode ****************************************

// ********** Begin Enum EGeometryScriptBakeCurvatureColorMode *************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURECOLORMODE(op) \
	op(EGeometryScriptBakeCurvatureColorMode::Grayscale) \
	op(EGeometryScriptBakeCurvatureColorMode::RedBlue) \
	op(EGeometryScriptBakeCurvatureColorMode::RedGreenBlue) 

enum class EGeometryScriptBakeCurvatureColorMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureColorMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureColorMode>();
// ********** End Enum EGeometryScriptBakeCurvatureColorMode ***************************************

// ********** Begin Enum EGeometryScriptBakeCurvatureClampMode *************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURECLAMPMODE(op) \
	op(EGeometryScriptBakeCurvatureClampMode::None) \
	op(EGeometryScriptBakeCurvatureClampMode::OnlyPositive) \
	op(EGeometryScriptBakeCurvatureClampMode::OnlyNegative) 

enum class EGeometryScriptBakeCurvatureClampMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureClampMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureClampMode>();
// ********** End Enum EGeometryScriptBakeCurvatureClampMode ***************************************

// ********** Begin Enum EGeometryScriptBakeHeightRangeMode ****************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEHEIGHTRANGEMODE(op) \
	op(EGeometryScriptBakeHeightRangeMode::Absolute) \
	op(EGeometryScriptBakeHeightRangeMode::RelativeBounds) 

enum class EGeometryScriptBakeHeightRangeMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeHeightRangeMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBakeHeightRangeMode>();
// ********** End Enum EGeometryScriptBakeHeightRangeMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
