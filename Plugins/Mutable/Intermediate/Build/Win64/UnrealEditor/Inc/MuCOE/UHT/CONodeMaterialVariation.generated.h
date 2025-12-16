// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CONodeMaterialVariation.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialVariation_generated_h
#error "CONodeMaterialVariation.generated.h already included, missing '#pragma once' in CONodeMaterialVariation.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialVariation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCONodeMaterialVariation *************************************************
struct Z_Construct_UClass_UCONodeMaterialVariation_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCONodeMaterialVariation_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCONodeMaterialVariation(); \
	friend struct ::Z_Construct_UClass_UCONodeMaterialVariation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCONodeMaterialVariation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCONodeMaterialVariation, UCustomizableObjectNodeVariation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCONodeMaterialVariation_NoRegister) \
	DECLARE_SERIALIZER(UCONodeMaterialVariation)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCONodeMaterialVariation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCONodeMaterialVariation(UCONodeMaterialVariation&&) = delete; \
	UCONodeMaterialVariation(const UCONodeMaterialVariation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCONodeMaterialVariation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCONodeMaterialVariation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCONodeMaterialVariation) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCONodeMaterialVariation();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_10_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCONodeMaterialVariation;

// ********** End Class UCONodeMaterialVariation ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialVariation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
