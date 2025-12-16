// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeModifierBase.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeModifierBase_generated_h
#error "CustomizableObjectNodeModifierBase.generated.h already included, missing '#pragma once' in CustomizableObjectNodeModifierBase.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeModifierBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLegacyTag ********************************************************
struct Z_Construct_UScriptStruct_FLegacyTag_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLegacyTag_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FLegacyTag;
// ********** End ScriptStruct FLegacyTag **********************************************************

// ********** Begin Class UCustomizableObjectNodeModifierBase **************************************
struct Z_Construct_UClass_UCustomizableObjectNodeModifierBase_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeModifierBase_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeModifierBase(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeModifierBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeModifierBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeModifierBase, UCustomizableObjectNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeModifierBase_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeModifierBase)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeModifierBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeModifierBase(UCustomizableObjectNodeModifierBase&&) = delete; \
	UCustomizableObjectNodeModifierBase(const UCustomizableObjectNodeModifierBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeModifierBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeModifierBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeModifierBase) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeModifierBase();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_33_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeModifierBase;

// ********** End Class UCustomizableObjectNodeModifierBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeModifierBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
