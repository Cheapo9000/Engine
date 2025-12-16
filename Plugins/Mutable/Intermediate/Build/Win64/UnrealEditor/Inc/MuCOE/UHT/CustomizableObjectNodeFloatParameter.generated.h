// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeFloatParameter.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeFloatParameter_generated_h
#error "CustomizableObjectNodeFloatParameter.generated.h already included, missing '#pragma once' in CustomizableObjectNodeFloatParameter.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeFloatParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectNodeFloatDescription ***************************
struct Z_Construct_UScriptStruct_FCustomizableObjectNodeFloatDescription_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectNodeFloatDescription_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectNodeFloatDescription;
// ********** End ScriptStruct FCustomizableObjectNodeFloatDescription *****************************

// ********** Begin Class UCustomizableObjectNodeFloatParameter ************************************
struct Z_Construct_UClass_UCustomizableObjectNodeFloatParameter_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatParameter_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeFloatParameter(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeFloatParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeFloatParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeFloatParameter, UCustomizableObjectNodeParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeFloatParameter_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeFloatParameter)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeFloatParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeFloatParameter(UCustomizableObjectNodeFloatParameter&&) = delete; \
	UCustomizableObjectNodeFloatParameter(const UCustomizableObjectNodeFloatParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeFloatParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeFloatParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeFloatParameter) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeFloatParameter();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_31_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeFloatParameter;

// ********** End Class UCustomizableObjectNodeFloatParameter **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeFloatParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
