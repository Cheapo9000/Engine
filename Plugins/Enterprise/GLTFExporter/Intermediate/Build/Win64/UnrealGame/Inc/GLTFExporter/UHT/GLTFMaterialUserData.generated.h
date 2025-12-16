// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserData/GLTFMaterialUserData.h"

#ifdef GLTFEXPORTER_GLTFMaterialUserData_generated_h
#error "GLTFMaterialUserData.generated.h already included, missing '#pragma once' in GLTFMaterialUserData.h"
#endif
#define GLTFEXPORTER_GLTFMaterialUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGLTFMaterialBakeSize *********************************************
struct Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics;
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


struct FGLTFMaterialBakeSize;
// ********** End ScriptStruct FGLTFMaterialBakeSize ***********************************************

// ********** Begin ScriptStruct FGLTFOverrideMaterialBakeSettings *********************************
struct Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics;
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


struct FGLTFOverrideMaterialBakeSettings;
// ********** End ScriptStruct FGLTFOverrideMaterialBakeSettings ***********************************

// ********** Begin Class UGLTFMaterialExportOptions ***********************************************
struct Z_Construct_UClass_UGLTFMaterialExportOptions_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFMaterialExportOptions(); \
	friend struct ::Z_Construct_UClass_UGLTFMaterialExportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFMaterialExportOptions, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister) \
	DECLARE_SERIALIZER(UGLTFMaterialExportOptions)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GLTFEXPORTER_API UGLTFMaterialExportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFMaterialExportOptions(UGLTFMaterialExportOptions&&) = delete; \
	UGLTFMaterialExportOptions(const UGLTFMaterialExportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFMaterialExportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFMaterialExportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFMaterialExportOptions) \
	GLTFEXPORTER_API virtual ~UGLTFMaterialExportOptions();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_89_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFMaterialExportOptions;

// ********** End Class UGLTFMaterialExportOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h

// ********** Begin Enum EGLTFMaterialBakeMode *****************************************************
#define FOREACH_ENUM_EGLTFMATERIALBAKEMODE(op) \
	op(EGLTFMaterialBakeMode::Disabled) \
	op(EGLTFMaterialBakeMode::Simple) \
	op(EGLTFMaterialBakeMode::UseMeshData) 

enum class EGLTFMaterialBakeMode : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialBakeMode> { enum { Value = true }; };
template<> GLTFEXPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGLTFMaterialBakeMode>();
// ********** End Enum EGLTFMaterialBakeMode *******************************************************

// ********** Begin Enum EGLTFMaterialPropertyGroup ************************************************
#define FOREACH_ENUM_EGLTFMATERIALPROPERTYGROUP(op) \
	op(EGLTFMaterialPropertyGroup::None) \
	op(EGLTFMaterialPropertyGroup::BaseColorOpacity) \
	op(EGLTFMaterialPropertyGroup::MetallicRoughness) \
	op(EGLTFMaterialPropertyGroup::EmissiveColor) \
	op(EGLTFMaterialPropertyGroup::Normal) \
	op(EGLTFMaterialPropertyGroup::AmbientOcclusion) \
	op(EGLTFMaterialPropertyGroup::ClearCoatRoughness) \
	op(EGLTFMaterialPropertyGroup::ClearCoatBottomNormal) 

enum class EGLTFMaterialPropertyGroup : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialPropertyGroup> { enum { Value = true }; };
template<> GLTFEXPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGLTFMaterialPropertyGroup>();
// ********** End Enum EGLTFMaterialPropertyGroup **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
