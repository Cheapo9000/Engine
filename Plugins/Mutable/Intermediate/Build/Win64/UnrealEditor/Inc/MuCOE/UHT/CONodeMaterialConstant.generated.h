// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CONodeMaterialConstant.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialConstant_generated_h
#error "CONodeMaterialConstant.generated.h already included, missing '#pragma once' in CONodeMaterialConstant.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCONodeMaterialConstant **************************************************
struct Z_Construct_UClass_UCONodeMaterialConstant_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCONodeMaterialConstant_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCONodeMaterialConstant(); \
	friend struct ::Z_Construct_UClass_UCONodeMaterialConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCONodeMaterialConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UCONodeMaterialConstant, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCONodeMaterialConstant_NoRegister) \
	DECLARE_SERIALIZER(UCONodeMaterialConstant)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCONodeMaterialConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCONodeMaterialConstant(UCONodeMaterialConstant&&) = delete; \
	UCONodeMaterialConstant(const UCONodeMaterialConstant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCONodeMaterialConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCONodeMaterialConstant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCONodeMaterialConstant) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCONodeMaterialConstant();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_13_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCONodeMaterialConstant;

// ********** End Class UCONodeMaterialConstant ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
