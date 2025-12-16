// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeVariation.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeVariation_generated_h
#error "CustomizableObjectNodeVariation.generated.h already included, missing '#pragma once' in CustomizableObjectNodeVariation.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeVariation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectVariation **************************************
struct Z_Construct_UScriptStruct_FCustomizableObjectVariation_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectVariation_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectVariation;
// ********** End ScriptStruct FCustomizableObjectVariation ****************************************

// ********** Begin Class UCustomizableObjectNodeVariation *****************************************
struct Z_Construct_UClass_UCustomizableObjectNodeVariation_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeVariation_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeVariation(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeVariation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeVariation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeVariation, UCustomizableObjectNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeVariation_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeVariation)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeVariation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeVariation(UCustomizableObjectNodeVariation&&) = delete; \
	UCustomizableObjectNodeVariation(const UCustomizableObjectNodeVariation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeVariation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeVariation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeVariation) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeVariation();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_32_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeVariation;

// ********** End Class UCustomizableObjectNodeVariation *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeVariation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
