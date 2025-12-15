// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateProjectDefs.h"

#ifdef GAMEPROJECTGENERATION_TemplateProjectDefs_generated_h
#error "TemplateProjectDefs.generated.h already included, missing '#pragma once' in TemplateProjectDefs.h"
#endif
#define GAMEPROJECTGENERATION_TemplateProjectDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTemplateReplacement **********************************************
struct Z_Construct_UScriptStruct_FTemplateReplacement_Statics;
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateReplacement_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


struct FTemplateReplacement;
// ********** End ScriptStruct FTemplateReplacement ************************************************

// ********** Begin ScriptStruct FTemplateFolderRename *********************************************
struct Z_Construct_UScriptStruct_FTemplateFolderRename_Statics;
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateFolderRename_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


struct FTemplateFolderRename;
// ********** End ScriptStruct FTemplateFolderRename ***********************************************

// ********** Begin ScriptStruct FLocalizedTemplateString ******************************************
struct Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics;
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


struct FLocalizedTemplateString;
// ********** End ScriptStruct FLocalizedTemplateString ********************************************

// ********** Begin ScriptStruct FTemplateVariant **************************************************
struct Z_Construct_UScriptStruct_FTemplateVariant_Statics;
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateVariant_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


struct FTemplateVariant;
// ********** End ScriptStruct FTemplateVariant ****************************************************

// ********** Begin Class UTemplateProjectDefs *****************************************************
struct Z_Construct_UClass_UTemplateProjectDefs_Statics;
GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs_NoRegister();

#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUTemplateProjectDefs(); \
	friend struct ::Z_Construct_UClass_UTemplateProjectDefs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPROJECTGENERATION_API UClass* ::Z_Construct_UClass_UTemplateProjectDefs_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateProjectDefs, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameProjectGeneration"), Z_Construct_UClass_UTemplateProjectDefs_NoRegister) \
	DECLARE_SERIALIZER(UTemplateProjectDefs) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("TemplateDefs");} \



#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPROJECTGENERATION_API UTemplateProjectDefs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateProjectDefs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPROJECTGENERATION_API, UTemplateProjectDefs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateProjectDefs); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateProjectDefs(UTemplateProjectDefs&&) = delete; \
	UTemplateProjectDefs(const UTemplateProjectDefs&) = delete; \
	GAMEPROJECTGENERATION_API virtual ~UTemplateProjectDefs();


#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_115_PROLOG
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_119_INCLASS \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateProjectDefs;

// ********** End Class UTemplateProjectDefs *******************************************************

// ********** Begin ScriptStruct FTemplateCategoryDef **********************************************
struct Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics;
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_230_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics; \
	GAMEPROJECTGENERATION_API static class UScriptStruct* StaticStruct();


struct FTemplateCategoryDef;
// ********** End ScriptStruct FTemplateCategoryDef ************************************************

// ********** Begin Class UTemplateCategories ******************************************************
struct Z_Construct_UClass_UTemplateCategories_Statics;
GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateCategories_NoRegister();

#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateCategories(); \
	friend struct ::Z_Construct_UClass_UTemplateCategories_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPROJECTGENERATION_API UClass* ::Z_Construct_UClass_UTemplateCategories_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateCategories, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameProjectGeneration"), Z_Construct_UClass_UTemplateCategories_NoRegister) \
	DECLARE_SERIALIZER(UTemplateCategories) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("TemplateCategories");} \



#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_257_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateCategories(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateCategories(UTemplateCategories&&) = delete; \
	UTemplateCategories(const UTemplateCategories&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateCategories); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateCategories); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateCategories) \
	NO_API virtual ~UTemplateCategories();


#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_253_PROLOG
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_257_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_257_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateCategories;

// ********** End Class UTemplateCategories ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h

// ********** Begin Enum ETemplateSetting **********************************************************
#define FOREACH_ENUM_ETEMPLATESETTING(op) \
	op(ETemplateSetting::Languages) \
	op(ETemplateSetting::HardwareTarget) \
	op(ETemplateSetting::GraphicsPreset) \
	op(ETemplateSetting::StarterContent) \
	op(ETemplateSetting::XR) \
	op(ETemplateSetting::Raytracing_DEPRECATED) \
	op(ETemplateSetting::Variants) \
	op(ETemplateSetting::All) 

enum class ETemplateSetting;
template<> struct TIsUEnumClass<ETemplateSetting> { enum { Value = true }; };
template<> GAMEPROJECTGENERATION_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemplateSetting>();
// ********** End Enum ETemplateSetting ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
