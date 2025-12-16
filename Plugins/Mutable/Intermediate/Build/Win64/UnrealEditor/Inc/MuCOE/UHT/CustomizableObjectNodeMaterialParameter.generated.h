// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMaterialParameter.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialParameter_generated_h
#error "CustomizableObjectNodeMaterialParameter.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMaterialParameter.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeMaterialParameter *********************************
struct Z_Construct_UClass_UCustomizableObjectNodeMaterialParameter_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialParameter_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMaterialParameter(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeMaterialParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeMaterialParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeMaterialParameter, UCustomizableObjectNodeParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeMaterialParameter_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMaterialParameter) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomizableObjectNodeMaterialParameter*>(this); }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeMaterialParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeMaterialParameter(UCustomizableObjectNodeMaterialParameter&&) = delete; \
	UCustomizableObjectNodeMaterialParameter(const UCustomizableObjectNodeMaterialParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeMaterialParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMaterialParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeMaterialParameter) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeMaterialParameter();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_17_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeMaterialParameter;

// ********** End Class UCustomizableObjectNodeMaterialParameter ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
