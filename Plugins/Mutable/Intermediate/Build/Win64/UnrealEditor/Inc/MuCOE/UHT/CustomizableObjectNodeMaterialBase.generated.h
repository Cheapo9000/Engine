// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMaterialBase.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialBase_generated_h
#error "CustomizableObjectNodeMaterialBase.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMaterialBase.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNodeMaterialParameterId ******************************************
struct Z_Construct_UScriptStruct_FNodeMaterialParameterId_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodeMaterialParameterId_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FNodeMaterialParameterId;
// ********** End ScriptStruct FNodeMaterialParameterId ********************************************

// ********** Begin Class UCustomizableObjectNodeMaterialBase **************************************
struct Z_Construct_UClass_UCustomizableObjectNodeMaterialBase_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialBase_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMaterialBase(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeMaterialBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeMaterialBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeMaterialBase, UCustomizableObjectNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeMaterialBase_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMaterialBase)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeMaterialBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeMaterialBase(UCustomizableObjectNodeMaterialBase&&) = delete; \
	UCustomizableObjectNodeMaterialBase(const UCustomizableObjectNodeMaterialBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeMaterialBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMaterialBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeMaterialBase) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeMaterialBase();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_52_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h_56_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeMaterialBase;

// ********** End Class UCustomizableObjectNodeMaterialBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
