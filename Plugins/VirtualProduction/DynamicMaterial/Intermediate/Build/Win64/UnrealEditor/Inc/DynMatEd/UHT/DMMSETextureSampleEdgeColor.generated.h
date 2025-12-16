// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageExpressions/DMMSETextureSampleEdgeColor.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSETextureSampleEdgeColor_generated_h
#error "DMMSETextureSampleEdgeColor.generated.h already included, missing '#pragma once' in DMMSETextureSampleEdgeColor.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSETextureSampleEdgeColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMMaterialStageExpressionTextureSampleEdgeColor *************************
struct Z_Construct_UClass_UDMMaterialStageExpressionTextureSampleEdgeColor_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageExpressionTextureSampleEdgeColor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageExpressionTextureSampleEdgeColor(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageExpressionTextureSampleEdgeColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageExpressionTextureSampleEdgeColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageExpressionTextureSampleEdgeColor, UDMMaterialStageExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageExpressionTextureSampleEdgeColor_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageExpressionTextureSampleEdgeColor) \
	virtual UObject* _getUObject() const override { return const_cast<UDMMaterialStageExpressionTextureSampleEdgeColor*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageExpressionTextureSampleEdgeColor(UDMMaterialStageExpressionTextureSampleEdgeColor&&) = delete; \
	UDMMaterialStageExpressionTextureSampleEdgeColor(const UDMMaterialStageExpressionTextureSampleEdgeColor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageExpressionTextureSampleEdgeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageExpressionTextureSampleEdgeColor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageExpressionTextureSampleEdgeColor) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageExpressionTextureSampleEdgeColor();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageExpressionTextureSampleEdgeColor;

// ********** End Class UDMMaterialStageExpressionTextureSampleEdgeColor ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageExpressions_DMMSETextureSampleEdgeColor_h

// ********** Begin Enum EDMEdgeLocation ***********************************************************
#define FOREACH_ENUM_EDMEDGELOCATION(op) \
	op(EDMEdgeLocation::TopLeft) \
	op(EDMEdgeLocation::Top) \
	op(EDMEdgeLocation::TopRight) \
	op(EDMEdgeLocation::Left) \
	op(EDMEdgeLocation::Center) \
	op(EDMEdgeLocation::Right) \
	op(EDMEdgeLocation::BottomLeft) \
	op(EDMEdgeLocation::Bottom) \
	op(EDMEdgeLocation::BottomRight) \
	op(EDMEdgeLocation::Custom) 

enum class EDMEdgeLocation : uint8;
template<> struct TIsUEnumClass<EDMEdgeLocation> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMEdgeLocation>();
// ********** End Enum EDMEdgeLocation *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
