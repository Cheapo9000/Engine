// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshVertexColorFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshVertexColorFunctions_generated_h
#error "MeshVertexColorFunctions.generated.h already included, missing '#pragma once' in MeshVertexColorFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshVertexColorFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptBlurColorMode : uint8;
struct FGeometryScriptBlurMeshVertexColorsOptions;
struct FGeometryScriptColorFlags;
struct FGeometryScriptColorList;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptTransferMeshVertexColorsOptions;
struct FLinearColor;

// ********** Begin ScriptStruct FGeometryScriptBlurMeshVertexColorsOptions ************************
struct Z_Construct_UScriptStruct_FGeometryScriptBlurMeshVertexColorsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptBlurMeshVertexColorsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptBlurMeshVertexColorsOptions;
// ********** End ScriptStruct FGeometryScriptBlurMeshVertexColorsOptions **************************

// ********** Begin ScriptStruct FGeometryScriptTransferMeshVertexColorsOptions ********************
struct Z_Construct_UScriptStruct_FGeometryScriptTransferMeshVertexColorsOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptTransferMeshVertexColorsOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptTransferMeshVertexColorsOptions;
// ********** End ScriptStruct FGeometryScriptTransferMeshVertexColorsOptions **********************

// ********** Begin Class UGeometryScriptLibrary_MeshVertexColorFunctions **************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransferVertexColorsFromMesh); \
	DECLARE_FUNCTION(execBlurMeshVertexColors); \
	DECLARE_FUNCTION(execConvertMeshVertexColorsLinearToSRGB); \
	DECLARE_FUNCTION(execConvertMeshVertexColorsSRGBToLinear); \
	DECLARE_FUNCTION(execGetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshSelectionVertexColor); \
	DECLARE_FUNCTION(execSetMeshConstantVertexColor);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshVertexColorFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVertexColorFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshVertexColorFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshVertexColorFunctions(UGeometryScriptLibrary_MeshVertexColorFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshVertexColorFunctions(const UGeometryScriptLibrary_MeshVertexColorFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshVertexColorFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVertexColorFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVertexColorFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshVertexColorFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_110_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshVertexColorFunctions;

// ********** End Class UGeometryScriptLibrary_MeshVertexColorFunctions ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h

// ********** Begin Enum EGeometryScriptBlurColorMode **********************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTBLURCOLORMODE(op) \
	op(EGeometryScriptBlurColorMode::Uniform) \
	op(EGeometryScriptBlurColorMode::EdgeLength) \
	op(EGeometryScriptBlurColorMode::CotanWeights) 

enum class EGeometryScriptBlurColorMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBlurColorMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptBlurColorMode>();
// ********** End Enum EGeometryScriptBlurColorMode ************************************************

// ********** Begin Enum ETransferVertexColorMethod ************************************************
#define FOREACH_ENUM_ETRANSFERVERTEXCOLORMETHOD(op) \
	op(ETransferVertexColorMethod::ClosestPointOnSurface) \
	op(ETransferVertexColorMethod::Inpaint) 

enum class ETransferVertexColorMethod : uint8;
template<> struct TIsUEnumClass<ETransferVertexColorMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETransferVertexColorMethod>();
// ********** End Enum ETransferVertexColorMethod **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
