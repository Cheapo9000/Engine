// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMaterialEditorSettings.h"

#ifdef DYNAMICMATERIALEDITOR_DynamicMaterialEditorSettings_generated_h
#error "DynamicMaterialEditorSettings.generated.h already included, missing '#pragma once' in DynamicMaterialEditorSettings.h"
#endif
#define DYNAMICMATERIALEDITOR_DynamicMaterialEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMMaterialEffectList *********************************************
struct Z_Construct_UScriptStruct_FDMMaterialEffectList_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMMaterialEffectList_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMMaterialEffectList;
// ********** End ScriptStruct FDMMaterialEffectList ***********************************************

// ********** Begin ScriptStruct FDMDefaultMaterialPropertySlotValue *******************************
struct Z_Construct_UScriptStruct_FDMDefaultMaterialPropertySlotValue_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMDefaultMaterialPropertySlotValue_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMDefaultMaterialPropertySlotValue;
// ********** End ScriptStruct FDMDefaultMaterialPropertySlotValue *********************************

// ********** Begin ScriptStruct FDMMaterialChannelListPreset **************************************
struct Z_Construct_UScriptStruct_FDMMaterialChannelListPreset_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMMaterialChannelListPreset_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMMaterialChannelListPreset;
// ********** End ScriptStruct FDMMaterialChannelListPreset ****************************************

// ********** Begin ScriptStruct FDMContentBrowserThumbnailSettings ********************************
struct Z_Construct_UScriptStruct_FDMContentBrowserThumbnailSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMContentBrowserThumbnailSettings_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMContentBrowserThumbnailSettings;
// ********** End ScriptStruct FDMContentBrowserThumbnailSettings **********************************

// ********** Begin Class UDynamicMaterialEditorSettings *******************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldAutomaticallyApplyToSourceOnPreviewCompile); \
	DECLARE_FUNCTION(execShouldAutomaticallyCompilePreviewMaterial); \
	DECLARE_FUNCTION(execShouldAutomaticallyCopyParametersToSourceMaterial);


struct Z_Construct_UClass_UDynamicMaterialEditorSettings_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDynamicMaterialEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDynamicMaterialEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDynamicMaterialEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialEditorSettings(UDynamicMaterialEditorSettings&&) = delete; \
	UDynamicMaterialEditorSettings(const UDynamicMaterialEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicMaterialEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialEditorSettings)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_181_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialEditorSettings;

// ********** End Class UDynamicMaterialEditorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_DynamicMaterialEditorSettings_h

// ********** Begin Enum EDMDefaultMaterialPropertySlotValueType ***********************************
#define FOREACH_ENUM_EDMDEFAULTMATERIALPROPERTYSLOTVALUETYPE(op) \
	op(EDMDefaultMaterialPropertySlotValueType::Texture) \
	op(EDMDefaultMaterialPropertySlotValueType::Color) 

enum class EDMDefaultMaterialPropertySlotValueType : uint8;
template<> struct TIsUEnumClass<EDMDefaultMaterialPropertySlotValueType> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMDefaultMaterialPropertySlotValueType>();
// ********** End Enum EDMDefaultMaterialPropertySlotValueType *************************************

// ********** Begin Enum EDMMaterialPreviewMesh ****************************************************
#define FOREACH_ENUM_EDMMATERIALPREVIEWMESH(op) \
	op(EDMMaterialPreviewMesh::Plane) \
	op(EDMMaterialPreviewMesh::Cube) \
	op(EDMMaterialPreviewMesh::Sphere) \
	op(EDMMaterialPreviewMesh::Cylinder) \
	op(EDMMaterialPreviewMesh::Custom) 

enum class EDMMaterialPreviewMesh : uint8;
template<> struct TIsUEnumClass<EDMMaterialPreviewMesh> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMMaterialPreviewMesh>();
// ********** End Enum EDMMaterialPreviewMesh ******************************************************

// ********** Begin Enum EDMMaterialEditorLayout ***************************************************
#define FOREACH_ENUM_EDMMATERIALEDITORLAYOUT(op) \
	op(EDMMaterialEditorLayout::Top) \
	op(EDMMaterialEditorLayout::TopSlim) \
	op(EDMMaterialEditorLayout::Left) \
	op(EDMMaterialEditorLayout::First) \
	op(EDMMaterialEditorLayout::Last) 

enum class EDMMaterialEditorLayout : uint8;
template<> struct TIsUEnumClass<EDMMaterialEditorLayout> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMMaterialEditorLayout>();
// ********** End Enum EDMMaterialEditorLayout *****************************************************

// ********** Begin Enum EDMLiveEditMode ***********************************************************
#define FOREACH_ENUM_EDMLIVEEDITMODE(op) \
	op(EDMLiveEditMode::Disabled) \
	op(EDMLiveEditMode::LiveEditOff) \
	op(EDMLiveEditMode::LiveEditOn) 

enum class EDMLiveEditMode : uint8;
template<> struct TIsUEnumClass<EDMLiveEditMode> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMLiveEditMode>();
// ********** End Enum EDMLiveEditMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
