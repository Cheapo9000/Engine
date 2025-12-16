// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_Material.h"

#ifdef TEXTUREGRAPH_TG_Expression_Material_generated_h
#error "TG_Expression_Material.generated.h already included, missing '#pragma once' in TG_Expression_Material.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Material_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Material **************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRenderAttributeOptions);


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_ACCESSORS \
static void SetInputMaterial_WrapperImpl(void* Object, const void* InValue); \
static void SetRenderedAttribute_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UTG_Expression_Material_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Material_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Material(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Material_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Material_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Material, UTG_Expression_MaterialBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Material_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Material)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Material(UTG_Expression_Material&&) = delete; \
	UTG_Expression_Material(const UTG_Expression_Material&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Material); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Material); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTG_Expression_Material)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_18_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_ACCESSORS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Material;

// ********** End Class UTG_Expression_Material ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Material_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
