// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/ICustomizableObjectExtensionNode.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_ICustomizableObjectExtensionNode_generated_h
#error "ICustomizableObjectExtensionNode.generated.h already included, missing '#pragma once' in ICustomizableObjectExtensionNode.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_ICustomizableObjectExtensionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCustomizableObjectExtensionNode *************************************
struct Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectExtensionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectExtensionNode(UCustomizableObjectExtensionNode&&) = delete; \
	UCustomizableObjectExtensionNode(const UCustomizableObjectExtensionNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectExtensionNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectExtensionNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectExtensionNode) \
	virtual ~UCustomizableObjectExtensionNode() = default;


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomizableObjectExtensionNode(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectExtensionNode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectExtensionNode)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomizableObjectExtensionNode() {} \
public: \
	typedef UCustomizableObjectExtensionNode UClassType; \
	typedef ICustomizableObjectExtensionNode ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_13_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectExtensionNode;

// ********** End Interface UCustomizableObjectExtensionNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_ICustomizableObjectExtensionNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
