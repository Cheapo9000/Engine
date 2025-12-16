// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeMeshReshape.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshape_generated_h
#error "CustomizableObjectNodeMeshReshape.generated.h already included, missing '#pragma once' in CustomizableObjectNodeMeshReshape.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeMeshReshape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMeshReshapeColorUsage ********************************************
struct Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshReshapeColorUsage_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FMeshReshapeColorUsage;
// ********** End ScriptStruct FMeshReshapeColorUsage **********************************************

// ********** Begin Class UCustomizableObjectNodeMeshReshape ***************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMeshReshape, CUSTOMIZABLEOBJECTEDITOR_API)


struct Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeMeshReshape(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeMeshReshape, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeMeshReshape_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeMeshReshape) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeMeshReshape(UCustomizableObjectNodeMeshReshape&&) = delete; \
	UCustomizableObjectNodeMeshReshape(const UCustomizableObjectNodeMeshReshape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeMeshReshape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeMeshReshape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeMeshReshape) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeMeshReshape();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_44_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeMeshReshape;

// ********** End Class UCustomizableObjectNodeMeshReshape *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeMeshReshape_h

// ********** Begin Enum EMeshReshapeVertexColorChannelUsage ***************************************
#define FOREACH_ENUM_EMESHRESHAPEVERTEXCOLORCHANNELUSAGE(op) \
	op(EMeshReshapeVertexColorChannelUsage::None) \
	op(EMeshReshapeVertexColorChannelUsage::RigidClusterId) \
	op(EMeshReshapeVertexColorChannelUsage::MaskWeight) 

enum class EMeshReshapeVertexColorChannelUsage;
template<> struct TIsUEnumClass<EMeshReshapeVertexColorChannelUsage> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshReshapeVertexColorChannelUsage>();
// ********** End Enum EMeshReshapeVertexColorChannelUsage *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
