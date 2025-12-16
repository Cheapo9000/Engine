// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeExtensionDataVariation.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeExtensionDataVariation_generated_h
#error "CustomizableObjectNodeExtensionDataVariation.generated.h already included, missing '#pragma once' in CustomizableObjectNodeExtensionDataVariation.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeExtensionDataVariation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectExtensionDataVariation *************************
struct Z_Construct_UScriptStruct_FCustomizableObjectExtensionDataVariation_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectExtensionDataVariation_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectExtensionDataVariation;
// ********** End ScriptStruct FCustomizableObjectExtensionDataVariation ***************************

// ********** Begin Class UCustomizableObjectNodeExtensionDataVariation ****************************
struct Z_Construct_UClass_UCustomizableObjectNodeExtensionDataVariation_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataVariation_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeExtensionDataVariation(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeExtensionDataVariation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeExtensionDataVariation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeExtensionDataVariation, UCustomizableObjectNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeExtensionDataVariation_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeExtensionDataVariation) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomizableObjectNodeExtensionDataVariation*>(this); }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeExtensionDataVariation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeExtensionDataVariation(UCustomizableObjectNodeExtensionDataVariation&&) = delete; \
	UCustomizableObjectNodeExtensionDataVariation(const UCustomizableObjectNodeExtensionDataVariation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeExtensionDataVariation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeExtensionDataVariation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeExtensionDataVariation) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeExtensionDataVariation();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_21_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeExtensionDataVariation;

// ********** End Class UCustomizableObjectNodeExtensionDataVariation ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeExtensionDataVariation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
