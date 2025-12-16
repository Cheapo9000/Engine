// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageExpression.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageExpression_generated_h
#error "DMMaterialStageExpression.generated.h already included, missing '#pragma once' in DMMaterialStageExpression.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageExpression_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialStage;
class UDMMaterialStageExpression;
class UMaterialExpression;
enum class EDMExpressionMenu : uint8;

// ********** Begin Class UDMMaterialStageExpression ***********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMenus); \
	DECLARE_FUNCTION(execGetMaterialExpressionClass); \
	DECLARE_FUNCTION(execChangeStageSource_Expression);


struct Z_Construct_UClass_UDMMaterialStageExpression_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageExpression_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageExpression(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageExpression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageExpression_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageExpression, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageExpression_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageExpression)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageExpression(UDMMaterialStageExpression&&) = delete; \
	UDMMaterialStageExpression(const UDMMaterialStageExpression&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageExpression); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageExpression) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageExpression();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_35_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageExpression;

// ********** End Class UDMMaterialStageExpression *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageExpression_h

// ********** Begin Enum EDMExpressionMenu *********************************************************
#define FOREACH_ENUM_EDMEXPRESSIONMENU(op) \
	op(EDMExpressionMenu::Camera) \
	op(EDMExpressionMenu::Decal) \
	op(EDMExpressionMenu::Geometry) \
	op(EDMExpressionMenu::Landscape) \
	op(EDMExpressionMenu::Math) \
	op(EDMExpressionMenu::Object) \
	op(EDMExpressionMenu::Other) \
	op(EDMExpressionMenu::Particle) \
	op(EDMExpressionMenu::Texture) \
	op(EDMExpressionMenu::Time) \
	op(EDMExpressionMenu::WorldSpace) 

enum class EDMExpressionMenu : uint8;
template<> struct TIsUEnumClass<EDMExpressionMenu> { enum { Value = true }; };
template<> DYNAMICMATERIALEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMExpressionMenu>();
// ********** End Enum EDMExpressionMenu ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
