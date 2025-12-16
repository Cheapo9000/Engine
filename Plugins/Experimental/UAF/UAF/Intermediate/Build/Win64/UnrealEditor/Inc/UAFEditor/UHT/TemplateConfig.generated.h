// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Wizard/TemplateConfig.h"

#ifdef UAFEDITOR_TemplateConfig_generated_h
#error "TemplateConfig.generated.h already included, missing '#pragma once' in TemplateConfig.h"
#endif
#define UAFEDITOR_TemplateConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUAFTemplateConfig *******************************************************
struct Z_Construct_UClass_UUAFTemplateConfig_Statics;
UAFEDITOR_API UClass* Z_Construct_UClass_UUAFTemplateConfig_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUAFTemplateConfig(); \
	friend struct ::Z_Construct_UClass_UUAFTemplateConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFEDITOR_API UClass* ::Z_Construct_UClass_UUAFTemplateConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UUAFTemplateConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UAFEditor"), Z_Construct_UClass_UUAFTemplateConfig_NoRegister) \
	DECLARE_SERIALIZER(UUAFTemplateConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUAFTemplateConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUAFTemplateConfig(UUAFTemplateConfig&&) = delete; \
	UUAFTemplateConfig(const UUAFTemplateConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUAFTemplateConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUAFTemplateConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUAFTemplateConfig) \
	NO_API virtual ~UUAFTemplateConfig();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUAFTemplateConfig;

// ********** End Class UUAFTemplateConfig *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Private_Wizard_TemplateConfig_h

// ********** Begin Enum ETemplateBlueprintMode ****************************************************
#define FOREACH_ENUM_ETEMPLATEBLUEPRINTMODE(op) \
	op(ETemplateBlueprintMode::CreateNewBlueprint) \
	op(ETemplateBlueprintMode::ModifyExistingBlueprint) \
	op(ETemplateBlueprintMode::DoNothing) 

enum class ETemplateBlueprintMode;
template<> struct TIsUEnumClass<ETemplateBlueprintMode> { enum { Value = true }; };
template<> UAFEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemplateBlueprintMode>();
// ********** End Enum ETemplateBlueprintMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
