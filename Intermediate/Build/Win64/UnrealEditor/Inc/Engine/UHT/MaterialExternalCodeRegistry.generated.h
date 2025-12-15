// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExternalCodeRegistry.h"

#ifdef ENGINE_MaterialExternalCodeRegistry_generated_h
#error "MaterialExternalCodeRegistry.generated.h already included, missing '#pragma once' in MaterialExternalCodeRegistry.h"
#endif
#define ENGINE_MaterialExternalCodeRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialExternalCodeEnvironmentDefine ****************************
struct Z_Construct_UScriptStruct_FMaterialExternalCodeEnvironmentDefine_Statics;
#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExternalCodeEnvironmentDefine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExternalCodeEnvironmentDefine;
// ********** End ScriptStruct FMaterialExternalCodeEnvironmentDefine ******************************

// ********** Begin ScriptStruct FMaterialExternalCodeDeclaration **********************************
struct Z_Construct_UScriptStruct_FMaterialExternalCodeDeclaration_Statics;
#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialExternalCodeDeclaration_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialExternalCodeDeclaration;
// ********** End ScriptStruct FMaterialExternalCodeDeclaration ************************************

// ********** Begin Class UMaterialExternalCodeCollection ******************************************
struct Z_Construct_UClass_UMaterialExternalCodeCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExternalCodeCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExternalCodeCollection(); \
	friend struct ::Z_Construct_UClass_UMaterialExternalCodeCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExternalCodeCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExternalCodeCollection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExternalCodeCollection_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExternalCodeCollection) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MaterialExpressions");} \



#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_177_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExternalCodeCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExternalCodeCollection(UMaterialExternalCodeCollection&&) = delete; \
	UMaterialExternalCodeCollection(const UMaterialExternalCodeCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExternalCodeCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExternalCodeCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExternalCodeCollection) \
	NO_API virtual ~UMaterialExternalCodeCollection();


#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_174_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_177_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExternalCodeCollection;

// ********** End Class UMaterialExternalCodeCollection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Materials_MaterialExternalCodeRegistry_h

// ********** Begin Enum EMaterialShaderFrequency **************************************************
#define FOREACH_ENUM_EMATERIALSHADERFREQUENCY(op) \
	op(EMaterialShaderFrequency::Vertex) \
	op(EMaterialShaderFrequency::Pixel) \
	op(EMaterialShaderFrequency::Compute) \
	op(EMaterialShaderFrequency::Any) 

enum class EMaterialShaderFrequency : uint8;
template<> struct TIsUEnumClass<EMaterialShaderFrequency> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialShaderFrequency>();
// ********** End Enum EMaterialShaderFrequency ****************************************************

// ********** Begin Enum EMaterialFeatureLevel *****************************************************
#define FOREACH_ENUM_EMATERIALFEATURELEVEL(op) \
	op(EMaterialFeatureLevel::ES2_REMOVED) \
	op(EMaterialFeatureLevel::ES3_1) \
	op(EMaterialFeatureLevel::SM4_REMOVED) \
	op(EMaterialFeatureLevel::SM5) \
	op(EMaterialFeatureLevel::SM6) \
	op(EMaterialFeatureLevel::Num) 

enum class EMaterialFeatureLevel : uint8;
template<> struct TIsUEnumClass<EMaterialFeatureLevel> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialFeatureLevel>();
// ********** End Enum EMaterialFeatureLevel *******************************************************

// ********** Begin Enum EMaterialValueTypeBridge **************************************************
#define FOREACH_ENUM_EMATERIALVALUETYPEBRIDGE(op) \
	op(EMaterialValueTypeBridge::Float1) \
	op(EMaterialValueTypeBridge::Float2) \
	op(EMaterialValueTypeBridge::Float3) \
	op(EMaterialValueTypeBridge::Float4) \
	op(EMaterialValueTypeBridge::Texture2D) \
	op(EMaterialValueTypeBridge::TextureCube) \
	op(EMaterialValueTypeBridge::Texture2DArray) \
	op(EMaterialValueTypeBridge::TextureCubeArray) \
	op(EMaterialValueTypeBridge::VolumeTexture) \
	op(EMaterialValueTypeBridge::StaticBool) \
	op(EMaterialValueTypeBridge::Unknown) \
	op(EMaterialValueTypeBridge::MaterialAttributes) \
	op(EMaterialValueTypeBridge::TextureExternal) \
	op(EMaterialValueTypeBridge::TextureVirtual) \
	op(EMaterialValueTypeBridge::SparseVolumeTexture) \
	op(EMaterialValueTypeBridge::VTPageTableResult) \
	op(EMaterialValueTypeBridge::ShadingModel) \
	op(EMaterialValueTypeBridge::Substrate) \
	op(EMaterialValueTypeBridge::LWCScalar) \
	op(EMaterialValueTypeBridge::LWCVector2) \
	op(EMaterialValueTypeBridge::LWCVector3) \
	op(EMaterialValueTypeBridge::LWCVector4) \
	op(EMaterialValueTypeBridge::Execution) \
	op(EMaterialValueTypeBridge::VoidStatement) \
	op(EMaterialValueTypeBridge::Bool) \
	op(EMaterialValueTypeBridge::UInt1) \
	op(EMaterialValueTypeBridge::UInt2) \
	op(EMaterialValueTypeBridge::UInt3) \
	op(EMaterialValueTypeBridge::UInt4) \
	op(EMaterialValueTypeBridge::TextureCollection) \
	op(EMaterialValueTypeBridge::TextureMeshPaint) \
	op(EMaterialValueTypeBridge::TextureMaterialCache) \
	op(EMaterialValueTypeBridge::Texture) \
	op(EMaterialValueTypeBridge::Float) \
	op(EMaterialValueTypeBridge::UInt) \
	op(EMaterialValueTypeBridge::LWCType) \
	op(EMaterialValueTypeBridge::Numeric) \
	op(EMaterialValueTypeBridge::Float3x3) \
	op(EMaterialValueTypeBridge::Float4x4) \
	op(EMaterialValueTypeBridge::LWCMatrix) 

enum class EMaterialValueTypeBridge : uint64;
template<> struct TIsUEnumClass<EMaterialValueTypeBridge> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialValueTypeBridge>();
// ********** End Enum EMaterialValueTypeBridge ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
