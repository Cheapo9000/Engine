// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectEditorViewportLights.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditorViewportLights_generated_h
#error "CustomizableObjectEditorViewportLights.generated.h already included, missing '#pragma once' in CustomizableObjectEditorViewportLights.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditorViewportLights_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FViewportLightData ************************************************
struct Z_Construct_UScriptStruct_FViewportLightData_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_9_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FViewportLightData_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FViewportLightData;
// ********** End ScriptStruct FViewportLightData **************************************************

// ********** Begin Class UCustomizableObjectEditorViewportLights **********************************
struct Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorViewportLights_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectEditorViewportLights(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectEditorViewportLights_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectEditorViewportLights, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectEditorViewportLights_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectEditorViewportLights)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizableObjectEditorViewportLights(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectEditorViewportLights(UCustomizableObjectEditorViewportLights&&) = delete; \
	UCustomizableObjectEditorViewportLights(const UCustomizableObjectEditorViewportLights&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectEditorViewportLights); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectEditorViewportLights); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectEditorViewportLights) \
	NO_API virtual ~UCustomizableObjectEditorViewportLights();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_40_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectEditorViewportLights;

// ********** End Class UCustomizableObjectEditorViewportLights ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
