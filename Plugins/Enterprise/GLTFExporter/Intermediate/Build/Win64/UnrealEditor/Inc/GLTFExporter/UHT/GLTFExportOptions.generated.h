// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Options/GLTFExportOptions.h"

#ifdef GLTFEXPORTER_GLTFExportOptions_generated_h
#error "GLTFExportOptions.generated.h already included, missing '#pragma once' in GLTFExportOptions.h"
#endif
#define GLTFEXPORTER_GLTFExportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGLTFExportOptions *******************************************************
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


struct Z_Construct_UClass_UGLTFExportOptions_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUGLTFExportOptions(); \
	friend struct ::Z_Construct_UClass_UGLTFExportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFExportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFExportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFExportOptions_NoRegister) \
	DECLARE_SERIALIZER(UGLTFExportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GLTFEXPORTER_API UGLTFExportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFExportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFExportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFExportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFExportOptions(UGLTFExportOptions&&) = delete; \
	UGLTFExportOptions(const UGLTFExportOptions&) = delete; \
	GLTFEXPORTER_API virtual ~UGLTFExportOptions();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_33_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_INCLASS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFExportOptions;

// ********** End Class UGLTFExportOptions *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h

// ********** Begin Enum EGLTFTextureImageFormat ***************************************************
#define FOREACH_ENUM_EGLTFTEXTUREIMAGEFORMAT(op) \
	op(EGLTFTextureImageFormat::None) \
	op(EGLTFTextureImageFormat::PNG) \
	op(EGLTFTextureImageFormat::JPEG) 

enum class EGLTFTextureImageFormat : uint8;
template<> struct TIsUEnumClass<EGLTFTextureImageFormat> { enum { Value = true }; };
template<> GLTFEXPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGLTFTextureImageFormat>();
// ********** End Enum EGLTFTextureImageFormat *****************************************************

// ********** Begin Enum EGLTFMaterialVariantMode **************************************************
#define FOREACH_ENUM_EGLTFMATERIALVARIANTMODE(op) \
	op(EGLTFMaterialVariantMode::None) \
	op(EGLTFMaterialVariantMode::Simple) \
	op(EGLTFMaterialVariantMode::UseMeshData) 

enum class EGLTFMaterialVariantMode : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialVariantMode> { enum { Value = true }; };
template<> GLTFEXPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGLTFMaterialVariantMode>();
// ********** End Enum EGLTFMaterialVariantMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
