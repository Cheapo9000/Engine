// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeComponentMeshAddTo.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMeshAddTo_generated_h
#error "CustomizableObjectNodeComponentMeshAddTo.generated.h already included, missing '#pragma once' in CustomizableObjectNodeComponentMeshAddTo.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeComponentMeshAddTo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectNodeComponentMeshAddTo ********************************
struct Z_Construct_UClass_UCustomizableObjectNodeComponentMeshAddTo_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeComponentMeshAddTo_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeComponentMeshAddTo(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeComponentMeshAddTo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeComponentMeshAddTo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeComponentMeshAddTo, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeComponentMeshAddTo_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeComponentMeshAddTo) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomizableObjectNodeComponentMeshAddTo*>(this); }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeComponentMeshAddTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeComponentMeshAddTo(UCustomizableObjectNodeComponentMeshAddTo&&) = delete; \
	UCustomizableObjectNodeComponentMeshAddTo(const UCustomizableObjectNodeComponentMeshAddTo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeComponentMeshAddTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeComponentMeshAddTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeComponentMeshAddTo) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeComponentMeshAddTo();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_13_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeComponentMeshAddTo;

// ********** End Class UCustomizableObjectNodeComponentMeshAddTo **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeComponentMeshAddTo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
