// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureLayer_generated_h
#error "CustomizableObjectNodeTextureLayer.generated.h already included, missing '#pragma once' in CustomizableObjectNodeTextureLayer.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectNodeTextureLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizableObjectTextureLayer ***********************************
struct Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FCustomizableObjectTextureLayer;
// ********** End ScriptStruct FCustomizableObjectTextureLayer *************************************

// ********** Begin Class UCustomizableObjectNodeTextureLayer **************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureLayer, CUSTOMIZABLEOBJECTEDITOR_API)


struct Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectNodeTextureLayer(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectNodeTextureLayer, UCustomizableObjectNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectNodeTextureLayer) \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectNodeTextureLayer(UCustomizableObjectNodeTextureLayer&&) = delete; \
	UCustomizableObjectNodeTextureLayer(const UCustomizableObjectNodeTextureLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectNodeTextureLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectNodeTextureLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectNodeTextureLayer) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectNodeTextureLayer();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_51_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_55_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectNodeTextureLayer;

// ********** End Class UCustomizableObjectNodeTextureLayer ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h

// ********** Begin Enum ECustomizableObjectTextureLayerEffect *************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTTEXTURELAYEREFFECT(op) \
	op(COTLE_MODULATE) \
	op(COTLE_MULTIPLY) \
	op(COTLE_SOFTLIGHT) \
	op(COTLE_HARDLIGHT) \
	op(COTLE_DODGE) \
	op(COTLE_BURN) \
	op(COTLE_SCREEN) \
	op(COTLE_OVERLAY) \
	op(COTLE_ALPHA_OVERLAY) \
	op(COTLE_NORMAL_COMBINE) 

enum ECustomizableObjectTextureLayerEffect : int;
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectTextureLayerEffect>();
// ********** End Enum ECustomizableObjectTextureLayerEffect ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
