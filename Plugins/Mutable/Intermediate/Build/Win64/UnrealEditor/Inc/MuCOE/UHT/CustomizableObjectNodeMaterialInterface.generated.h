// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMaterialInterface.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialInterface_generated_h
#error "CustomizableObjectNodeMaterialInterface.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMaterialInterface.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMaterialInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCustomizableObjectNodeMaterialInterface *****************************
struct Z_Construct_UClass_UCustomizableObjectNodeMaterialInterface_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialInterface_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNodeMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeMaterialInterface(UCustomizableObjectNodeMaterialInterface&&) = delete; \
	UCustomizableObjectNodeMaterialInterface(const UCustomizableObjectNodeMaterialInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeMaterialInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMaterialInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNodeMaterialInterface) \
	virtual ~UCustomizableObjectNodeMaterialInterface() = default;


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMaterialInterface(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeMaterialInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeMaterialInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeMaterialInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeMaterialInterface_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMaterialInterface)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomizableObjectNodeMaterialInterface() {} \
public: \
	typedef UCustomizableObjectNodeMaterialInterface UClassType; \
	typedef ICustomizableObjectNodeMaterialInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_12_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeMaterialInterface;

// ********** End Interface UCustomizableObjectNodeMaterialInterface *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMaterialInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
