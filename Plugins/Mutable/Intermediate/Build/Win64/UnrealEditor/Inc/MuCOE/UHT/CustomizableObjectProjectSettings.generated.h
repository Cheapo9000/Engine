// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectProjectSettings.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectProjectSettings_generated_h
#error "CustomizableObjectProjectSettings.generated.h already included, missing '#pragma once' in CustomizableObjectProjectSettings.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectProjectSettings ***************************************
struct Z_Construct_UClass_UCustomizableObjectProjectSettings_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectProjectSettings_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectProjectSettings(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mutable");} \



#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizableObjectProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectProjectSettings(UCustomizableObjectProjectSettings&&) = delete; \
	UCustomizableObjectProjectSettings(const UCustomizableObjectProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectProjectSettings) \
	NO_API virtual ~UCustomizableObjectProjectSettings();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_9_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectProjectSettings;

// ********** End Class UCustomizableObjectProjectSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
