// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CONodeMaterialSwitch.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialSwitch_generated_h
#error "CONodeMaterialSwitch.generated.h already included, missing '#pragma once' in CONodeMaterialSwitch.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CONodeMaterialSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCONodeMaterialSwitch ****************************************************
struct Z_Construct_UClass_UCONodeMaterialSwitch_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCONodeMaterialSwitch_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCONodeMaterialSwitch(); \
	friend struct ::Z_Construct_UClass_UCONodeMaterialSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCONodeMaterialSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UCONodeMaterialSwitch, UCustomizableObjectNodeSwitchBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCONodeMaterialSwitch_NoRegister) \
	DECLARE_SERIALIZER(UCONodeMaterialSwitch)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCONodeMaterialSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCONodeMaterialSwitch(UCONodeMaterialSwitch&&) = delete; \
	UCONodeMaterialSwitch(const UCONodeMaterialSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCONodeMaterialSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCONodeMaterialSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCONodeMaterialSwitch) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCONodeMaterialSwitch();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_11_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCONodeMaterialSwitch;

// ********** End Class UCONodeMaterialSwitch ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CONodeMaterialSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
