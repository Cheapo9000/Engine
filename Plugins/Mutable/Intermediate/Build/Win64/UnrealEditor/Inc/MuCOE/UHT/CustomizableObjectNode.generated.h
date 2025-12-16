// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNode.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNode_generated_h
#error "CustomizableObjectNode.generated.h already included, missing '#pragma once' in CustomizableObjectNode.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPostEditChangePropertyDelegateParameters;

// ********** Begin Class UCustomizableObjectNodePinData *******************************************
struct Z_Construct_UClass_UCustomizableObjectNodePinData_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodePinData(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodePinData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodePinData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodePinData_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodePinData)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodePinData(UCustomizableObjectNodePinData&&) = delete; \
	UCustomizableObjectNodePinData(const UCustomizableObjectNodePinData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectNodePinData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodePinData); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodePinData) \
	NO_API virtual ~UCustomizableObjectNodePinData();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_28_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodePinData;

// ********** End Class UCustomizableObjectNodePinData *********************************************

// ********** Begin ScriptStruct FPostEditChangePropertyDelegateParameters *************************
struct Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FPostEditChangePropertyDelegateParameters;
// ********** End ScriptStruct FPostEditChangePropertyDelegateParameters ***************************

// ********** Begin Delegate FPostEditChangePropertyDelegate ***************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_66_DELEGATE \
CUSTOMIZABLEOBJECTEDITOR_API void FPostEditChangePropertyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PostEditChangePropertyDelegate, FPostEditChangePropertyDelegateParameters& Parameters);


// ********** End Delegate FPostEditChangePropertyDelegate *****************************************

// ********** Begin Class UCustomizableObjectNode **************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNode, CUSTOMIZABLEOBJECTEDITOR_API)


struct Z_Construct_UClass_UCustomizableObjectNode_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNode(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNode, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNode_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNode) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNode(UCustomizableObjectNode&&) = delete; \
	UCustomizableObjectNode(const UCustomizableObjectNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectNode) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNode();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_90_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h_94_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNode;

// ********** End Class UCustomizableObjectNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_Nodes_CustomizableObjectNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
