// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/TG_Expression_MaterialBase.h"

#ifdef TEXTUREGRAPH_TG_Expression_MaterialBase_generated_h
#error "TG_Expression_MaterialBase.generated.h already included, missing '#pragma once' in TG_Expression_MaterialBase.h"
#endif
#define TEXTUREGRAPH_TG_Expression_MaterialBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_MaterialBase **********************************************
struct Z_Construct_UClass_UTG_Expression_MaterialBase_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_MaterialBase_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_MaterialBase(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_MaterialBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_MaterialBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_MaterialBase, UTG_Expression, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_MaterialBase_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_MaterialBase)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_MaterialBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_MaterialBase(UTG_Expression_MaterialBase&&) = delete; \
	UTG_Expression_MaterialBase(const UTG_Expression_MaterialBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_MaterialBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_MaterialBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_MaterialBase) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_MaterialBase();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_38_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_MaterialBase;

// ********** End Class UTG_Expression_MaterialBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_TG_Expression_MaterialBase_h

// ********** Begin Enum EDrawMaterialAttributeTarget **********************************************
#define FOREACH_ENUM_EDRAWMATERIALATTRIBUTETARGET(op) \
	op(EDrawMaterialAttributeTarget::BaseColor) \
	op(EDrawMaterialAttributeTarget::Metallic) \
	op(EDrawMaterialAttributeTarget::Specular) \
	op(EDrawMaterialAttributeTarget::Roughness) \
	op(EDrawMaterialAttributeTarget::Anisotropy) \
	op(EDrawMaterialAttributeTarget::Emissive) \
	op(EDrawMaterialAttributeTarget::Opacity) \
	op(EDrawMaterialAttributeTarget::OpacityMask) \
	op(EDrawMaterialAttributeTarget::Normal) \
	op(EDrawMaterialAttributeTarget::Tangent) \
	op(EDrawMaterialAttributeTarget::Count) 

enum class EDrawMaterialAttributeTarget : uint8;
template<> struct TIsUEnumClass<EDrawMaterialAttributeTarget> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EDrawMaterialAttributeTarget>();
// ********** End Enum EDrawMaterialAttributeTarget ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
