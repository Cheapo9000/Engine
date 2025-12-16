// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSITextureUV.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSITextureUV_generated_h
#error "DMMSITextureUV.generated.h already included, missing '#pragma once' in DMMSITextureUV.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSITextureUV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageInputTextureUV;
class UDMTextureUV;
class UDynamicMaterialModel;

// ********** Begin Class UDMMaterialStageInputTextureUV *******************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTextureUV); \
	DECLARE_FUNCTION(execChangeStageInput_UV); \
	DECLARE_FUNCTION(execChangeStageSource_UV); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageInputTextureUV_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputTextureUV_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputTextureUV(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputTextureUV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputTextureUV_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputTextureUV, UDMMaterialStageInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputTextureUV_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputTextureUV)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputTextureUV(UDMMaterialStageInputTextureUV&&) = delete; \
	UDMMaterialStageInputTextureUV(const UDMMaterialStageInputTextureUV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputTextureUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputTextureUV); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputTextureUV)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputTextureUV;

// ********** End Class UDMMaterialStageInputTextureUV *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSITextureUV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
