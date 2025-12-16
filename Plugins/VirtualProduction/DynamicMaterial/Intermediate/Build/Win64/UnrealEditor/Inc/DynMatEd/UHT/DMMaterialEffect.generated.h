// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialEffect.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialEffect_generated_h
#error "DMMaterialEffect.generated.h already included, missing '#pragma once' in DMMaterialEffect.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialEffect;
class UDMMaterialEffectStack;
enum class EDMMaterialEffectTarget : uint8;
enum class EDMMaterialLayerStage : uint8;

// ********** Begin Class UDMMaterialEffect ********************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectDescription); \
	DECLARE_FUNCTION(execGetEffectName); \
	DECLARE_FUNCTION(execGetEffectTarget); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execFindIndex); \
	DECLARE_FUNCTION(execGetEffectStack); \
	DECLARE_FUNCTION(execCreateEffect); \
	DECLARE_FUNCTION(execStageTypeToEffectType);


struct Z_Construct_UClass_UDMMaterialEffect_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialEffect_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialEffect(); \
	friend struct ::Z_Construct_UClass_UDMMaterialEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialEffect, UDMMaterialComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialEffect_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialEffect) \
	virtual UObject* _getUObject() const override { return const_cast<UDMMaterialEffect*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialEffect(UDMMaterialEffect&&) = delete; \
	UDMMaterialEffect(const UDMMaterialEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialEffect); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialEffect) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialEffect();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_28_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialEffect;

// ********** End Class UDMMaterialEffect **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffect_h

// ********** Begin Enum EDMMaterialEffectTarget ***************************************************
#define FOREACH_ENUM_EDMMATERIALEFFECTTARGET(op) \
	op(EDMMaterialEffectTarget::None) \
	op(EDMMaterialEffectTarget::BaseStage) \
	op(EDMMaterialEffectTarget::MaskStage) \
	op(EDMMaterialEffectTarget::TextureUV) \
	op(EDMMaterialEffectTarget::Slot) 

enum class EDMMaterialEffectTarget : uint8;
template<> struct TIsUEnumClass<EDMMaterialEffectTarget> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMMaterialEffectTarget>();
// ********** End Enum EDMMaterialEffectTarget *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
