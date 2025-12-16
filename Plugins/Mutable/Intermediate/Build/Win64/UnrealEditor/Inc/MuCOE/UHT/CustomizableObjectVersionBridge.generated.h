// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectVersionBridge.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectVersionBridge_generated_h
#error "CustomizableObjectVersionBridge.generated.h already included, missing '#pragma once' in CustomizableObjectVersionBridge.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectVersionBridge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCustomizableObjectVersionBridgeInterface ****************************
struct Z_Construct_UClass_UCustomizableObjectVersionBridgeInterface_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectVersionBridgeInterface_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectVersionBridgeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectVersionBridgeInterface(UCustomizableObjectVersionBridgeInterface&&) = delete; \
	UCustomizableObjectVersionBridgeInterface(const UCustomizableObjectVersionBridgeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectVersionBridgeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectVersionBridgeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectVersionBridgeInterface) \
	virtual ~UCustomizableObjectVersionBridgeInterface() = default;


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomizableObjectVersionBridgeInterface(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectVersionBridgeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectVersionBridgeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectVersionBridgeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectVersionBridgeInterface_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectVersionBridgeInterface)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomizableObjectVersionBridgeInterface() {} \
public: \
	typedef UCustomizableObjectVersionBridgeInterface UClassType; \
	typedef ICustomizableObjectVersionBridgeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_9_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectVersionBridgeInterface;

// ********** End Interface UCustomizableObjectVersionBridgeInterface ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectVersionBridge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
