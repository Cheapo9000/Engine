// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeEnumParameter_generated_h
#error "CustomizableObjectNodeEnumParameter.generated.h already included, missing '#pragma once' in CustomizableObjectNodeEnumParameter.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeEnumParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectNodeEnumValue **********************************
struct Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectNodeEnumValue;
// ********** End ScriptStruct FCustomizableObjectNodeEnumValue ************************************

// ********** Begin Class UCustomizableObjectNodeEnumParameter *************************************
struct Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeEnumParameter(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeEnumParameter, UCustomizableObjectNodeParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeEnumParameter)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeEnumParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeEnumParameter(UCustomizableObjectNodeEnumParameter&&) = delete; \
	UCustomizableObjectNodeEnumParameter(const UCustomizableObjectNodeEnumParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeEnumParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeEnumParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeEnumParameter) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeEnumParameter();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_31_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeEnumParameter;

// ********** End Class UCustomizableObjectNodeEnumParameter ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
