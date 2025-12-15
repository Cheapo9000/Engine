// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditorSettings.h"

#ifdef MATERIALEDITOR_MaterialEditorSettings_generated_h
#error "MaterialEditorSettings.generated.h already included, missing '#pragma once' in MaterialEditorSettings.h"
#endif
#define MATERIALEDITOR_MaterialEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCheckerboardSettings *********************************************
struct Z_Construct_UScriptStruct_FCheckerboardSettings_Statics;
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCheckerboardSettings_Statics; \
	MATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FCheckerboardSettings;
// ********** End ScriptStruct FCheckerboardSettings ***********************************************

// ********** Begin ScriptStruct FPreviewBackgroundSettings ****************************************
struct Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics;
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics; \
	MATERIALEDITOR_API static class UScriptStruct* StaticStruct();


struct FPreviewBackgroundSettings;
// ********** End ScriptStruct FPreviewBackgroundSettings ******************************************

// ********** Begin Class UMaterialEditorSettings **************************************************
struct Z_Construct_UClass_UMaterialEditorSettings_Statics;
MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMaterialEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MATERIALEDITOR_API UClass* ::Z_Construct_UClass_UMaterialEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialEditor"), Z_Construct_UClass_UMaterialEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALEDITOR_API UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditorSettings(UMaterialEditorSettings&&) = delete; \
	UMaterialEditorSettings(const UMaterialEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALEDITOR_API, UMaterialEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorSettings) \
	MATERIALEDITOR_API virtual ~UMaterialEditorSettings();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_102_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditorSettings;

// ********** End Class UMaterialEditorSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h

// ********** Begin Enum EOfflineShaderCompiler ****************************************************
#define FOREACH_ENUM_EOFFLINESHADERCOMPILER(op) \
	op(EOfflineShaderCompiler::Mali) \
	op(EOfflineShaderCompiler::Adreno) 

enum class EOfflineShaderCompiler : uint8;
template<> struct TIsUEnumClass<EOfflineShaderCompiler> { enum { Value = true }; };
template<> MATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOfflineShaderCompiler>();
// ********** End Enum EOfflineShaderCompiler ******************************************************

// ********** Begin Enum EBackgroundType ***********************************************************
#define FOREACH_ENUM_EBACKGROUNDTYPE(op) \
	op(EBackgroundType::SolidColor) \
	op(EBackgroundType::Checkered) 

enum class EBackgroundType : uint8;
template<> struct TIsUEnumClass<EBackgroundType> { enum { Value = true }; };
template<> MATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBackgroundType>();
// ********** End Enum EBackgroundType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
