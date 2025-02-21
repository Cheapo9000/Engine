// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMaterialEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIALEDITOR_DynamicMaterialEditorSettings_generated_h
#error "DynamicMaterialEditorSettings.generated.h already included, missing '#pragma once' in DynamicMaterialEditorSettings.h"
#endif
#define DYNAMICMATERIALEDITOR_DynamicMaterialEditorSettings_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialEffectList_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialEffectList>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMDefaultMaterialPropertySlotValue_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMDefaultMaterialPropertySlotValue>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialChannelListPreset_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialChannelListPreset>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMContentBrowserThumbnailSettings_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMContentBrowserThumbnailSettings>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialEditorSettings(); \
	friend struct Z_Construct_UClass_UDynamicMaterialEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UDynamicMaterialEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UDynamicMaterialEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_176_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicMaterialEditorSettings(UDynamicMaterialEditorSettings&&); \
	UDynamicMaterialEditorSettings(const UDynamicMaterialEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicMaterialEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialEditorSettings)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_173_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_176_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDynamicMaterialEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h


#define FOREACH_ENUM_EDMDEFAULTMATERIALPROPERTYSLOTVALUETYPE(op) \
	op(EDMDefaultMaterialPropertySlotValueType::Texture) \
	op(EDMDefaultMaterialPropertySlotValueType::Color) 

enum class EDMDefaultMaterialPropertySlotValueType : uint8;
template<> struct TIsUEnumClass<EDMDefaultMaterialPropertySlotValueType> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EDMDefaultMaterialPropertySlotValueType>();

#define FOREACH_ENUM_EDMMATERIALPREVIEWMESH(op) \
	op(EDMMaterialPreviewMesh::Plane) \
	op(EDMMaterialPreviewMesh::Cube) \
	op(EDMMaterialPreviewMesh::Sphere) \
	op(EDMMaterialPreviewMesh::Cylinder) \
	op(EDMMaterialPreviewMesh::Custom) 

enum class EDMMaterialPreviewMesh : uint8;
template<> struct TIsUEnumClass<EDMMaterialPreviewMesh> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EDMMaterialPreviewMesh>();

#define FOREACH_ENUM_EDMMATERIALEDITORLAYOUT(op) \
	op(EDMMaterialEditorLayout::Top) \
	op(EDMMaterialEditorLayout::TopSlim) \
	op(EDMMaterialEditorLayout::Left) \
	op(EDMMaterialEditorLayout::First) \
	op(EDMMaterialEditorLayout::Last) 

enum class EDMMaterialEditorLayout : uint8;
template<> struct TIsUEnumClass<EDMMaterialEditorLayout> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_API UEnum* StaticEnum<EDMMaterialEditorLayout>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
