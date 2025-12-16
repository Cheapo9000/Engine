// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CONodeSchema.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CONodeSchema_generated_h
#error "CONodeSchema.generated.h already included, missing '#pragma once' in CONodeSchema.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CONodeSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCONodeSchemaPinData *****************************************************
struct Z_Construct_UClass_UCONodeSchemaPinData_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCONodeSchemaPinData_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCONodeSchemaPinData(); \
	friend struct ::Z_Construct_UClass_UCONodeSchemaPinData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCONodeSchemaPinData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCONodeSchemaPinData, UCustomizableObjectNodePinData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCONodeSchemaPinData_NoRegister) \
	DECLARE_SERIALIZER(UCONodeSchemaPinData)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCONodeSchemaPinData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCONodeSchemaPinData(UCONodeSchemaPinData&&) = delete; \
	UCONodeSchemaPinData(const UCONodeSchemaPinData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCONodeSchemaPinData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCONodeSchemaPinData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCONodeSchemaPinData) \
	NO_API virtual ~UCONodeSchemaPinData();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_13_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCONodeSchemaPinData;

// ********** End Class UCONodeSchemaPinData *******************************************************

// ********** Begin ScriptStruct FPinSchema ********************************************************
struct Z_Construct_UScriptStruct_FPinSchema_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPinSchema_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FPinSchema;
// ********** End ScriptStruct FPinSchema **********************************************************

// ********** Begin Class UCONodeSchema ************************************************************
struct Z_Construct_UClass_UCONodeSchema_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCONodeSchema_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCONodeSchema(); \
	friend struct ::Z_Construct_UClass_UCONodeSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCONodeSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UCONodeSchema, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCONodeSchema_NoRegister) \
	DECLARE_SERIALIZER(UCONodeSchema)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCONodeSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCONodeSchema(UCONodeSchema&&) = delete; \
	UCONodeSchema(const UCONodeSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCONodeSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCONodeSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCONodeSchema) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCONodeSchema();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_58_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCONodeSchema;

// ********** End Class UCONodeSchema **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
