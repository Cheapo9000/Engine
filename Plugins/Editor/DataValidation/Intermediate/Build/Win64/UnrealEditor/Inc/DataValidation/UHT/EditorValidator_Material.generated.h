// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidator_Material.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAVALIDATION_EditorValidator_Material_generated_h
#error "EditorValidator_Material.generated.h already included, missing '#pragma once' in EditorValidator_Material.h"
#endif
#define DATAVALIDATION_EditorValidator_Material_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidator_Material(); \
	friend struct Z_Construct_UClass_UEditorValidator_Material_Statics; \
public: \
	DECLARE_CLASS(UEditorValidator_Material, UEditorValidatorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidator_Material)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorValidator_Material(UEditorValidator_Material&&); \
	UEditorValidator_Material(const UEditorValidator_Material&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidator_Material); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidator_Material); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidator_Material) \
	NO_API virtual ~UEditorValidator_Material();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_18_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidator_Material>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValidationMaterial(); \
	friend struct Z_Construct_UClass_UValidationMaterial_Statics; \
public: \
	DECLARE_CLASS(UValidationMaterial, UMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UValidationMaterial)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValidationMaterial(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UValidationMaterial(UValidationMaterial&&); \
	UValidationMaterial(const UValidationMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValidationMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValidationMaterial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UValidationMaterial) \
	NO_API virtual ~UValidationMaterial();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_44_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UValidationMaterial>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialEditorValidationShaderPlatform_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FMaterialEditorValidationShaderPlatform>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialEditorValidationPlatform_Statics; \
	DATAVALIDATION_API static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FMaterialEditorValidationPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Material_h


#define FOREACH_ENUM_EMATERIALEDITORVALIDATIONFEATURELEVEL(op) \
	op(EMaterialEditorValidationFeatureLevel::CurrentMaxFeatureLevel) \
	op(EMaterialEditorValidationFeatureLevel::ES3_1) \
	op(EMaterialEditorValidationFeatureLevel::SM5) \
	op(EMaterialEditorValidationFeatureLevel::SM6) 

enum class EMaterialEditorValidationFeatureLevel : int32;
template<> struct TIsUEnumClass<EMaterialEditorValidationFeatureLevel> { enum { Value = true }; };
template<> DATAVALIDATION_API UEnum* StaticEnum<EMaterialEditorValidationFeatureLevel>();

#define FOREACH_ENUM_EMATERIALEDITORVALIDATIONQUALITYLEVEL(op) \
	op(EMaterialEditorValidationQualityLevel::Low) \
	op(EMaterialEditorValidationQualityLevel::Medium) \
	op(EMaterialEditorValidationQualityLevel::High) \
	op(EMaterialEditorValidationQualityLevel::Epic) 

enum class EMaterialEditorValidationQualityLevel : uint8;
template<> struct TIsUEnumClass<EMaterialEditorValidationQualityLevel> { enum { Value = true }; };
template<> DATAVALIDATION_API UEnum* StaticEnum<EMaterialEditorValidationQualityLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
